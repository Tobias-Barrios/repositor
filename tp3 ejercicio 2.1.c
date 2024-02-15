#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void ingresarDatos();
float calcularPerimetro(float,float);
void visualizarDatos();
//prototipado variables Globales

float ancho, largo;

int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}

void ingresarDatos(){
	printf("Ingresar el ancho: ");
	scanf("%f", &ancho);
	printf("Ingresar el largo: ");
	scanf("%f", &largo);
}
float calcularPerimetro(float ancho, float largo){
	return 2 * (ancho + largo);
}
void visualizarDatos(){
	system("cls");
	printf("El ancho de la caja es: %.2f\n", ancho);
	printf("El largo de la caja es: %.2f\n", largo);
	printf("El perimetro de la caja es: %.2f\n", calcularPerimetro(ancho, largo));
}
