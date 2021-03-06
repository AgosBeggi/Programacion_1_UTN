/*
 * Ingresos.c
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Validar.h"

#define LARGO_CADENA 1000

int IngresoEntero(char mensaje[], int* puntero){
	char numeroCadena [LARGO_CADENA];
	int numero;
	int estadoNumero;
	int estadoBooleano;

	estadoBooleano=0;

	printf("%s", mensaje);
	fflush(stdin);
	//fgets(numeroCadena, strlen(numeroCadena),stdin); //este no me muestra el numero
	gets(numeroCadena);
	//scanf('%[^\n]', &numeroCadena); // este me tira error, con "" o con ''

	estadoNumero = EsNumeroEntero(numeroCadena, strlen(numeroCadena));
	if(estadoNumero == 1){
		numero = atoi(numeroCadena);
		*puntero = numero;
		estadoBooleano = 1;
	}

	return estadoBooleano;
}

int IngresoFlotante(char mensaje[], float* puntero){
	char numeroCadena [LARGO_CADENA];
	float numero;
	int estadoNumero;
	int estadoBooleano;

	estadoBooleano=0;

	printf("%s", mensaje);
	fflush(stdin);
	gets(numeroCadena);

	estadoNumero = EsNumeroFlotante(numeroCadena, LARGO_CADENA);
	if(estadoNumero == 1){
		numero = atof(numeroCadena);
		*puntero = numero;
		estadoBooleano = 1;
	}

	return estadoBooleano;
}

int IngresoEnteroConParametros(char mensaje[], int min, int max, int* puntero){
	char numeroCadena [LARGO_CADENA];
	int numero;
	int estadoNumero;
	int estadoNumeroRango;
	int estadoBooleano;

	estadoBooleano=0;

	printf("%s", mensaje);
	fflush(stdin);
	gets(numeroCadena);

	estadoNumero = EsNumeroEntero(numeroCadena, LARGO_CADENA);
	if(estadoNumero == 1){
		numero = atoi(numeroCadena);
	}

	estadoNumeroRango = EstaEnteroEnRango(numero, min, max);
	if(estadoNumero == 1 && estadoNumeroRango == 1){
		*puntero = numero;
		estadoBooleano = 1;
	}

	return estadoBooleano;
}

int IngresoFlotanteConParametros(char mensaje[], float min, float max, float* puntero){
	char numeroCadena [LARGO_CADENA];
	float numero;
	int estadoNumero;
	int estadoNumeroRango;
	int estadoBooleano;

	estadoBooleano=0;

	printf("%s", mensaje);
	fflush(stdin);
	gets(numeroCadena);

	estadoNumero = EsNumeroFlotante(numeroCadena, LARGO_CADENA);
	if(estadoNumero == 1){
		numero = atof(numeroCadena);
	}

	estadoNumeroRango = EstaFlotanteEnRango(numero, min, max);
	if(estadoNumero == 1 && estadoNumeroRango == 1){
		*puntero = numero;
		estadoBooleano = 1;
	}

	return estadoBooleano;
}

/*int IngresarCadena(char mensaje[], char* cadena[], int tamanio)
{
	//para terminarla hay que probar c?mo funciona
	int retorno;

	retorno = 0;

	printf("%s", mensaje);
	fflush(stdin);
	fgets(cadena, strlen(cadena),stdin);

	retorno = 1;

	return retorno;
}*/
