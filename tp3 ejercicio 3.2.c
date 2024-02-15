#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void visualizarResultados();
int mitadDe(int);
int dobleDe(int);
int tripleDe(int);
int anteriorDe(int);
int posteriorDe(int);
int posteriorDelDobleDe(int);
//prototipado variables Globales

int main(){
	visualizarResultados();
return 0;
}
void visualizarResultados(){
	int num;
	printf("Ingresar un numero entero: ");
	scanf("%d",&num);
	printf("La mitad %d es: %d\n",num ,mitadDe(num));
	printf("El doble de %d es: %d\n",num ,dobleDe(num));
	printf("El triple de %d es: %d\n",num ,tripleDe(num));
	printf("El anterior de %d es: %d\n",num ,anteriorDe(num));
	printf("El posterior de %d es: %d\n",num ,posteriorDe(num));
	printf("El posterior Del Doble de %d es: %d\n",num ,posteriorDelDobleDe(num));
	
}
int mitadDe(int pNro){
	return pNro/2;
}
int dobleDe(int pNro){
	return pNro*2;
}
int tripleDe(int pNum){
	return pNum*3;
}
int anteriorDe(int pNum){
	return pNum-1;
}
int posteriorDe(int pNum){
	return pNum+1;
}
int posteriorDelDobleDe(int pNum){
	return pNum * 2 + 1;
}
