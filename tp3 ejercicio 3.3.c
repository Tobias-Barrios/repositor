#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
float calcularMasaCorporal(float, float);
void ingresarDatos();
void visualizarDatos();
//prototipado variables Globales
float peso, altura;
int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}
float calcularMasaCorporal(float pPeso, float pAltura){
	float alturaMetro=pAltura/100;
	return pPeso/(alturaMetro*alturaMetro);
}
void ingresarDatos(){
	printf("Ingresar el peso: ");
	scanf("%f", &peso);
	printf("Ingresar la altura en cm: ");
	scanf("%f", &altura);
}
void visualizarDatos(){
	printf("El indice de masa corporal es de: %.2f",calcularMasaCorporal(peso, altura));
}

