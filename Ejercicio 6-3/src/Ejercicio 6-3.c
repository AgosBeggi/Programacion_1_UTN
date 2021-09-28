/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 6-3:
Pedirle al usuario su nombre y apellido (en variables separadas, una para el
nombre y otra para el apellido).
Ninguna de las dos variables se puede modificar.
Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
Por ejemplo:
Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
Gomez, Juan Ignacio
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "Vector.h"
#include "Ingresos.h"
#include "Validar.h"
#include "Listados.h"

#define TAMANIO 1000

int main(void) {
	setbuf(stdout, NULL);

	char nombre[TAMANIO];
	int estadoNombre;
	char apellido[TAMANIO];
	int estadoApellido;
	char apellidoYnombre[TAMANIO];
	int estadoOrden1;
	int estadoOrden2;

	estadoNombre = IngresarCadena(nombre, TAMANIO, "Ingrese su nombre\n");
	estadoApellido = IngresarCadena(apellido, TAMANIO, "Ingrese su apellido\n");
		if(estadoNombre == 1 && estadoApellido == 1){
			estadoOrden1 = OrdenarMayusculas(nombre);
			estadoOrden2 = OrdenarMayusculas(apellido);
		}
		if(estadoOrden1 == 1 && estadoOrden2 == 1){
			strcat(apellido, ", ");
			strcat(apellido, nombre);
			memset(apellidoYnombre, 0, TAMANIO);
			strcat(apellidoYnombre, apellido);
			printf("El nombre completo es: %s\n", apellidoYnombre);
		}

	return EXIT_SUCCESS; //aGostInA bEgGi
}
