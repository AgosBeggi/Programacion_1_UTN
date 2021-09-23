/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
//Entregado
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese un número\n");
	scanf("%d", &numeroUno);
	printf("Ingrese otro número\n");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;
	printf("El resultado es: %d", resultado);

	return EXIT_SUCCESS;
}
