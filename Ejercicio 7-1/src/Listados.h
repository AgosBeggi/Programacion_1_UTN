/*
 * Listados.h
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

#ifndef LISTADOS_H_
#define LISTADOS_H_

/// \fn void MostrarLista(int[], int, int)
/// \brief Pide un vector, su tamaño y el valor con el que se inicializó el vector.
/// Recorre el vector y muestra sólo pas posiciones distintas del valor inicial.
/// \param vector
/// \param size
/// \param inicio
void MostrarLista(int vector[], int size, int inicio);

/// \fn void MostrarListaPositivos(int[], int, int)
/// \brief Pide un vector, su tamaño y el valor con el que se inicializó el vector.
/// Recorre el vector y muestra sólo pas posiciones distintas del valor inicial y
/// numeros positivos.
/// \param vector
/// \param size
/// \param inicio
void MostrarListaPositivos(int vector[], int size, int inicio);

/// \fn void MostrarListaNegativos(int[], int, int)
/// \brief Pide un vector, su tamaño y el valor con el que se inicializó el vector.
/// Recorre el vector y muestra sólo pas posiciones distintas del valor inicial y
/// numeros positivos.
/// \param vector
/// \param size
/// \param inicio
void MostrarListaNegativos(int vector[], int size, int inicio);

/// \fn int OrdenarVectorNumerosA_Z(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y lo
/// ordena de menor a mayor.
/// \param vector
/// \param size
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int OrdenarVectorNumerosA_Z(int vector[], int size);

/// \fn int OrdenarVectorNumerosZ_A(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y lo
/// ordena de mayor a menor.
/// \param vector
/// \param size
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int OrdenarVectorNumerosZ_A(int vector[], int size);

/// \fn int OrdenarVectorNumerosPositivosA_Z(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y lo
/// ordena de menor a mayor sólo los numeros positivos.
/// \param vector
/// \param size
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int OrdenarVectorNumerosPositivosA_Z(int vector[], int size);

/// \fn int OrdenarVectorNumerosNegativosZ_A(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y lo
/// ordena de mayor a menor sólo los numeros negativos.
/// \param vector
/// \param size
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int OrdenarVectorNumerosNegativosZ_A(int vector[], int size);

/// \fn int InvertirOrdenarVectorNumeros(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector e invierte las posiciones.
/// \param vector
/// \param size
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int InvertirOrdenarVectorNumeros(int vector[], int size);

/// \fn void MostrarPromedioVector(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector, calcula el
/// promedio de todos los datos ingresados y lo muestra.
/// \param vector
/// \param size
void MostrarPromedioVector(int vector[], int size);

#endif /* LISTADOS_H_ */
