/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe.
//En caso de que no exista también informarlo.
//Entregado

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingrese un número \n");
	scanf("%d", &numeroUno);
	printf("Ingrese un número \n");
	scanf("%d", &numeroDos);
	printf("Ingrese un número \n");
	scanf("%d", &numeroTres);

	if (numeroUno != numeroDos || numeroUno != numeroTres || numeroDos != numeroTres) {
		if ((numeroUno < numeroDos && numeroUno > numeroTres) || (numeroUno < numeroTres && numeroUno > numeroDos)) {
			printf("El numero del medio es: %d", numeroUno);
		} else if ((numeroDos < numeroUno && numeroDos > numeroTres) || (numeroDos < numeroTres && numeroDos > numeroUno)) {
			printf("El numero del medio es: %d", numeroDos);
		} else if ((numeroTres < numeroDos && numeroTres > numeroUno) || (numeroTres < numeroUno && numeroTres > numeroDos)) {
			printf("El numero del medio es: %d", numeroTres);
		} else {
			printf("No hay numero del medio");
		}
	}

	return EXIT_SUCCESS;
}
