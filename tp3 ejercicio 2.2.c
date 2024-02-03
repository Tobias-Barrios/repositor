#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define PI 3.1416

//Prototipado Funciones
void ingresarDatos();
float calcularArea();
void visualizarDatos();
//prototipado variables Globales

int cantFiguras;
float radio;

int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}

void ingresarDatos(){
	printf("Ingresar la cantidad de figuras: ");
	scanf("%d", &cantFiguras);
	printf("Ingresar radio de las figuras: ");
	scanf("%f", &radio);
}
float calcularArea(){
	return PI*(radio*radio);
}
void visualizarDatos(){
	system("cls");
	printf("Cantidad de figuras: %d\n", cantFiguras);
	printf("Radio de las figuras: %.2f\n", radio);
	printf("El area de pintura que hay que cubrir es de: %.2f\n", calcularArea(radio)*cantFiguras);
}
