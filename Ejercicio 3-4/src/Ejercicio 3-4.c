/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Ejercicio 3-4:
//Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
//Entregado

#include <stdio.h>
#include <stdlib.h>

int IngresoEntero(char mensaje[]);
int ValidarEntero(int numEntero);

int main(void) {

	setbuf(stdout, NULL);

	int numeroEntero;

	numeroEntero = IngresoEntero("Ingrese un numero entero: \n");
	printf("El numero es: %d", numeroEntero);

	return EXIT_SUCCESS;
}

int IngresoEntero(char mensaje[]){

	int numero;

	printf("%s", mensaje);
	scanf("%d", &numero);

	numero=ValidarEntero(numero);

	return numero;
}

int ValidarEntero(int numEntero){

 while(numEntero<-100 || numEntero>100){
 printf("Error. El numero entero debe estar entre -100 y 100\nVuelva a ingresar un numero entero\n");
 scanf("%d", &numEntero);
 }

 return numEntero;
 }
