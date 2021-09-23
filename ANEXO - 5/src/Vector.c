/*
 * Vector.c
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */

#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"
#include"Validar.h"

void InicializarVector(int vector[], int size, int inicio) {
	int i;

	for (i = 0; i < size; i++) {
		vector[i] = inicio;
	}
}

void CargaSecuencialVector(int vector[], int size) {

	int i;

	for (i = 0; i < size; i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}

}

void CargaAleatorialVectorConParametros(int vector[], int size, int min,
		int max) {

	int index;
	int auxiliar;
	char seguir;

	do {
		auxiliar = IngresoEnteroConParametros("Ingrese un numero", min, max);
		index = IngresoEnteroConParametros("Ingrese la posicion", 1, size);
		vector[index - 1] = auxiliar;

		printf("¿Desea ingresar otro dato?");
		fflush(stdin);
		scanf("%c", &seguir);
	} while (seguir != 's');

}

void CargaSecuencialVectorConParametros(int vector[], int size, int min,
		int max) {

	int i;

	for (i = 0; i < size; i++) {
		printf("Ingrese un numero entre %d y %d: ", min, max);
		scanf("%d", &vector[i]);
		while (vector[i] < min || vector[i] > max) {
			printf("Error. Ingrese un numero entre %d y %d: ", min, max);
			scanf("%d", &vector[i]);
		}
	}

}

void MostrarVector(int vector[], int size, int estado) {

	int i;

	for (i = 0; i < size; i++) {
		if (vector[i] != estado) {
			printf("%d\n", vector[i]);
		}
	}

}

int SumarVector(int vector[], int size) {

	int acumulador;
	int i;

	acumulador = 0;

	for (i = 0; i < size; i++) {
		acumulador = acumulador + vector[i];
	}

	return acumulador;
}

void ContadorPositivosNegativos(int vector[], int size) {

	int i;
	int positivos;
	int negativos;

	positivos = 0;
	negativos = 0;

	for (i = 0; i < size; i++) {
		if (vector[i] < 0) {
			negativos++;
		} else {
			positivos++;
		}
	}

	printf("La cantidad de positivos y negativos es: %d %d\n", positivos,
			negativos);
}

float ObtenerPromedioVector(int vector[], int size) {

	int acumulador;
	int i;
	float promedio;

	acumulador = 0;

	for (i = 0; i < size; i++) {
		acumulador = acumulador + vector[i];
	}

	promedio = acumulador / size;

	return promedio;
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

void OrdenarVectorNumeros(int vector[], int size) {

	int i;
	int j;
	int auxiliar;
//hay que agregarle el -1 para que no se pase de las iteraciones
	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			if (vector[i] < vector[j]) {
				auxiliar = vector[i];
				vector[i] = vector[j];
				vector[j] = auxiliar;
			}


			/*for (t =0 ; t < size; t++) {
			 if (vector[t] > vector[t + 1]) {
			 ordenar = vector[t];
			 vector[t] = vector[t + 1];
			 vector[t] = ordenar;
			 }*/
		}
	}
}

