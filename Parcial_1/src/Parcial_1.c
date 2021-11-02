/*
 ============================================================================
 Name        : Parcial_1.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int ObtenerCadena(char cadena[], int tamanio, char comodin);

 float Descuento(float precio, int descuento);


int main(void) {
	setbuf(stdout, NULL);

	char cadena[40];
	char comodin[2];
	int totalCambios;

	printf("Ingrese una palabra");
	fflush(stdin);
	fgets(cadena, 40, stdin);
	cadena[strlen(cadena)-1] = '\0';
	printf("Ingrese un caracter comodin");
	fflush(stdin);
	fgets(cadena, 2, stdin);

	totalCambios = ObtenerCadena(cadena, 40 , comodin);

	printf("El total de cambios es: %d", totalCambios);

	return EXIT_SUCCESS;
	}



int ObtenerCadena(char cadena[], int tamanio, char comodin){

	char letra;
	int vocalesA;
	int vocalesE;
	int vocalesI;
	int vocalesO;
	int vocalesU;
	int totalCambios;
	int i;

	float precio;
	float porcentaje;
	int descuento;

	vocalesA = 0;
	vocalesE = 0;
	vocalesI = 0;
	vocalesO = 0;
	vocalesU = 0;

	for(i = 0; i < tamanio; i++){
		letra = tolower(cadena[i]);
		 if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
			switch(letra){
			case 'a':
				cadena[i] = comodin;
				vocalesA++;
				break;
			case 'e':
				cadena[i] = comodin;
				vocalesE++;
				break;
			case 'i':
				cadena[i] = comodin;
				vocalesI++;
				break;
			case 'o':
				cadena[i] = comodin;
				vocalesO++;
				break;
			case 'u':
				cadena[i] = comodin;
				vocalesU++;
				break;
			}

		 }
	}
	totalCambios = vocalesA + vocalesE + vocalesI + vocalesO + vocalesU;
	return totalCambios;

	printf("Ingrese un precio: \n");
	scanf("%f", precio);

	printf("Ingrese un descuento: \n");
	scanf("%f", descuento);

	porcentaje = Descuento(precio, descuento);
}

//3. Realizar una función que reciba como parámetro el importe de un producto y un
//porcentaje de descuento. La función retornará el importe con el descuento aplicado.

float Descuento(float precio, int descuento){

	float porcentaje;

	porcentaje = precio * descuento / 100;

	return porcentaje;

}
