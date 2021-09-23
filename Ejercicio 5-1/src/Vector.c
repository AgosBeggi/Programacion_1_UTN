
/*
 * Vector.c
 *
 *  Created on: 13 sep. 2021
 *      Author: Beggi Agostina
 */

#include <stdio.h>
#include <stdlib.h>

void CargarVector(int vector[], int size){

	int i;

	for(i=0;i<size;i++){
		printf("Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}


}

void MostrarVector(int vector[], int size){

	int i;

	for(i=0;i<size;i++){
		printf("%d\n", vector[i]);
	}

}

int SumarVector(int vector[], int size){

	int acumulador;
	int i;

	acumulador=0;

	for(i=0;i<size;i++){
		acumulador=acumulador+vector[i];
	}

	return acumulador;
}

