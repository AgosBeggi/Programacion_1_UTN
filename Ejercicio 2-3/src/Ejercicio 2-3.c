/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 2-3: Debemos alquilar el servicio de transporte para llegar a Mar del Plata
 con un grupo de personas, de cada persona debemos obtener los siguientes datos:
 número de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, más de 17),
 temperatura corporal (validar por favor)
 y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado "viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final
 tiene un descuento del 25%, que solo mostramos si corresponde.
 yo lo hice tipo mitad = contador/2;
 y despues un if que compare si contadorViejos es mayor o igual a mitad
 entonces descuento = 0.25*/
//Entregado

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define P 600

int main(void) {

	setbuf(stdout, NULL);

	int numeroCliente;
	char estadoCivil;
	int edad;
	float temperatura;
	char genero;
	char respuesta;
	int contadorViudosMayores;
	int flag;
	int edadSolteraMasJoven;
	int numeroClienteSolteraMasJoven;
	int contadorIngresos;
	double precioTotal;
	float mitadIngresos;
	int contadorMayores;
	double precioFinal;

	contadorViudosMayores = 0;
	flag = 0;
	contadorIngresos = 0;
	contadorMayores = 0;

	do {
		printf("Ingrese el numero de cliente\n");
		scanf("%d", &numeroCliente);
		while (_isnan(numeroCliente)) {
			printf("Error. Ingrese el numero de cliente\n");
			scanf("%d", &numeroCliente);
		}
		printf(
				"Ingrese el estado civil\n('s' para soltero, 'c' para casado o 'v' viudo)\n");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v') {
			printf(
					"Error. Ingrese el estado civil\n('s' para soltero, 'c' para casado o 'v' viudo)\n");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		}
		printf("Ingrese la edad\n");
		scanf("%d", &edad);
		while (_isnan(edad) || edad < 18) {
			printf("Error. Ingrese la edad\n");
			scanf("%d", &edad);
		}
		printf("Ingrese la temperatura\n");
		scanf("%f", &temperatura);
		while (_isnan(temperatura) || temperatura < 35 || temperatura > 40) {
			printf("Error. Ingrese la temperatura\n");
			scanf("%f", &temperatura);
		}
		printf(
				"Ingrese el genero\n('f' para femenino, 'm' para masculino, 'o' para no binario)\n");
		fflush(stdin);
		scanf("%c", &genero);
		while (genero != 'f' && genero != 'm' && genero != 'o') {
			printf(
					"Error. Ingrese el genero\n('f' para femenino, 'm' para masculino, 'o' para no binario)\n");
			fflush(stdin);
			scanf("%c", &genero);
		}

		contadorIngresos++;

		switch (estadoCivil) {
		case 's':
			if (genero == 'f') {
				if (flag == 0 || edadSolteraMasJoven > edad) {
					edadSolteraMasJoven = edad;
					numeroClienteSolteraMasJoven = numeroCliente;
					flag = 1;
				}
			}
			break;
		case 'v':
			if (edad > 60) {
				contadorViudosMayores++;
			}
			break;
		}

		if (edad > 60) {
			contadorMayores++;
		}

		printf("¿Desea ingresar otro dato?\n(s/n)");
		fflush(stdin);
		scanf("%c", &respuesta);
	} while (respuesta != 'n');

	precioTotal = (double) contadorIngresos * P;
	mitadIngresos = (float) contadorIngresos / 2;

	printf(
			"La cantidad de personas con estado viudo de más de 60 años es: %d\n",
			contadorViudosMayores);
	printf(
			"El número de cliente y edad de la mujer soltera más joven es: %d, %d\n",
			numeroClienteSolteraMasJoven, edadSolteraMasJoven);
	printf("El precio del viaje total sin descuento es: %lf", precioTotal);

	if (contadorMayores >= mitadIngresos) {
		precioFinal = precioTotal - (precioTotal * 0.25);
		printf("El precio final es: %lf", precioFinal);
	}

	return EXIT_SUCCESS;
}
