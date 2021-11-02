/*
 * Math.c
 *
 *  Created on: 6 oct. 2021
 *      Author: Beggi Agostina
 */

#include "Math.h"

float Sumar(float num1, float num2) {

	float resultado;

	resultado = num1 + num2;

	return resultado;
}

float Restar(float num1, float num2) {

	float resultado;

	resultado = num1 - num2;

	return resultado;
}

float Multiplicar(float num1, float num2) {
	float resultado;

	resultado = num1 * num2;

	return resultado;

}

int Dividir(float *punteroResultado, float num1, float num2) {

	int validarCero;
	float resultado;
	int retorno;

	validarCero = EsCero(num2);
	if (!(validarCero == 0)) {
		resultado = num1 / num2;
		*punteroResultado = resultado;
		retorno = 1;
	} else {
		retorno = 0;

	}

	return retorno;
}

int Factorear(int *punteroResultado, char string[]) {

	int validarFlotante;
	int flotanteAEntero;
	int validarSigno;
	int retorno;
	int i;
	int acumulador;
	int num;

	acumulador = 1;

	validarFlotante = Its_A_Number_Float(string);
	validarSigno = Its_A_Number_Float_Negative(string);

	if (validarFlotante == 0 && validarSigno == 0) {
		num = atof(string);
		flotanteAEntero = num;
		for (i = 1; i <= flotanteAEntero; i++) {
			acumulador = acumulador * i;
		}
		*punteroResultado=acumulador;
		retorno = 1;
	} else {
		retorno = 0;
	}

	return retorno;
}

int contarVocales(char *cadena){

	 int vocales = 0;
	 int i;
	 char letra;

	 for (i = 0; i < strlen((cadena-1)) ; ++i){
		letra = tolower(cadena[i]);
		 if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
			 vocales++;
		 }
	 }
	 return vocales;
 }

int contarConsonantes(char *cadena){

	 int vocales = 0;
	 int i;
	 char letra;

	 for (i = 0; i < strlen((cadena-1)) ; ++i){
		letra = tolower(cadena[i]);
		 if (letra != 'a' || letra != 'e' || letra != 'i' || letra != 'o' || letra != 'u'){
			 vocales++;
		 }
	 }
	 return vocales;
 }

