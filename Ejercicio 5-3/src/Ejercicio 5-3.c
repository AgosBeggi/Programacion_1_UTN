/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 5-3:
Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos,
y del menor de los negativos la suma de los antecesores
(Según la recta numérica de los reales, hasta llegar a cero).
Utilizar funciones y vectores.*/

//Entregado con bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "Vector.h"
#include "Ingresos.h"
#include "Validar.h"

#define TAMANIO 10
#define INICIO 0


int main(void) {
	setbuf(stdout, NULL);

	int vector[TAMANIO];
	int estadoDeCarga;
	float promedioPositivos;
	int menorValor;
	int totalNegativos;
	int estadototalNegativos;
	int sumaAntecesores;

	InicializarVectorNumeros(vector, TAMANIO, INICIO);
	estadoDeCarga = CargaAleatoriaVectorNumeroEnteroDistintoCero(vector, TAMANIO, "Ingrese un numero\n", "Indique una posicion del 1 al 10\n");
	if(estadoDeCarga == 1){
		printf("Se cargaron los datos.\n");
	}

	promedioPositivos = ObtenerPromedioEnterosPositivos(vector, TAMANIO);
	printf("El promedio de los numeros positivos es: %.2f\n", promedioPositivos);

	menorValor = ObtenerMenorEntero(vector, TAMANIO);

	estadototalNegativos = AcumuladorEnterosNegativos(vector, TAMANIO, &totalNegativos);
	if(estadototalNegativos == 1){
		printf("El menor valor de los negativos es: %d\n", menorValor);
		sumaAntecesores = totalNegativos - menorValor;
		printf("Del menor de los negativos la suma de los antecesores es: %d\n", sumaAntecesores);
	}

	return EXIT_SUCCESS;
}
