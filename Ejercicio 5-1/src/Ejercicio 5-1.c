/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Ejercicio 5-1:
//Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"

#define X 5

int main(void) {
	setbuf(stdout, NULL);
	int listaNumeros[X];
	int suma;

	CargarVector(listaNumeros, X);

	printf("\nLos numeros ingresados son: \n");
	MostrarVector(listaNumeros, X);

	suma=SumarVector(listaNumeros, X);

	printf("\nLos numeros ingresados suman: %d", suma);

	return EXIT_SUCCESS;
}
