/*
 * Ingresos.c
 *
 *  Created on: 22 sep. 2021
 *      Author: Beggi - Agostina
 */
#include "Ingresos.h"

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

	estadoNumero = Its_A_Number_Int(numeroCadena);
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

	estadoNumero = Its_A_Number_Float(numeroCadena);
	if(estadoNumero == 1){//ver bien funcion de validar float
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

	estadoNumero = Its_A_Number_Int(numeroCadena);
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

	estadoNumero = Its_A_Number_Float(numeroCadena);
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

int Get_A_Number_Int(char message[], int* pNumber){

	int retorno;
	char string[40];
	int aux;

	retorno = 0;

	printf("%s", message);
	fflush(stdin);
	fgets(string, 40, stdin);
	string[strlen(string)-1] = '\0';

	aux = Its_A_Number_Int(string);

	if(aux == 1){
		aux = atoi(string);
		*pNumber = aux;
		retorno = 1;
	}

	return retorno;
}

int Get_A_Number_Float(char message[], float* pNumber){

	int retorno;
	char string[40];
	int aux;
	float aux2;

	retorno = 0;

	printf("%s", message);
	fflush(stdin);
	fgets(string, 40, stdin);
	string[strlen(string)-1] = '\0';

	aux = Its_A_Number_Float(string);

	if(aux == 1){
		aux2 = atof(string);
		*pNumber = aux2;
		retorno = 1;
	}

	return retorno;
}

int Get_String(char cadena[], int tamanio, char mensaje[]){

	int retorno;
	char string[51];
	int estado;

	retorno = 0;

	printf("%s", mensaje);
	fflush(stdin);
	fgets(string, 40, stdin);
	string[strlen(string)-1] = '\0';

	estado = Is_It_Char(string);
	if(estado == 1){
		strncpy(cadena, string, tamanio);
		retorno = 1;
	}

	return retorno;
}

float IngresarFlotante(char mensaje[]){
	float numeroIngresado;
	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);

	return numeroIngresado;
}
int IngresarEntero(char mensaje[]){
	int numeroIngresado;
	printf("%s", mensaje);
	scanf("%d", &numeroIngresado);

	return numeroIngresado;
}

int getString(char cadena[], char mensaje[], int tam){
	char auxiliarString[1000];
	int retorno;
	retorno = 0;
	if (cadena != NULL && mensaje != NULL)
	{
		retorno = 1;
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%[^\n]", auxiliarString);

		while (strlen(auxiliarString) > tam)
		{
			printf("Reingrese: ");
			fflush(stdin);
			scanf("%[^\n]", auxiliarString);
		}
		strcpy(cadena, auxiliarString);
	}
	return retorno;
}

