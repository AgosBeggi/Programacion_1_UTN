/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 2-2: Ingresar 10 números enteros, distintos de cero. Mostrar:
 Cantidad de pares e impares.
 El menor número ingresado.
 De los pares el mayor número ingresado.
 Suma de los positivos.
 Producto de los negativos.*/
//Entregado

#include <stdio.h>
#include <stdlib.h>
#define X 10

int main(void) {

	setbuf(stdout, NULL);

	int numero;
	int i;
	int acumuladorNumero;
	int contadorPares;
	int contadorImpares;
	int flag1 = 0;
	int parMayor;
	int productoNegativo;
	int flag2 = 0;
	int menorNumero;

	acumuladorNumero = 0;
	contadorPares = 0;
	contadorImpares = 0;
	productoNegativo = 1;

	for (i = 0; i < X; i++) {
		printf("Ingrese un numero\n");
		scanf("%d", &numero);
		while (numero == 0) {
			printf("Error. Ingrese un numero\n");
			scanf("%d", &numero);
		}

		if (flag2 == 0 || menorNumero > numero) {
			menorNumero = numero;
			flag2 = 1;
		}

		if (numero % 2 == 0) {
			contadorPares++;
			if (flag1 == 0 || parMayor < numero) {
				parMayor = numero;
				flag1 = 1;
			}
		} else {
			contadorImpares++;
		}

		if (numero > 0) {
			acumuladorNumero += numero;
		} else {
			productoNegativo = productoNegativo * numero;
		}
	}

	printf("La cantidad de numeros pares ingresados es: %d\n", contadorPares);
	printf("La cantidad de numeros impares ingresados es: %d\n", contadorImpares);
	printf("El menor número ingresado es: %d\n", menorNumero);
	printf("De los pares el mayor número ingresado es: %d\n", parMayor);
	printf("Suma de los positivos es: %d\n", acumuladorNumero);
	printf("Producto de los negativos es: %d", productoNegativo);

	return EXIT_SUCCESS;
}
