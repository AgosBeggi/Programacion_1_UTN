/*
 * Vector.h
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"
#include"Validar.h"

void InicializarVector(int vector[], int size, int inicio);

void CargaSecuencialVector(int vector[], int size);

void CargaAleatorialVectorConParametros(int vector[], int size, int min, int max);

void CargaSecuencialVectorConParametros(int vector[], int size, int min, int max);

void MostrarVector(int vector[], int size, int estado);

int SumarVector(int vector[], int size);

void ContadorPositivosNegativos(int vector[], int size);

float ObtenerPromedioVector(int vector[], int size);

void MostrarPromedioVector(int vector[], int size);

void OrdenarVectorNumeros(int vector[], int size);

#endif /* VECTOR_H_ */
