/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 4-2:
 Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit , validando que
 las temperaturas ingresadas estén entre el punto de congelación (0°C - 32 °F) y ebullición (100 ° C - 211.9 ° F)
 del agua para cada tipo de escala.
 Las validaciones se hacen en una biblioteca.
 Las funciones de transformación de
 fahrenheit a celsius
 ºF = ºC x 1.8 + 32
 celsius a fahrenheit
 ºC = (ºF-32) ÷ 1.8
 se hacen en otra biblioteca.*/

//Entregado

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca_Ej4-2.h"
#include "Biblioteca_Ej4-2_Transformacion.h"

int main(void) {
	setbuf(stdout, NULL);
	int temperaturaC;
	int minC;
	int maxC;
	float temperaturaF;
	float minF;
	float maxF;

	minC=0;
	maxC=100;

	minF=32.0;
	maxF=211.9;

	temperaturaC=IngresoEntero("Ingrese una temperatura °C(Entre 0 y 100)\n", minC, maxC);
	temperaturaC=PasajeFahrenheit(temperaturaC);
	printf("La temperatura ingresada en fahrenheit es: %f\n", (float)temperaturaC);

	temperaturaF=IngresoFloat("Ingrese una temperatura °F(Entre 32.0 y 211.9)\n", minF, maxF);
	temperaturaF=PasajeCelcius(temperaturaF);
	printf("La temperatura ingresada en celcius es: %d\n", (int)temperaturaF);

	return EXIT_SUCCESS;
}

