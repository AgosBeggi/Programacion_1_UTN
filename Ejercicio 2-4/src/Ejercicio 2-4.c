/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Ejercicio 2-4: Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
//Entregado

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define X 5

int main(void) {

	setbuf(stdout, NULL);

	char caracterIngresado;
	int i;
	int contadorP;

	contadorP = 0;

	for (i = 0; i < X; i++) {
		printf("Ingrese un caracter\n");
		fflush(stdin);
		scanf("%c", &caracterIngresado);

		if (caracterIngresado == 'p') {
			contadorP++;
		}
	}

	printf("La cantidad de letras p (minúsculas) se ingresaron es: %d",
			contadorP);

	return EXIT_SUCCESS;
}
