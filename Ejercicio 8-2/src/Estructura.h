/*
 * Estructura.h
 *
 *  Created on: 30 sep. 2021
 *      Author: Beggi - Agostina
 */

#ifndef ESTRUCTURA_H_
#define ESTRUCTURA_H_

#define SIZE_ARRAY 100

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

#include "Ingresos.h"
#include "Listados.h"
#include "Validar.h"
#include "Vector.h"
#include "Math.h"

struct {
	 int id;
	 char name[51];
	 char lastName[51];
	 float salary;
	 int sector;
	 int isEmpty;
}typedef Employee;

typedef struct {
	int idProducto;
	char descripcion[SIZE_ARRAY];
	int nacionalidad;
	int tipo;
	float precio;
	int isEmpty;
}eProducto;

typedef struct
{
    int idTipo;//PK Tatuatelo
    char descripcionTipo[30];
    int isEmpty;// Este tambien

} eTipoProducto;//Tipos de productos

int CargarProducto (eProducto lista[], int tam);
void MostrarListadoProductos (eProducto lista[], int tam);
void OrdenarListaProductosPorId (eProducto lista[], int tam);
void MostrarProducto (eProducto unProducto);
eProducto IngresarUnProducto ();
void InicializarListaProducto (eProducto lista[], int tam);
int BuscarPrimerEspacioLibre (eProducto lista[], int tam);
//int BuscarProductoPorId(int idProducto, eProducto lista[], int tam);
int BorrarProductoGuardado (eProducto lista[], int tam);
int ModificarProductoGuardado (eProducto lista[], int tam);
void OrdenarProductoPorPrecio (eProducto lista[], int tam);
void OrdenarListaProductosPorDescripcion (eProducto lista[], int tam);
int ListadoProductosIphone (eProducto lista[], int tam);
float BuscarPrecioMasAlto (eProducto lista[], int tam);
void InformarProductoPorPrecio (eProducto lista[], int tam,	float precioBuscado);
int MostrarPrecioPromedioPorTipoDeProducto (eProducto lista[], int tam, int tipo,float *pPromedio);
void ListadoProductosConTipo (eProducto productos[], eTipoProducto tipos[], int tamProductos, int tamTipo);

/// \fn void InicializarListaArray(eProductos[], int)
/// \brief Pide una lista de tipo de dato estructura y su tamaño.
/// Recorre la lista y le asigna un valor vacío, cero, a cada posicion.
/// \param lista
/// \param size
void InicializarListaArray(eProducto lista[], int size);

/// \fn void InicializarEstructura(eProductos)
/// \brief Pide una variable de tipo estructura e inicializa
/// todos sus datos en 0.
/// \param estructura
void InicializarEstructura(eProducto variable);

/// \fn void MostrarVariableEstructura(eProductos)
/// \brief Imprime en pantalla cada elemento de la
/// variable de estructura.
/// \param variable
void MostrarVariableEstructura(eProducto variable);

/// \fn void MostrarListadoArrayEstructura(eProductos[], int)
/// \brief  Imprime en pantalla cada elemento de la
/// lista de estructura, sólo de las posiciones que no
/// estan vacías.
/// \param lista
/// \param size
int MostrarListadoArrayEstructura(eProducto lista[], int size);

/// \fn eProductos CargarDatosDeUnElemento()
/// \brief Carga cada dato que corresponde a dicha estruscura.
/// \param elemento
/// \return Retorna el elemento cargado
eProducto CargarDatosDeUnElemento();

/// \fn void CargarUnElementoAListaArray(eProductos[], int, eProductos)
/// \brief Pide una lista de tipo estructura, su tamaño y un elemento del mismo tipo
/// estructura. Recorre la lista y almacena en la primera posicion vacia encontrada,
/// el elemento solicitado.
/// \param lista
/// \param size
/// \param unElemento
void CargarUnElementoAListaArray(eProducto lista[], int size, eProducto unElemento);

/// \fn int BuscarPorID(eProductos[], int)
/// \brief Pide una lista de tipo estructura y su tamaño. Imprime en pantalla
/// los elementos de la lista y solicita ingresar un ID. Recorre la lista para
/// verificar que el ID ingresado sea correcto.
/// \param lista
/// \param size
/// \return Retorna un valor booleano, 1 para true y 0 para false.
int BuscarPorID(eProducto lista[], int size);

int initEmployees(Employee* list, int len);

int addEmployee(Employee* list, int len, char name[], char lastName[], float salary, int sector, int id);

int findEmployeeById(Employee* list, int len,int id);

int removeEmployee(Employee* list, int len, int index);

int sortEmployees(Employee* list, int len, int order);

void printEmployee(Employee employee);

int printEmployees(Employee* list, int len);

int Get_Name(Employee* list, int len,int id);

int Get_Lastname(Employee* list, int len,int id);

int Get_Salary(Employee* list, int len,int id);

int Get_Sector(Employee* list, int len,int id);

#endif /* ESTRUCTURA_H_ */
