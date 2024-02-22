#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define CADENA 30
#define LINE "****************************************"
#define AGRADECIMIENTO "¡Gracias por su compra!"

//Prototipado Funciones
void ingresarDatos(int*);
void sumarProductos();
void visualizarDatos();
//prototipado variables Globales
int cantProducto;
float precioUnit; 
float acumProduc=0;
char descripcion[CADENA];
int main(){
	int opcion = 0;
	while(opcion==0){
		ingresarDatos(&opcion);
		sumarProductos();
	}
	visualizarDatos();
return 0;
}
void ingresarDatos(int* pOpcion){
		printf("Ingresar la cantidad del producto: ");
		scanf("%d",&cantProducto);
		printf("Ingresar el precio: ");
		scanf("%f",&precioUnit);
		printf("Ingresar la descripcion del producto: ");
		fflush(stdin);
		scanf("%[^\n]s",descripcion);
		printf("Desea ingresar mas productos? (-1 para terminar - 0 para continuar): ");
		scanf("%d",pOpcion);
	
}
void sumarProductos(){
	acumProduc+=cantProducto*precioUnit;
}
void visualizarDatos(){
	printf("%s\nTOTAL A PAGAR: $ %.2f\n%s\n",LINE ,acumProduc ,LINE);
	printf("%s\n",AGRADECIMIENTO);

}

