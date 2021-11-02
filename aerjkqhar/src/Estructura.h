/*
 * Estructura.h
 *
 *  Created on: 30 sep. 2021
 *      Author: Beggi - Agostina
 */

#ifndef ESTRUCTURA_H_
#define ESTRUCTURA_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

#include "Ingresos.h"
#include "Validar.h"

#define SIZE_ARRAY 100

typedef struct {
	int idProducto;
	char descripcion[SIZE_ARRAY];
	int nacionalidad;
	int tipo;
	float precio;
	int isEmpty;
}eProductos;

/// \fn void InicializarListaArray(eProductos[], int)
/// \brief Pide una lista de tipo de dato estructura y su tamaño.
/// Recorre la lista y le asigna un valor vacío, cero, a cada posicion.
/// \param lista
/// \param size
void InicializarListaArray(eProductos lista[], int size);

/// \fn void InicializarEstructura(eProductos)
/// \brief Pide una variable de tipo estructura e inicializa
/// todos sus datos en 0.
/// \param estructura
void InicializarEstructura(eProductos variable);

/// \fn void MostrarVariableEstructura(eProductos)
/// \brief Imprime en pantalla cada elemento de la
/// variable de estructura.
/// \param variable
void MostrarVariableEstructura(eProductos variable);

/// \fn void MostrarListadoArrayEstructura(eProductos[], int)
/// \brief  Imprime en pantalla cada elemento de la
/// lista de estructura, sólo de las posiciones que no
/// estan vacías.
/// \param lista
/// \param size
void MostrarListadoArrayEstructura(eProductos lista[], int size);

/// \fn eProductos CargarDatosDeUnElemento()
/// \brief Carga cada dato que corresponde a dicha estruscura.
/// \param elemento
/// \return Retorna el elemento cargado
eProductos CargarDatosDeUnElemento();

/// \fn void CargarUnElementoAListaArray(eProductos[], int, eProductos)
/// \brief Pide una lista de tipo estructura, su tamaño y un elemento del mismo tipo
/// estructura. Recorre la lista y almacena en la primera posicion vacia encontrada,
/// el elemento solicitado.
/// \param lista
/// \param size
/// \param unElemento
void CargarUnElementoAListaArray(eProductos lista[], int size, eProductos unElemento);

/// \fn int BuscarPorID(eProductos[], int)
/// \brief Pide una lista de tipo estructura y su tamaño. Imprime en pantalla
/// los elementos de la lista y solicita ingresar un ID. Recorre la lista para
/// verificar que el ID ingresado sea correcto.
/// \param lista
/// \param size
/// \return Retorna un valor booleano, 1 para true y 0 para false.
int BuscarPorID(eProductos lista[], int size);

#endif /* ESTRUCTURA_H_ */
