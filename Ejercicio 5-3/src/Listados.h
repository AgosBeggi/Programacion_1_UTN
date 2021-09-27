/*
 * Listados.h
 *
 *  Created on: 27 sep. 2021
 *      Author: Beggi Agostina
 */

#ifndef LISTADOS_H_
#define LISTADOS_H_

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
		}
	}
}


#endif /* LISTADOS_H_ */
