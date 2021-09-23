/*
 ============================================================================
 Name        : ANEXO.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*ANEXO 5-1:
Armar un Menú de Opciones con las siguientes opciones
1-Inicializar
2-Cargar
3-Mostrar
4-Calcular Promedio
5-Ordenar
Al ingresar a cada opción del menú deberá imprimir en pantalla el nombre del mismo.
Ej: Si se presiona la opción 1 mostrar por pantalla “Ud. ha seleccionado lo opción 1-Inicializar”*/



#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"
#include "Ingresos.h"
#include "Validar.h"

#define X 10

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int listaNumeros[X];
	int inicio;
	int min;
	int max;

	inicio = -1001;
	min = -1000;
	max = 1000;

	do {
		puts("1.Inicializar Vector \n");
		puts("2.Cargar Vector \n");
		puts("3.Mostrar Vector \n");
		puts("4.Calcular Promedio \n");
		puts("5.Ordenar Vector\n");
		puts("6 Salir. \n");
		puts("Elija una opcion. \n");
		scanf("%d", &opcion);

		switch (opcion) {
		case 1:
			puts("Ud. ha seleccionado lo opción 1-Inicializar Vector");
			InicializarVector(listaNumeros, X, inicio);
			break;
		case 2:
			puts("Ud. ha seleccionado lo opción 2-Cargar Vector");
			CargaSecuencialVectorConParametros(listaNumeros, X, min, max);
			break;
		case 3:
			puts("Ud. ha seleccionado lo opción 3-Mostrar Vector");
			MostrarVector(listaNumeros, X, inicio);
			break;
		case 4:
			puts("Ud. ha seleccionado lo opción 4-Calcular Promedio");
			MostrarPromedioVector(listaNumeros, X);
			break;
		case 5:
			puts("Ud. ha seleccionado lo opción 5-Ordenar Vector");
			OrdenarVectorNumeros(listaNumeros, X);
			break;
		case 6:
			puts("Ud. ha seleccionado lo opción 6-Salir\n");
			puts("Gracias, que tenga un buen dia");
			break;
		}

	} while (opcion != 6);

	return EXIT_SUCCESS;
}
//ejercicio 7-2 https://www.onlinegdb.com/GM5EGhkpHV
//ejemplo tema nuevo - https://www.onlinegdb.com/5AXcyzxLX
