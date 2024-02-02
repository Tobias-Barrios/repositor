#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void visualizarConejo();
void cabeza();
void cuerpo();
void patas();

//Prototipado variables Globales

int main(){
	visualizarConejo();
return 0;
}

void visualizarConejo(){
	cabeza();
	cuerpo();
	patas();
}

void cabeza(){
	printf(" (\\__/)\n");
}

void cuerpo(){
	printf(" (>'.'<)\n");
}

void patas(){
	printf(" (\")_(\")");
}
