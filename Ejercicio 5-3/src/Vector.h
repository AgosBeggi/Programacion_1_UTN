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
#include <string.h>
#include <ctype.h>

#include "Ingresos.h"
#include "Validar.h"

/// \fn void InicializarVectorNumeros(int[], int, int)
/// \brief Pide un vector, su tamaño y un valor para inicializar el vector.
/// \param vector
/// \param tamanio
/// \param inicio
void InicializarVectorNumeros(int vector[], int tamanio, int inicio);

/// \fn void MostrarVectorEnteros(int[], int, int)
/// \brief Pide un vector, su tamaño y el valor con el que se inicializó el vector.
/// Recorre el vector y muestra sólo pas posiciones distintas del valor inicial.
/// \param vector
/// \param tamanio
/// \param inicio
void MostrarVectorEnteros(int vector[], int tamanio, int inicio);

/// \fn int CargaSecuencialVectorNumeroEntero(int[], int, char[])
/// \brief Pide un vector, su tamaño y un mensaje. Recorre el vector y
/// carga un número en cada posición.
/// \param vector
/// \param tamanio
/// \param mensaje
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int CargaSecuencialVectorNumeroEntero(int vector[], int tamanio, char mensaje[]);

/// \fn int CargaSecuencialVectorNumeroEnteroParametros(int[], int, char[], int, int)
/// \brief Pide un vector, su tamaño, un mensaje y un rango mínimo y máximo. Recorre el
/// vector y carga un número en cada posición.
/// \param vector
/// \param tamanio
/// \param mensaje
/// \param min
/// \param max
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int CargaSecuencialVectorNumeroEnteroParametros(int vector[], int tamanio, char mensaje[], int min, int max);

/// \fn int CargaSecuencialVectorNumeroFlotante(int[], int, char[])
/// \brief Pide un vector, su tamaño y un mensaje. Recorre el vector y
/// carga un número en cada posición.
/// \param vector
/// \param tamanio
/// \param mensaje
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int CargaSecuencialVectorNumeroFlotante(int vector[], int tamanio, char mensaje[]);

/// \fn int CargaSecuencialVectorNumeroFlotanteParametros(float[], int, char[], int, int)
/// \brief Pide un vector, su tamaño, un mensaje y un rango mínimo y máximo. Recorre el
/// vector y carga un número en cada posición.
/// \param vector
/// \param tamanio
/// \param mensaje
/// \param min
/// \param max
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int CargaSecuencialVectorNumeroFlotanteParametros(float vector[], int tamanio, char mensaje[], int min, int max);

/// \fn int CargaAleatoriaVectorNumero(int[], int, char[], char[])
/// \brief  Pide un vector, su tamaño y dos mensajes, uno para el numero a cargar
/// y otro para la posicion para guardar el dato. Recorre el vector y
/// carga un número en cada posición elegida.
/// \param vector
/// \param tamanio
/// \param mensajeNumero
/// \param mensajePosicion
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int CargaAleatoriaVectorNumeroEntero(int vector[], int tamanio, char mensajeNumero[], char mensajePosicion[]);

/// \fn int CargaAleatoriaVectorNumeroEnteroDistintoCero(int[], int, char[], char[])
/// \brief Pide un vector, su tamaño y dos mensajes, uno para el numero a cargar
/// y otro para la posicion para guardar el dato. Recorre el vector y
/// carga un número en cada posición elegida spolo si es distinto de cero.
/// \param vector
/// \param tamanio
/// \param mensajeNumero
/// \param mensajePosicion
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int CargaAleatoriaVectorNumeroEnteroDistintoCero(int vector[], int tamanio, char mensajeNumero[],
		char mensajePosicion[]);

/// \fn int CargaAleatoriaVectorNumeroEnteroParametros(int[], int, char[], char[], int, int)
/// \brief  Pide un vector, su tamaño, dos mensajes (uno para el numero a cargar
/// y otro para la posicion para guardar el dato), y un rango mínimo y máximo. Recorre el vector y
/// carga un número en cada posición elegida.
/// \param vector
/// \param tamanio
/// \param mensajeNumero
/// \param mensajePosicion
/// \param min
/// \param max
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int CargaAleatoriaVectorNumeroEnteroParametros(int vector[], int tamanio, char mensajeNumero[],
		char mensajePosicion[], int min, int max);

