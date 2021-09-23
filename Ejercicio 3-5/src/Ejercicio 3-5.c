/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 3-5:
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
 int Sumar1(int, int);
 int Sumar2(void);
 void  Sumar3(int, int);
 void Sumar4(void);*/
//Entregado

#include <stdio.h>
#include <stdlib.h>

int Sumar1(int num1, int num2);
int Sumar2(void);
void Sumar3(int num1, int num2);
void Sumar4(void);

int main(void) {

	int numero1;
	int numero2;
	int suma;

	printf("Ingrese un numero\n");
	scanf("%d", &numero1);
	printf("Ingrese un numero\n");
	scanf("%d", &numero2);

	suma = Sumar1(numero1, numero2);
	printf("La suma es: %d", suma);

	suma = Sumar2();
	printf("La suma es: %d", suma);

	Sumar3(numero1, numero2);

	Sumar4();

	return EXIT_SUCCESS;
}

int Sumar1(int num1, int num2) {
	int resultado;
	resultado = num1 + num2;

	return resultado;
}

int Sumar2(void) {
	int num1;
	int num2;
	int resultado;

	printf("Ingrese un numero\n");
	scanf("%d", &num1);
	printf("Ingrese un numero\n");
	scanf("%d", &num2);

	resultado = num1 + num2;

	return resultado;

}

void Sumar3(int num1, int num2) {

	int resultado;
	resultado = num1 + num2;
	printf("La suma es: %d", resultado);

}

void Sumar4(void) {
	int num1;
	int num2;
	int resultado;

	printf("Ingrese un numero\n");
	scanf("%d", &num1);
	printf("Ingrese un numero\n");
	scanf("%d", &num2);

	resultado = num1 + num2;
	printf("La suma es: %d", resultado);
}
