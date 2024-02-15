#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
 void multiplicarPor10(int);
//prototipado variables Globales

int main(){
	//multiplicarPor10(20,5); codigo con error
	
	multiplicarPor10(20);//Error resuelto
return 0;
}

void multiplicarPor10(int pNro){
	printf("El resultado es: %d \n\n", pNro * 10);
}

/*No compilaba porque en la declaracion de la funcion solo esta aclarado de que recibiria
un solo parametro mientras que en la llamada de la misma funcion se le esta pasando
2 argumento lo cual genera conflicto debido a ese segundo argumento*/
