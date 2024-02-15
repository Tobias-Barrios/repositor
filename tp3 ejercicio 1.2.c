#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void visualizarConejo();
void orejas();
void cara();
void patas();

//Prototipado variables Globales

int main(){
	visualizarConejo();
return 0;
}

void visualizarConejo(){
	orejas();
	cara();
	patas();
}

void orejas(){
	printf(" (\\__/)\n");
}

void cara(){
	printf(" (>'.'<)\n");
}

void patas(){
	printf(" (\")_(\")");
}
