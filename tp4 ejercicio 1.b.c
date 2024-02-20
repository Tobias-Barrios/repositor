#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define AGRADECIMIENTO "¡Gracias por su compra!"

//Prototipado Funciones
void ingresarDatos();
float calcularImporte(int, int);
void visualizarDatos();
//prototipado variables Globales
int partJugados, partGanados ;
int main(){
	ingresarDatos();
 	visualizarDatos();

return 0;
}
void ingresarDatos(){
	printf("Ingresar Cant. de partidos jugados: ");
	scanf("%d", &partJugados);
	printf("Ingresar Cant. de partidos Ganados: ");
	scanf("%d", &partGanados);
}
float calcularPorcentPartGanados(int pPartJugados, int pPartGanados){
	return ((float)pPartGanados/pPartJugados)*100;
}
void visualizarDatos(){
	printf("El porcentaje de partidos ganados es de: %%%.2f", calcularPorcentPartGanados(partJugados,partGanados));
}

