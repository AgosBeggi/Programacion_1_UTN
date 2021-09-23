/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números.
//Probar la aplicación con distintos valores.
//Entregado

#include <stdio.h>
#include <stdlib.h>
#define X 5

int main(void) {

	setbuf(stdout, NULL);

	int numero;
	int i;
	int acumuladorNumero;
	float promedio;

	acumuladorNumero = 0;

	for (i = 0; i < X; i++) {
		printf("Ingrese un numero\n");
		scanf("%d", &numero);
		acumuladorNumero += numero;
	}

	promedio = (float) acumuladorNumero / X;
	printf("El promedio es: %f", promedio);

	return EXIT_SUCCESS;
}
