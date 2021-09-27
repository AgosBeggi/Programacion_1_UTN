/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
Ejercicio 6-2:
Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
Necesito generar un listado de los números positivos de manera creciente
y negativos de manera decreciente. (Como máximo 5 estructuras repetitivas)

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

#define TAMANIO 10
#define INICIO 0

int main(void) {
	setbuf(stdout, NULL);

	int vector[TAMANIO];
	int estadoCarga;
	int estadoPositivos;
	int estadoNegativos;

	InicializarVectorNumeros(vector, TAMANIO, INICIO);

	estadoCarga = CargaSecuencialVectorNumeroEntero(vector, TAMANIO, "Ingrese un numero\n");
	if(estadoCarga == 1){
			printf("Usted ingrespo los siguientes datos:.\n");
			MostrarLista(vector, TAMANIO, INICIO);
		}else{
			printf("Error, vuelva a intentarlo.\n");
		}

	estadoPositivos = OrdenarVectorNumerosPositivosA_Z(vector, TAMANIO);
	estadoNegativos = OrdenarVectorNumerosNegativosZ_A(vector, TAMANIO);
	if(estadoPositivos == 1 && estadoNegativos == 1){
			printf("El listado de los numeros positivos ordenados de manera creciente es:.\n");
			MostrarListaPositivos(vector, TAMANIO, INICIO);
			printf("El listado de los numeros negativos ordenados de manera decreciente es:.\n");
			MostrarListaNegativos(vector, TAMANIO, INICIO);
		}


	return EXIT_SUCCESS;
}
