/*
 * Biblioteca_Ej4-2.c
 *
 *  Created on: 9 sep. 2021
 *      Author: Beggi Agostina
 */
#include <stdio.h>
#include <stdlib.h>

int IngresoEntero(char mensaje[], int min, int max) {

	int numeroIngresado;

	printf("%s", mensaje);
	scanf("%d", &numeroIngresado);
	while (numeroIngresado < min || numeroIngresado > max) {
		printf("Error. Vuelva a ingresar el numero\n");
		scanf("%d", &numeroIngresado);
	}

	return numeroIngresado;
}

float IngresoFloat(char mensaje[], float min, float max) {

	float numeroIngresado;

	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);
	while (numeroIngresado < min || numeroIngresado > max) {
		printf("Error. Vuelva a ingresar el numero\n");
		scanf("%f", &numeroIngresado);
	}

	return numeroIngresado;
}
