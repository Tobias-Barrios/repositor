#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LINE "-------------"

//Prototipado Funciones
void ingresarDatos();
void visualizarDatos();
//prototipado variables Globales
int valorTabla;
int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}
void ingresarDatos(){
	printf("Introduzca un numero entero: ");
	scanf("%d", &valorTabla);
}

void visualizarDatos(){
	int i;
	int tabla;
	printf("%s\n",LINE);
	printf("Tabla del %d\n", valorTabla);
	printf("%s\n",LINE);
	for(i=0; i<=10; i++){
		tabla=0;
		tabla=valorTabla*i;
		printf("%d X %d = %d\n",valorTabla, i, tabla);
	}
}

