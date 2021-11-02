/*
 * Validar.c
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */
#include "Validar.h"

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

int Its_A_Number_Int(char string[]){

	int i;
	int retorno;

	retorno = 0;

	for(i = 0; string[i] != '\0'; i++){

		if(isdigit(string[i]) || string[0] == '-' ){
			retorno = 1;
			break;
		}
	}

	return retorno;
}

int Its_A_Number_Float(char string[]){

	int i;
	float retorno;
	int contadorDecimal;

	retorno = 0;
	contadorDecimal = 0;

	for(i = 0; string[i] != '\0'; i++){
		if(string[i] == '.'){
			contadorDecimal++;
		}

		if((isdigit(string[i]) || contadorDecimal <= 1) || string[0] == '-' ){
			retorno = 1;
			break;
		}
	}

	return retorno;
}

int Its_A_Number_Float_Negative(char string[]){

	int i;
	float retorno;
	int contadorDecimal;

	retorno = 0;
	contadorDecimal = 0;

	for(i = 0; string[i] != '\0'; i++){
		if(string[i] == '.'){
			contadorDecimal++;
		}

		if((isdigit(string[i]) || contadorDecimal <= 1)){
			retorno = 1;
			break;
		}
	}

	return retorno;
}

int Is_It_Char(char string[]){

	int i;
	int retorno;

	retorno = 0;

	for(i = 0; i < strlen(string); i++){
		if(isalpha(string[i]) && (string[i] != ' ' && (!(isdigit(string[i]))))){
			retorno = 1;
			break;
		}
	}

	return retorno;
}
