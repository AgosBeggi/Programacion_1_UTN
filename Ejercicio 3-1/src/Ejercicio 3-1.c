/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Ejercicio 3-1:
//Crear una funci�n que muestre por pantalla el n�mero flotante  que recibe como par�metro.
//Entregado

#include <stdio.h>
#include <stdlib.h>

void MuestraFlotante(float flotante);

int main(void) {
	setbuf(stdout, NULL);

	float numero;

	printf("Ingrese un flotante \n");
	scanf("%f", &numero);
	MuestraFlotante(numero);

	return EXIT_SUCCESS;
}

void MuestraFlotante(float flotante) {

	printf("El flotante es: %.2f\n", flotante);
}
