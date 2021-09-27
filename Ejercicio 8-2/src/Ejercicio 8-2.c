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
 nacionalidad (num�rico, por el momento utilizaremos un define: EEUU - CHINA - OTRO) (por el momento hacer que los numeros, muestren las opciones)
 tipo (num�rico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
 precio (num�rico decimal)

 * Para eso hay que crear un nuevo tipo de dato que contenga esa estructura.
 * Debe incluir un dato que permita guardar un valor para inicializar la lista.

 Realizar un programa que permita interactuar con un men� de usuarios con las siguientes
 opciones:

 * Crear un menu

 ALTA Producto: Se ingresan los datos de UN solo producto.

 * Crear funcion para ingresar s�lo un producto.

  Siempre y cuando haya espacio disponible en el array.

  * Crear funcion que verifique si hay un espacio libre.

 BAJA Producto: A partir del ingreso del ID.

 * Crear funcion de busqueda por ID.

 Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.

 * Crear funcion para eliminar datos de la lista.

 MODIFICACI�N Producto: A partir del ingreso del ID. Si existe se podr� modificar el precio o el tipo.

 * Crear funcion que permita modificar datos.

 LISTADO Productos.

 * Crear funcion que muestre el listado completo.

 LISTADO ordenado por precio.
 LISTADO ordenado por descripci�n.

 * Crear funcion que permita ordenar los arrays, y llamar a la funcion anterior.

stricmp() In C: https://www.2braces.com/c-programming/c-stricmp
//strcmp
//menor a cero = izquierda es menor derecha
//cero  = izquierda es igual que derecha
//mayor a cero = izquierda es mayor derecha

 Trabajo en clase:
https://www.onlinegdb.com/Zhn330PjV
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "Ingresos.h"

#define TAM 5
#define EMPTY 0
#define FULL 1

typedef struct {
	int idProducto;
	char descripcion[100];
	int nacionalidad;
	int tipo;
	float precio;
	int isEmpty;
} eProducto;

void CargarProducto(eProducto lista[], int tam);
void MostrarListadoProductos(eProducto lista[], int tam);
void OrdenarListaProductosPorId(eProducto lista[], int tam);
void MostrarProducto(eProducto unProducto);
eProducto IngresarUnProducto();
void InicializarListaProducto(eProducto lista[], int tam);

int main(void) {
	setbuf(stdout, NULL);
	int opcion;

	//eProducto listaProductos[TAM] = {{1000,"Iphone 12",1,1,1000},{2000,"Macbook Air",3,2,1200},{5000,"MagSafe",3,4,50},{2500,"Ipad 5",3,3,750},{4000,"Ipad 3",2,3,400}};
	eProducto listaProductos[TAM];
	InicializarListaProducto(listaProductos, TAM);
	do {

		printf("1. Alta");
		printf("2. Mostrar");
		opcion = IngresarEntero("Elija una opcion ewe ");
		switch (opcion) {
		case 1:
			CargarProducto(listaProductos, TAM);
			break;
		case 2:
			MostrarListadoProductos(listaProductos, TAM);
			break;
		}

	} while (opcion != 5);

	//CargarProductos(listaProductos, TAM);
	/*
	 MostrarListadoProductos(listaProductos, TAM);
	 printf("Lista Ordenada\n");
	 OrdenarListaProductosPorId(listaProductos, TAM);
	 MostrarListadoProductos(listaProductos, TAM);
	 */
	return EXIT_SUCCESS;
}

void CargarProducto(eProducto lista[], int tam) {
	for (int i = 0; i < tam; i++) {
		if (lista[i].isEmpty == EMPTY) {
			lista[i] = IngresarUnProducto();
			break;
		}
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

eProducto IngresarUnProducto() {
	eProducto producto;
	producto.idProducto = IngresarEntero("Ingresa el id del producto");
	IngresarCadena(producto.descripcion, "Ingresar la descripcion del producto", 100);
	producto.nacionalidad = IngresarEntero("Ingresa la nacionalidad del producto, 1.EEUU, 2.China, 3.Otro: ");
	producto.tipo =
			IngresarEntero("Ingresa el tipo del producto, 1.Iphone, 2.Mac, 3.Ipad, 4.Accesorios: ");
	producto.precio = IngresarFlotante("Ingresa el precio del producto");
	producto.isEmpty = FULL;

	return producto;
}

void InicializarListaProducto(eProducto lista[], int tam) {

	for (int i = 0; i < tam; i++) {

		lista[i].isEmpty = EMPTY;

	}
}

