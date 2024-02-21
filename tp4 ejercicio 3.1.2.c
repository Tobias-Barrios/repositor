#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define N 20

//Prototipado Funciones
void visualizarSecuenciaNumerica();
//prototipado variables Globales

int main(){
	visualizarSecuenciaNumerica();
return 0;
}

void visualizarSecuenciaNumerica(){
	int i;
	for(i=1; i<=N; i++){
		if(!(i % 2 == 0) || i==20){
			printf("%d\n", i);
		}
	}
}

