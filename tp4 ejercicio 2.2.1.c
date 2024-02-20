#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void ingresarDatos();
float prestamo(float);
void visualizarDatos();
//prototipado variables Globales
float sueldo;

int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}
void ingresarDatos(){
	printf("Ingrese el monto de su sueldo: ");
	scanf("%f", &sueldo);
}
float prestamo(float pSueldo){
	if(pSueldo>=100000){
		return 300000;
	}else{
		return pSueldo * ((float)75/100);
	}
}
void visualizarDatos(){
	printf("Cumple los requisitos para un prestamo de hasta %.2f", prestamo(sueldo));
}

