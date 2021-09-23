/*
 * Ingresos.c
 *
 *  Created on: 22 sep. 2021
 *      Author: Beggi - Agostina
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float IngresarFlotante(char mensaje[])
{
	float numeroIngresado;
	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);

	return numeroIngresado;
}

int IngresarEntero(char mensaje[])
{
	int numeroIngresado;
	printf("%s", mensaje);
	scanf("%d", &numeroIngresado);

	return numeroIngresado;
}

int getString(char cadena[], char mensaje[], int tam)
{
	char auxiliarString[1000];
	int retorno;
	retorno = 0;
	if (cadena != NULL && mensaje != NULL)
	{
		retorno = 1;
		printf(mensaje);
		fflush(stdin);
		gets(auxiliarString);
		while (strlen(auxiliarString) > tam)
		{
			printf("Reingrese: ");
			fflush(stdin);
			gets(auxiliarString);
		}
		strcpy(cadena, auxiliarString);
	}
	return retorno;
}

