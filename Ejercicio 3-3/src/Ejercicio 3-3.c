/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
// Ejercicio 3-3:
//Crear una función que pida el ingreso de un entero y lo retorne.
//Entregado

#include <stdio.h>
#include <stdlib.h>

int IngresoEntero(char mensaje[]);

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

	return numero;
}
