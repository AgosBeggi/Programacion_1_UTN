/*
 * Vector.h
 *
 *  Created on: 14 sep. 2021
 *      Author: Beggi Agostina
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"
#include"Validar.h"

/// \fn void InicializarVector(int[], int, int)
/// \brief Inicializa un vector con un valor pasado como parámetro.
/// \param vector
/// \param size
/// \param inicio
void InicializarVector(int vector[], int size, int inicio);

void CargaSecuencialVector(int vector[], int size); //falta validar

void CargaAleatorialVectorConParametros(int vector[], int size, int min, int max); // falta validar

void CargaSecuencialVectorConParametros(int vector[], int size, int min, int max); //hacer validacion en otra funcion

/// \fn void MostrarVectorInicializado(int[], int, int)
/// \brief Mustra el listado de las posiciones que si fueron cargadas.
/// \param vector
/// \param size
/// \param estado
void MostrarVectorInicializado(int vector[], int size, int estado);

int SumarVector(int vector[], int size); // falta validar

void ContadorPositivosNegativos(int vector[], int size); //Separar funciones - falta validar

float ObtenerPromedioVector(int vector[], int size); // falta validar

void MostrarPromedioVector(int vector[], int size); // se puede hacer con la anterior separando las funciones

void OrdenarVectorNumeros(int vector[], int size); // todavía no lo vimos

#endif /* VECTOR_H_ */
