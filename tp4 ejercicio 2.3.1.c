#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void ingresarDatos();
void visualizarDatos();
//prototipado variables Globales
int temperatura;
int main(){
	ingresarDatos();
	visualizarDatos();
return 0;
}
void ingresarDatos(){
	printf("Ingresar un valor de temperatura: ");
	scanf("%d", &temperatura);
}

void visualizarDatos(){
	if(temperatura >= -10 && temperatura < 10){
		printf("Mucho frio");
	}else{
		if(temperatura >= 10 && temperatura < 15){
			printf("Poco frio");
		}else{
			if(temperatura >= 15 && temperatura < 25){
				printf("Temperatura normal");
			}else{
				if(temperatura >= 25 && temperatura < 30){
					printf("Poco calor");
				}else{
					if(temperatura >= 30 && temperatura < 45){
						printf("Mucho calor");
					}else{
						printf("Rango invalido");
					}
				}
			}
		}	
	}

}

