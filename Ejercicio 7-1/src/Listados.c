/*
 * Listados.c
 *
 *  Created on: 27 sep. 2021
 *      Author: Beggi Agostina
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "Vector.h"
#include "Ingresos.h"
#include "Validar.h"

void MostrarLista(int vector[], int size, int inicio){

	int i;
	for (i = 0; i < size; i++) {
		if(vector[i] != inicio){
			printf("%d\n", vector[i]);
		}
	}
}

void MostrarListaPositivos(int vector[], int size, int inicio){

	int i;
	for (i = 0; i < size; i++) {
		if(vector[i] != inicio && vector[i] > 0){
			printf("%d\n", vector[i]);
		}
	}

}

void MostrarListaNegativos(int vector[], int size, int inicio){

	int i;
	for (i = 0; i < size; i++) {
		if(vector[i] != inicio && vector[i] < 0){
			printf("%d\n", vector[i]);
		}
	}
}

void MostrarPromedioVector(int vector[], int size) {

	int acumulador;
	int i;
	float promedio;

	acumulador = 0;

	for (i = 0; i < size; i++) {
		acumulador = acumulador + vector[i];
	}

	promedio = acumulador / size;

	printf("El promedio es: %.2f\n", promedio);

}

int OrdenarVectorNumerosPositivosA_Z(int vector[], int size) {

	int i;
	int j;
	int auxiliar;
	int estado;

	estado = 0;

	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			if(vector[i]>0 && vector[j]>0){
				if (vector[i] > vector[j]) {
				auxiliar = vector[i];
				vector[i] = vector[j];
				vector[j] = auxiliar;
				estado = 1;
				}
			}
		}
	}

	return estado;
}

int OrdenarVectorNumerosNegativosZ_A(int vector[], int size) {

	int i;
	int j;
	int auxiliar;
	int estado;

	estado = 0;

	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			if(vector[i]<0 && vector[j]<0){
				if (vector[i] < vector[j]) {
				auxiliar = vector[i];
				vector[i] = vector[j];
				vector[j] = auxiliar;
				estado = 1;
				}
			}
		}
	}

	return estado;
}

int OrdenarVectorNumerosA_Z(int vector[], int size) {

	int i;
	int j;
	int auxiliar;
	int estado;

	estado = 0;

	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			if (vector[i] < vector[j]) {
				auxiliar = vector[i];
				vector[i] = vector[j];
				vector[j] = auxiliar;
				estado = 1;
			}
		}
	}

	return estado;
}

int OrdenarVectorNumerosZ_A(int vector[], int size) {

	int i;
	int j;
	int auxiliar;
	int estado;

	estado = 0;

	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			if (vector[i] > vector[j]) {
				auxiliar = vector[i];
				vector[i] = vector[j];
				vector[j] = auxiliar;
				estado = 1;
			}
		}
	}

	return estado;
}

int InvertirOrdenarVectorNumeros(int vector[], int size) {

	int i;
	int j;
	int auxiliar;
	int estado;

	estado = 0;

	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			auxiliar = vector[i];
			vector[i] = vector[j];
			vector[j] = auxiliar;
			estado = 1;
		}
	}

	return estado;
}
