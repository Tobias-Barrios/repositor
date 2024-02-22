#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define ALUMNOS 5

//Prototipado Funciones
void ingresarDatos();
float calcularPromedio(float[]);

void visualizarDatos();
//prototipado variables Globales
float nota[ALUMNOS];
int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}
void ingresarDatos(){
	int i;
	for(i=0; i<ALUMNOS; i++){
		printf("Ingresar la calificacion del estudiante %d: ", i+1);
		scanf("%f",&nota[i]);
	}

}

float calcularPromedio(float pNotas[]){
	float acumNotas=0;
	int i;
	for(i=0; i < ALUMNOS; i++){
		acumNotas+=pNotas[i];
	}
	return (float)acumNotas/ALUMNOS;
}

void visualizarDatos(){
	printf("El promedio de examenes del 1er parcial es: %.2f", calcularPromedio(nota));
}

