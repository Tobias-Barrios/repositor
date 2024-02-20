#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Prototipado Funciones
void ingresarDatos();
float calcularImporte(int, float);
void bonificacion(float);
void visualizarDatos();
//prototipado variables Globales
char tipoProducto[2];
int valorBonificado;
int cantUnidades;
float precioUnit;
float importeFinal;

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
	printf("Indicar el tipo de producto (P-Perfumeria, F-Farmacia y L-Limpieza): ");
	fflush(stdin);
	scanf("%c", &tipoProducto[0]);
}

float calcularImporte(int pCantUnidades, float pPrecioUnit){
	return (float)pCantUnidades * pPrecioUnit;
}

void bonificacion(float pImporte){
	switch(tipoProducto[0]){
		case 'P':
			valorBonificado = 5;
			importeFinal = pImporte * 0.95;
			break;
		case 'F':
			valorBonificado = 10;
			importeFinal = pImporte * 0.90;
			break;
		case 'L':
			valorBonificado = 15;
			importeFinal = pImporte * 0.85;
			break;
		default:
			valorBonificado = 0;
			importeFinal = pImporte;
	}
}

void visualizarDatos(){
	bonificacion(calcularImporte(cantUnidades, precioUnit));
	printf("Importe: $ %.2f - bonificado: %d",importeFinal , valorBonificado);
}