/// \fn int CargaAleatoriaVectorNumeroFlotante(float[], int, char[], char[])
/// \brief Pide un vector, su tamaño y dos mensajes, uno para el numero a cargar
/// y otro para la posicion para guardar el dato. Recorre el vector y
/// carga un número en cada posición elegida.
/// \param vector
/// \param tamanio
/// \param mensajeNumero
/// \param mensajePosicion
/// \return etorna un estado booleano, 1 para true y 0 para false.
int CargaAleatoriaVectorNumeroFlotante(float vector[], int tamanio, char mensajeNumero[], char mensajePosicion[]);

/// \fn int CargaAleatoriaVectorNumeroFlotanteParametros(float[], int, char[], char[], int, int)
/// \brief Pide un vector, su tamaño, dos mensajes (uno para el numero a cargar
/// y otro para la posicion para guardar el dato), y un rango mínimo y máximo. Recorre el vector y
/// carga un número en cada posición elegida.
/// \param vector
/// \param tamanio
/// \param mensajeNumero
/// \param mensajePosicion
/// \param min
/// \param max
/// \return Retorna un estado booleano, 1 para true y 0 para false.
int CargaAleatoriaVectorNumeroFlotanteParametros(float vector[], int tamanio, char mensajeNumero[],
		char mensajePosicion[], int min, int max);

/// \fn int SumarVector(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y acumula los valores.
/// \param vector
/// \param size
/// \return Retorna el valor total sumado.
int SumarVector(int vector[], int size);

/// \fn float ObtenerPromedioVector(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y acumula los valores.
/// \param vector
/// \param size
/// \return Retorna el valor del promedio.
float ObtenerPromedioVector(int vector[], int size);

/// \fn int ContadorEnterosPositivos(int[], int, int*)
/// \brief Pide un vector y su tamaño y una dirección de memoria.
/// Recorre el vector y cuenta los enteros positivos. Guarda el resultado
/// en la dirección de memoria solicitada.
/// \param vector
/// \param size
/// \param totalPositivos
/// \return Retorna 1 si encontró positivos, y 0 si no encontró ninguno.
int ContadorEnterosPositivos(int vector[], int size, int* totalPositivos);

/// \fn int ContadorEnterosNegativos(int[], int, int*)
/// \brief Pide un vector y su tamaño y una dirección de memoria.
/// Recorre el vector y cuenta los enteros negativos. Guarda el resultado
/// en la dirección de memoria solicitada.
/// \param vector
/// \param size
/// \param totalNegativos
/// \return Retorna 1 si encontró negativos, y 0 si no encontró ninguno.
int ContadorEnterosNegativos(int vector[], int size, int* totalNegativos);

/// \fn int AcumuladorEnterosNegativos(int[], int, int*)
/// \brief Pide un vector y su tamaño y una dirección de memoria.
/// Recorre el vector y acumula los enteros negativos. Guarda el resultado
/// en la dirección de memoria solicitada.
/// \param vector
/// \param size
/// \param totalNegativos
/// \return Retorna 1 si encontró negativos, y 0 si no encontró ninguno.
int AcumuladorEnterosNegativos(int vector[], int size, int* totalNegativos);

/// \fn float ObtenerPromedioEnterosPositivos(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y acumula sólo los enteros
/// positivos.
/// \param vector
/// \param size
/// \return Retorna el valor del promedio de los positivos.
float ObtenerPromedioEnterosPositivos(int vector[], int size);

/// \fn int ObtenerMenorEntero(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y guarda el menor
/// valor de los enteros.
/// \param vector
/// \param size
/// \return Retorna el menor valor encontrado.
int ObtenerMenorEntero(int vector[], int size);

/// \fn int ObtenerMayorEntero(int[], int)
/// \brief Pide un vector y su tamaño. Recorre el vector y guarda el mayor
/// valor de los enteros.
/// \param vector
/// \param size
/// \return Retorna el mayor valor encontrado.
int ObtenerMayorEntero(int vector[], int size);

#endif /* VECTOR_H_ */
