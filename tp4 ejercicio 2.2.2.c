#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void ingresarDatos();
float descuento(char, int);
void visualizarDatos();
//prototipado variables Globales
int tipoEntrada;
float precioInicial;
char ventaEntrada[2];
int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}
void ingresarDatos(){
	printf("Ingresar si el tipo de entrada (1-con consumicion, 2-sin consumicion): ");
	scanf("%d", &tipoEntrada);
	printf("Ingresar si la entrada es anticipada (S/N): ");
	fflush(stdin);
	scanf("%c",&ventaEntrada[0]);
}
float descuento(char pVentaEntrada, int pTipoEntrada){
	if(pTipoEntrada==1){
		precioInicial=750;
	}else{
		precioInicial=500;
	}
	
	if(pVentaEntrada=='S'){
		return precioInicial * ((float)80/100);//Descuento del 20%
	}else{
		return precioInicial;
	}
}

void visualizarDatos(){
	printf("Tipo de entrada: %d - Importe a pagar: %.2f", tipoEntrada, descuento(ventaEntrada[0], tipoEntrada));
	
}

