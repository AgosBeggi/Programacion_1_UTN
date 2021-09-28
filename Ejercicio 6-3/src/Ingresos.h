/*
 * Ingresos.h
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */

#ifndef INGRESOS_H_
#define INGRESOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Validar.h"

/// \fn int IngresoEntero(char[], int*)
/// \brief Pide y muestra un mensaje para solicitar un numero, adem�s de guardar
/// una direcci�n de memoria con un puntero.
/// Guarda el n�mero como cadena y llama a la funcion "EsNumeroEntero".
/// Si es un n�mero entero, convierte la cadena a n�mero y lo guarda en
/// la direccion de memoria solicitada.
/// \param mensaje
/// \param puntero
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int IngresoEntero(char mensaje[], int* puntero);

/// \fn int IngresoFlotante(char[], float*)
/// \brief Pide y muestra un mensaje para solicitar un numero, adem�s de guardar
/// una direcci�n de memoria con un puntero.
/// Guarda el n�mero como cadena y llama a la funcion "EsNumeroFlotante".
/// Si es un n�mero flotante, convierte la cadena a n�mero y lo guarda en
/// la direccion de memoria solicitada.
/// \param mensaje
/// \param puntero
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int IngresoFlotante(char mensaje[], float* puntero);

/// \fn int IngresoEnteroConParametros(char[], int, int, int*)
/// \brief Pide y muestra un mensaje para solicitar un numero, adem�s de guardar
/// una direcci�n de memoria con un puntero y pedir un maximo y un m�nimo.
/// Guarda el n�mero como cadena y llama a la funcion "EsNumeroEntero".
/// Si es un n�mero entero, convierte la cadena a n�mero.
/// Llama a la funcion "EstaEnteroEnRango" y le pasa el maximo y m�nimo. Si es as�,
/// lo guarda en la direccion de memoria solicitada.
/// \param mensaje
/// \param min
/// \param max
/// \param puntero
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int IngresoEnteroConParametros(char mensaje[], int min, int max, int* puntero);

/// \fn int IngresoFlotanteConParametros(char[], float, float, float*)
/// \brief Pide y muestra un mensaje para solicitar un numero, adem�s de guardar
/// una direcci�n de memoria con un puntero y pedir un maximo y un m�nimo.
/// Guarda el n�mero como cadena y llama a la funcion "EsNumeroFlotante".
/// Si es un n�mero entero, convierte la cadena a n�mero.
/// Llama a la funcion "EstaFlotanteEnRango" y le pasa el maximo y m�nimo. Si es as�,
/// lo guarda en la direccion de memoria solicitada.
/// \param mensaje
/// \param min
/// \param max
/// \param puntero
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int IngresoFlotanteConParametros(char mensaje[], float min, float max, float* puntero);

/// \fn int IngresarCadena(char[], char*[], int)
/// \brief
/// \param mensaje
/// \param cadena
/// \param tamanio
/// \return

/// \fn int IngresarCadena(char[], char*[], char[])
/// \brief Pide un mensaje y una direccion de memoria.
/// Guearda la cadena de caracteres en la direccion de
/// memoria solicitada.
/// \param mensaje
/// \param cadena
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int IngresarCadena(char cadena[], int tamanio, char mensaje[]);

#endif /* INGRESOS_H_ */
