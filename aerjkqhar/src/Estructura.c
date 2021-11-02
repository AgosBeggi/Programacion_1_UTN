/*
 * Estructura.c
 *
 *  Created on: 30 sep. 2021
 *      Author: Beggi - Agostina
 */

#include "Estructura.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

#include "Ingresos.h"
#include "Validar.h"

#define SIZE_ARRAY 100
#define EMPTY 0
#define FULL 1

//INICIALIZAR UN PRODUCTO
void InicializarEstructura(eProductos variable){

	variable.isEmpty = EMPTY;
	strcpy(variable.descripcion, "0");
	variable.idProducto = EMPTY;
	variable.nacionalidad = EMPTY;
	variable.precio = EMPTY;
	variable.tipo = EMPTY;
}

//INICIALIZAR ARRAY DE PRODUCTOS
void InicializarListaArray(eProductos lista[], int size){

	int i;

	for(i = 0; i < size; i++){
		lista[i].isEmpty = EMPTY;
	}
}
//MOSTRAR PRODUCTO
void MostrarVariableEstructura(eProductos variable){

	printf("%d", variable.idProducto);
	printf("\t%s", variable.descripcion);
	printf("\t\t%d", variable.nacionalidad);
	printf("\t\t%d", variable.tipo);
	printf("\t%.2f\n", variable.precio);
}

//MOSTRAR LISTADO DE PRODUCTOS
void MostrarListadoArrayEstructura(eProductos lista[], int size){

	int i;

	printf("ID");
	printf("\tDESCRIPCION");
	printf("\t\tNACIONALIDAD");
	printf("\tTIPO");
	printf("\tPRECIO\n");

	for(i = 0; i < size; i++){
		if(lista[i].isEmpty == FULL){
			MostrarVariableEstructura(lista[i]);
			break;
		}else{
			printf("La lista está vacía\n");
			break;
		}
	}
}

//CARGAR DATOS DE UN PRODUCTO
eProductos CargarDatosDeUnElemento(){

	int estadoID;
	int estadoDescripcion;
	int estadoNacionalidad;
	int estadoPrecio;
	int estadoTipo;
	eProductos unElemento;

	estadoID = IngresoEntero("Ingrese el ID del producto:\n", &unElemento.idProducto);
	estadoDescripcion = IngresarCadena(unElemento.descripcion, SIZE_ARRAY, "Ingrese la descripcion del producto:\n");
	estadoNacionalidad = IngresoEntero("Ingrese la nacionalidad del producto:\n", &unElemento.nacionalidad);
	estadoTipo = IngresoEntero("Ingrese el tipo del producto:\n", &unElemento.tipo);
	estadoPrecio = IngresoFlotante("Ingrese el precio del producto:\n", &unElemento.precio);

	if(estadoID == 1 && estadoDescripcion == 1 && estadoNacionalidad == 1 && estadoPrecio == 1 && estadoTipo == 1){
		unElemento.isEmpty = FULL;
	}
	return unElemento;
}

//CARGAR UN PRODUCTO AL ARRAY DE PRODUCTOS
void CargarUnElementoAListaArray(eProductos lista[], int size, eProductos unElemento){

	int i;

	for(i = 0; i < size; i++){
		lista[i] = unElemento;
		lista[i].isEmpty = FULL;
		break;
	}
}

//BUSCAR ID EN ARRAY DE PRODUCTOS
int BuscarPorID(eProductos lista[], int size){

	int id;
	int i;
	int retorno;

	retorno = 0;

	MostrarListadoArrayEstructura(lista, size);
	printf("Ingrese el ID del producto que desea dar de baja:\n");
	scanf("%d", &id);

	for(i = 0; i < size; i++){
		if(lista[i].idProducto == id){
			retorno = 1;
			break;
		}
	}
	return retorno;
}

//BAJA DE UN PRODUCTO CON ID DE REFERENCIA
