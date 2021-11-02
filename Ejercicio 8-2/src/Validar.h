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
#include <limits.h>
#include <string.h>
#include <ctype.h>

#include "Estructura.h"
#include "Ingresos.h"
#include "Listados.h"
#include "Vector.h"
#include "Math.h"

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

int Its_A_Number_Int(char string[]);

int Its_A_Number_Float(char string[]);

int Is_It_Char(char string[]);

int Its_A_Number_Float_Negative(char string[]);

#endif /* VALIDAR_H_ */
