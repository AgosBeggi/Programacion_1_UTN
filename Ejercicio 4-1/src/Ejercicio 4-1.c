/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 4-1:
 Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número. Utilizar la
 función PedirNumero de la ejercitación 3-4.
 Por ejemplo:
 5! = 5*4*3*2*1 = 120*/
//Entregado

#include <stdio.h>
#include <stdlib.h>

int IngresoEntero(char mensaje[]);
int ValidarEntero(int numEntero);
void Factorial(int numero);
int FuncionFactorial(int numero);

int main(void) {

	setbuf(stdout, NULL);

	int numeroEntero;

	numeroEntero = IngresoEntero("Ingrese un numero entero: \n");
	numeroEntero = FuncionFactorial(numeroEntero);
	printf("El factorial es: %d", numeroEntero);

	return EXIT_SUCCESS;
}

int IngresoEntero(char mensaje[]) {

	int numero;

	printf("%s", mensaje);
	scanf("%d", &numero);

	numero = ValidarEntero(numero);
	Factorial(numero);

	return numero;
}

int ValidarEntero(int numEntero) {

	while (numEntero < -100 || numEntero > 100) {
		printf("Error. El numero entero debe estar entre -100 y 100\nVuelva a ingresar un numero entero\n");
		scanf("%d", &numEntero);
	}

	return numEntero;
}

void Factorial(int numero) {

	int i;
	int acumulador;

	acumulador = 1;

	for (i = 1; i <= numero; i++) {

			acumulador = acumulador * i;
		}

	printf("El factorial de %d es: %d\n", numero, acumulador);
}

int FuncionFactorial(int numero) {

	int resultado;
	if (numero == 0) {
		resultado = 1;
	} else {
		resultado = numero * FuncionFactorial(numero - 1);
	}

	return resultado;
}
