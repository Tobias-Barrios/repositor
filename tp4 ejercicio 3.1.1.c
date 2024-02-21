#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void ingresarDatos();
void visualizarDatos();
//prototipado variables Globales
int cantVeces;
int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}
void ingresarDatos(){
	printf("Ingresar el limite de numeros que desea: ");
	scanf("%d", &cantVeces);
}

void visualizarDatos(){
	int i;
	for(i=1; i<=cantVeces; i++){
		printf("%d\n",i);
	}
}

