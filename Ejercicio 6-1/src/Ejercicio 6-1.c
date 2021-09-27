/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Ejercicio 6-1:
Disponemos de dos variables numéricas (a y b).
Realizar un algoritmo que permita el intercambio de valores de dichas variables.

Entregado con bibliotecas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "Vector.h"
#include "Ingresos.h"
#include "Validar.h"
#include "Listados.h"

#define TAMANIO 2
#define INICIO 0

int main(void) {

	setbuf(stdout, NULL);

	int vector[TAMANIO];
	int estadoCarga;
	int estadoInvertir;

	InicializarVectorNumeros(vector, TAMANIO, INICIO);

	estadoCarga = CargaSecuencialVectorNumeroEntero(vector, TAMANIO, "Ingrese un numero\n");

	if(estadoCarga == 1){
		printf("Usted ingrespo los siguientes datos:.\n");
		MostrarLista(vector, TAMANIO, INICIO);
	}else{
		printf("Error, vuelva a intentarlo.\n");
	}

	estadoInvertir = InvertirOrdenarVectorNumeros(vector, TAMANIO);
	if(estadoInvertir == 1){
		printf("El listado invertido datos:.\n");
		MostrarLista(vector, TAMANIO, INICIO);
	}

	return EXIT_SUCCESS;
}
