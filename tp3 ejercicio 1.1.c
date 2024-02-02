#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void titulo();
void dedos();
void metatarzo();
void talon();
void visualizarHuella();

//Prototipado variables Globales


int main(){
	titulo();
	visualizarHuella();

return 0;
}

void titulo(){
	printf("Dejemos una huella :)\n");
}
void visualizarHuella(){
	dedos();
	metatarzo();
	talon();
}
void dedos(){
	printf(" ooo0\n");
}
void metatarzo(){
	printf("(....)\n ...(\n");
}
void talon(){
	printf("  ._)\n");
}
