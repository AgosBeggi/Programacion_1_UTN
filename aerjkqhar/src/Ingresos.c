/*
 * Ingresos.c
 *
 *  Created on: 22 sep. 2021
 *      Author: Beggi - Agostina
 */
#include "Ingresos.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Validar.h"

#define LARGO_CADENA 1000
#define EMPTY 0
#define FULL 1

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
	//scanf("%[^\n]", &numeroCadena);

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

	estadoBooleano = 0;

	printf("%s", mensaje);
	fflush(stdin);
	gets(numeroCadena);

	estadoNumero = EsNumeroFlotante(numeroCadena, LARGO_CADENA);
	if(estadoNumero == 0){//ver bien funcion de validar float
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

int IngresarCadena(char cadena[], int tamanio, char mensaje[]){

	int retorno;
	char auxiliar[LARGO_CADENA];

	retorno = 0;

	printf("%s", mensaje);
	fflush(stdin);
	gets(auxiliar);

	if(auxiliar != NULL){
		strcpy(cadena, auxiliar);
		retorno = 1;
	}

	return retorno;
}
