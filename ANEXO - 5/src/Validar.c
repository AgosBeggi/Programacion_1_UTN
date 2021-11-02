/*
 * Validar.c
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */
#include <stdio.h>

int ValidarEntero(int numEntero, int min, int max) {

	while (numEntero < min || numEntero > max) {
		printf("Error. El numero entero debe estar entre %d y %d", min, max);
		puts("\nVuelva a ingresar un numero entero\n");
		scanf("%d", &numEntero);
	}

	return numEntero;
}

