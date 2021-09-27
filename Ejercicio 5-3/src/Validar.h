/*
 * Validar.h
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */

#ifndef VALIDAR_H_
#define VALIDAR_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/// \fn int EsNumeroEntero(char[], int)
/// \brief Pide un numero como cadena y su tamaño. Recorre la cadena.
/// Primero se fija que no haya mas guiones que en la posición cero.
/// Después, con la palabra reservada "isdigit" se fija que sea número.
/// \param numeroCadena
/// \param size
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int EsNumeroEntero(char numeroCadena [], int size);

/// \fn int EsNumeroFlotante(char[], int)
/// \brief Pide un numero como cadena y su tamaño. Recorre la cadena.
/// Primero se fija que no haya mas guiones que en la posición cero.
/// Después se fija que haya sólo un punto.
/// Por último, con la palabra reservada "isdigit" se fija que sea número.
/// \param numeroCadena
/// \param size
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int EsNumeroFlotante(char numeroCadena [], int size);

/// \fn int EstaEnteroEnRango(int, int, int)
/// \brief Pide un numero entero, además de un mínimo y un maximo.
/// Se fija que el número no sea menor o mayor que el rango.
/// \param numero
/// \param min
/// \param max
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int EstaEnteroEnRango(int numero, int min, int max);

/// \fn int EstaFlotanteEnRango(float, float, float)
/// \brief Pide un numero flotante, además de un mínimo y un maximo.
/// Se fija que el número no sea menor o mayor que el rango.
/// \param numero
/// \param min
/// \param max
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int EstaFlotanteEnRango(float numero, float min, float max);

/// \fn int EsCero(int)
/// \brief Pide un numero y verifica si es igual a cero.
/// \param numero
/// \return Retorna 1 si es true y 0 si es false.
int EsCero(int numero);

#endif /* VALIDAR_H_ */
