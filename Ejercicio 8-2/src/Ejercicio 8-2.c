/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 Una empresa importadora que comercializa productos Apple, decide registrar de
 sus productos los siguientes datos:
 idProducto (numerico)
 descripcion (alfanum�rico)
 nacionalidad (num�rico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
 tipo (num�rico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
 precio (num�rico decimal)
 Realizar un programa que permita interactuar con un men� de usuarios con las siguientes
 opciones:
 ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio
 disponible en el array.
 BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista,
 dejando espacio disponible para un nuevo producto.
 MODIFICACI�N Producto: A partir del ingreso del ID. Si existe se podr� modificar el precio
 o el tipo.
 LISTADO Productos.
 LISTADO ordenado por precio.
 LISTADO ordenado por descripci�n.

 * https://www.onlinegdb.com/RJ3JSM9rh
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Ingresos.h"

#define TAM 5

typedef struct {
	int idProducto;
	char descripcion[100];
	int nacionalidad;
	int tipo;
	float precio;
} eProducto;
void CargarProductos(eProducto lista[], int tam);
void MostrarListadoProductos(eProducto lista[], int tam);
void OrdenarListaProductosPorId(eProducto lista[], int tam);
void MostrarProducto(eProducto unProducto);
eProducto IngresarUnProducto();

int main(void) {
	setbuf(stdout, NULL);

	eProducto listaProductos[TAM] = { { 1000, "Iphone 12", 1, 1, 1000 }, { 2000,
			"Macbook Air", 3, 2, 1200 }, { 5000, "MagSafe", 3, 4, 50 }, { 2500,
			"Ipad 5", 3, 3, 750 }, { 4000, "Ipad 3", 2, 3, 400 } };

	//CargarProductos(listaProductos, TAM);
	MostrarListadoProductos(listaProductos, TAM);
	printf("Lista Ordenada\n");
	OrdenarListaProductosPorId(listaProductos, TAM);
	MostrarListadoProductos(listaProductos, TAM);
	return EXIT_SUCCESS;
}

void CargarProductos(eProducto lista[], int tam) {
	for (int i = 0; i < tam; i++) {

	}

}

void OrdenarListaProductosPorId(eProducto lista[], int tam) {
	eProducto auxiliarProducto;
	for (int i = 0; i < tam - 1; i++) {
		for (int j = i + 1; j < tam; j++) {
			if (lista[i].idProducto < lista[j].idProducto) {
				auxiliarProducto = lista[i];
				lista[i] = lista[j];
				lista[j] = auxiliarProducto;
			}
		}
	}
}

void MostrarListadoProductos(eProducto lista[], int tam) {
	printf("Id\tDescripcion\tNacionalidad\tTipo\tPrecio\n");
	for (int i = 0; i < tam; i++) {
		MostrarProducto(lista[i]);
	}
}
void MostrarProducto(eProducto unProducto) {
	printf("%4d %20s %4d %4d %4.2f\n", unProducto.idProducto,
			unProducto.descripcion, unProducto.nacionalidad, unProducto.tipo,
			unProducto.precio);
}

eProducto IngresarUnProducto(){

	eProducto producto;

	producto.idProducto = IngresarEntero("Ingrese el ID");
	getString(producto.descripcion, "Ingrese la descripcion", 50);

	return producto;
}

/*
 * qu� les parece si para ma�ana se crean la funci�n Buscar
edito: BuscarLibre?
T�22:16
me acabas de explotar el cerebro Cami
Delgado Benitez Alexs Gabriel22:16
ok perfecto
T�22:16
edito: BuscarLibre? aaah con eso si
Camila Iglesias Guerrero22:16
jaja s�, se me escapo.
Fabella Ivan22:17
Validamos si el IsEmpty es falso..
Camila Iglesias Guerrero22:17
funci�n BuscarLibre. Objetivo: informar la primer posici�n libre del array.
https://onlinegdb.com/pEy2EDbtP
*/
