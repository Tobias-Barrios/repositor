#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void ingresarDatos();
void intercambiarValor(int*, int*);
void visualizarDatos();
//prototipado variables Globales
int n1, n2;
int main(){
	ingresarDatos();
	intercambiarValor(&n1, &n2);
	visualizarDatos();

return 0;
}

void ingresarDatos(){
	printf("Ingresar 1er valor: ");
	scanf("%d", &n1);
	printf("Ingresar 2do valor: ");
	scanf("%d", &n2);
}
void intercambiarValor(int* pN1, int* pN2){
	int temp = *pN1;
	*pN1 = *pN2;
	*pN2 = temp;
}
void visualizarDatos(){
	printf("El 1er valor ahora es: %d\n", n1);
	printf("El 2er valor ahora es: %d\n", n2);
}

