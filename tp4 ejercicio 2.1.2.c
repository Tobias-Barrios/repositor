#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define AGRADECIMIENTO "¡Gracias por su compra!"

//Prototipado Funciones
void ingresarDatos();
float calcularImporte(int, float);
float bonificacion(float);
void visualizarDatos();
//prototipado variables Globales
int cantUnidades;
float precioUnit;
int main(){
	ingresarDatos();
 	visualizarDatos();

return 0;
}
void ingresarDatos(){
	printf("Ingresar Cant. de Unidades: ");
	scanf("%d", &cantUnidades);
	printf("Ingresar precio Unit.: ");
	scanf("%f", &precioUnit);
}
float calcularImporte(int pCantUnidades, float pPrecioUnit){
	return (float)pCantUnidades * pPrecioUnit;
}
float bonificacion(float pTotal){
	if(pTotal>=5000){
		return pTotal * ((float)15/100);
	}else{
		return 0.00;
	}
}
void visualizarDatos(){
	system("cls");
	printf("Cant. unidades: %d - Precio unit: $ %.2f\n", cantUnidades, precioUnit);
	printf("Total: $ %.2f\n", calcularImporte(cantUnidades,precioUnit));
	printf("Bonificacion: $ %.2f\n", bonificacion(calcularImporte(cantUnidades,precioUnit)));
	printf("Total a pagar: $ %.2f\n", calcularImporte(cantUnidades,precioUnit)-bonificacion(calcularImporte(cantUnidades,precioUnit)));
	printf("%s\n", AGRADECIMIENTO);
}

