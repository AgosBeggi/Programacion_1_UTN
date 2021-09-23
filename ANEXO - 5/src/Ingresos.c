/*
 * Ingresos.c
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */

#include <stdio.h>
#include <stdlib.h>
#include"Validar.h"

int IngresoEnteroConParametros(char mensaje[], int min, int max){

	int numero;
	printf("%s", mensaje);
	scanf("%d", &numero);

	numero=ValidarEntero(numero, min, max);

	return numero;
}
