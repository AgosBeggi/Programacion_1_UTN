/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 3-2:
 Crear una función que permita determinar si un número es par o no. La función retorna 1 en
 caso afirmativo y 0 en caso contrario. Probar en el main.*/
//Entregado

#include <stdio.h>
#include <stdlib.h>

int ParImpar(int parImpar);

int main(void) {

	setbuf(stdout, NULL);

	int num;
	printf("Ingrese un numero\n");
	scanf("%d", &num);
	num = ParImpar(num);

	return EXIT_SUCCESS;
}

int ParImpar(int parImpar) {

	if (parImpar % 2 == 0) {
		parImpar = 0;
		printf("El numero es par\n");
	} else {
		parImpar = 1;
		printf("El numero es impar\n");
	}
	printf("%d", parImpar);

	return parImpar;
}
