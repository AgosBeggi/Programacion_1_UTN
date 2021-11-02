/*
 * Validar.c
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */
#include "Validar.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int EsNumeroEntero(char numeroCadena [], int size){

	int retorno;
	int i;

	retorno = 1;

	for (i = 0; i < size; ++i) {
		if (numeroCadena[i] == '-' && i > 0) {
			retorno = 0;
			break;
		}
		if (!isdigit(numeroCadena[i]) && numeroCadena[i] != '-') {
			retorno = 0;
			break;
		}
	}

	return retorno;
}

int EsNumeroFlotante(char numeroCadena [], int size){

	int retorno;
	int tieneDecimal;
	int i;

	retorno = 0;
	tieneDecimal = 0;

	for (i = 0; i < size; i++) {
		/*if (numeroCadena[i] == '-' && i > 0) {
			retorno = 0;
			break;
		}*/
		if(numeroCadena[i] == '.'){
			tieneDecimal++;
			if(tieneDecimal>1){
				retorno = 0;
				break;
			}
		}//numeroCadena[i] != '-'

		if (isdigit(numeroCadena[i]) && numeroCadena[i] != '.') {
			retorno = 1;
			break;
		}
	}
	return retorno;
}

int EstaEnteroEnRango(int numero, int min, int max){

	int retorno;

	retorno = 1;

	if(numero < min && numero > max){
		retorno = 0;
	}

	return retorno;
}

int EstaFlotanteEnRango(float numero, float min, float max){

	int retorno;

	retorno = 1;

	if(numero < min && numero > max){
		retorno = 0;
	}

	return retorno;
}

int EsCero(int numero){

	int retorno;

	retorno = 0;

	if(numero == 0){
		retorno = 1;
	}

	return retorno;
}
