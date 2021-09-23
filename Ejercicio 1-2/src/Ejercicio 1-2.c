/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
//Entregado
#include <stdio.h>
 #include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int i;
	int numeroMayor;
	int flag;

	flag = 0;
	numeroMayor = 0;

	for (i = 0; i < 3; i++) {
		printf("Ingrese un número\n");
		scanf("%d", &numero);

		if (flag == 0 || numeroMayor < numero) {
			numeroMayor = numero;
			flag = 1;
		}
	}

	printf("El numero mayor es: %d", numeroMayor);

	return EXIT_SUCCESS;
}
