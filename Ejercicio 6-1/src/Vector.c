/*
 * Vector.c
 *
 *  Created on: 16 sep. 2021
 *      Author: Beggi Agostina
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Ingresos.h"
#include "Validar.h"

void InicializarVectorNumeros(int vector[], int tamanio, int inicio){

	int i;

	for(i=0; i < tamanio; i++){
		vector[i] = inicio;
	}
}

int CargaSecuencialVectorNumeroEntero(int vector[], int tamanio, char mensaje[]){

	int i;
	int numero;
	int estadoNumero;
	int retorno;

	retorno = 0;

	for(i=0; i < tamanio; i++){
		estadoNumero = IngresoEntero(mensaje, &numero);
		if(estadoNumero == 1){
			vector[i] = numero;
			retorno=1;
		}
	}

	return retorno;
}

int CargaSecuencialVectorNumeroEnteroParametros(int vector[], int tamanio, char mensaje[], int min, int max){

	int i;
	int numero;
	int retorno;
	int estado;

	retorno = 0;

	for(i=0; i < tamanio; i++){
		estado = IngresoEnteroConParametros(mensaje, min, max, &numero);
		if(estado == 1){
			vector[i] = numero;
			retorno=1;
			break;
		}
	}
	return retorno;
}

int CargaSecuencialVectorNumeroFlotante(float vector[], int tamanio, char mensaje[]){

	int i;
	float numero;
	int retorno;
	int estado;

	retorno = 0;

	for(i=0; i < tamanio; i++){
		estado = IngresoFlotante(mensaje, &numero);
		if(estado == 1){
			vector[i] = numero;
			retorno=1;
			break;
		}
	}
	return retorno;
}

int CargaSecuencialVectorNumeroFlotanteParametros(float vector[], int tamanio, char mensaje[], int min, int max){

	int i;
	float numero;
	int retorno;
	int estado;

	retorno = 0;

	for(i=0; i < tamanio; i++){
		estado = IngresoFlotanteConParametros(mensaje, min, max, &numero);
		if(estado == 1){
			vector[i] = numero;
			retorno=1;
			break;
		}
	}
	return retorno;
}

int CargaAleatoriaVectorNumeroEntero(int vector[], int tamanio, char mensajeNumero[], char mensajePosicion[]){

	int i;
	int numeroDato;
	int numeroPosicion;
	int retorno;
	int estadoNumero;
	int estadoPosicion;
	char respuesta;

	retorno = 0;


	for(i=0; i < tamanio; i++){
		estadoNumero = IngresoEntero(mensajeNumero, &numeroDato);
		estadoPosicion = IngresoEntero(mensajePosicion, &numeroPosicion);
		if(estadoNumero == 1 && estadoPosicion == 1){
			vector[numeroPosicion-1] = numeroDato;
			retorno=1;
			printf("¿Desea cargar otro dato?(s/n)\n");
			fflush(stdin);
			scanf("%c", &respuesta);
			if(respuesta != 's'){
			break;
			}
			break;
		}
	}


	return retorno;
}

int CargaAleatoriaVectorNumeroEnteroParametros(int vector[], int tamanio, char mensajeNumero[],
		char mensajePosicion[], int min, int max){

	int i;
	int numeroDato;
	int numeroPosicion;
	int retorno;
	int estadoNumero;
	int estadoPosicion;
	char respuesta;

	retorno = 0;

	for(i=0; i < tamanio; i++){
		estadoNumero = IngresoEnteroConParametros(mensajeNumero, min, max, &numeroDato);
		estadoPosicion = IngresoEntero(mensajePosicion, &numeroPosicion);
		if(estadoNumero == 1 && estadoPosicion == 1){
			vector[numeroPosicion-1] = numeroDato;
			retorno=1;
			printf("¿Desea cargar otro dato?(s/n)\n");
			fflush(stdin);
			scanf("%c", &respuesta);
			if(respuesta != 's'){
			break;
			}
		}
	}

	return retorno;
}

int CargaAleatoriaVectorNumeroEnteroDistintoCero(int vector[], int tamanio, char mensajeNumero[],
		char mensajePosicion[]){

	int i;
	int numeroDato;
	int numeroPosicion;
	int retorno;
	int estadoNumero;
	int estadoPosicion;
	int estadoCero;
	char respuesta;

	retorno = 0;


	for(i=0; i < tamanio; i++){
		estadoNumero = IngresoEntero(mensajeNumero, &numeroDato);
		estadoCero = EsCero(numeroDato);
		estadoPosicion = IngresoEntero(mensajePosicion, &numeroPosicion);
		if(estadoNumero == 1 && estadoPosicion == 1 && estadoCero != 1){
			vector[numeroPosicion-1] = numeroDato;
			retorno=1;
			printf("¿Desea cargar otro dato?(s/n)\n");
			fflush(stdin);
			scanf("%c", &respuesta);
			if(respuesta != 's'){
			break;
			}
		}
	}


	return retorno;
}

int CargaAleatoriaVectorNumeroFlotante(float vector[], int tamanio, char mensajeNumero[], char mensajePosicion[]){

	int i;
	float numeroDato;
	int numeroPosicion;
	int retorno;
	int estadoNumero;
	int estadoPosicion;
	char respuesta;

	retorno = 0;


	for(i=0; i < tamanio; i++){
		estadoNumero = IngresoFlotante(mensajeNumero, &numeroDato);
		estadoPosicion = IngresoEntero(mensajePosicion, &numeroPosicion);
		if(estadoNumero == 1 && estadoPosicion == 1){
			vector[numeroPosicion-1] = numeroDato;
			retorno=1;
			printf("¿Desea cargar otro dato?(s/n)\n");
			fflush(stdin);
			scanf("%c", &respuesta);
			if(respuesta != 's'){
			break;
			}
		}
	}

	return retorno;
}

int CargaAleatoriaVectorNumeroFlotanteParametros(float vector[], int tamanio, char mensajeNumero[],
		char mensajePosicion[], int min, int max){

	int i;
	float numeroDato;
	int numeroPosicion;
	int retorno;
	int estadoNumero;
	int estadoPosicion;
	char respuesta;

	retorno = 0;


	for(i=0; i < tamanio; i++){
		estadoNumero = IngresoFlotanteConParametros(mensajeNumero, min, max, &numeroDato);
		estadoPosicion = IngresoEntero(mensajePosicion, &numeroPosicion);
		if(estadoNumero == 1 && estadoPosicion == 1){
			vector[numeroPosicion-1] = numeroDato;
			retorno=1;
			printf("¿Desea cargar otro dato?(s/n)\n");
			fflush(stdin);
			scanf("%c", &respuesta);
			if(respuesta != 's'){
			break;
			}
		}
	}

	return retorno;
}

int SumarVector(int vector[], int size) {

	int acumulador;
	int i;

	acumulador = 0;

	for (i = 0; i < size; i++) {
		acumulador = acumulador + vector[i];
	}

	return acumulador;
}

float ObtenerPromedioVector(int vector[], int size) {

	int acumulador;
	int i;
	float promedio;

	acumulador = 0;

	for (i = 0; i < size; i++) {
		acumulador = acumulador + vector[i];
	}

	promedio = acumulador / size;

	return promedio;
}

float ObtenerPromedioEnterosPositivos(int vector[], int size) {

	int acumuladorPositivos;
	int i;
	float promedio;
	int contador;

	acumuladorPositivos = 0;
	contador = 0;

	for (i = 0; i < size; i++) {
		if(vector[i] > 0){
			acumuladorPositivos = acumuladorPositivos + vector[i];
			contador ++;
		}
	}

	promedio = (float)acumuladorPositivos / contador;

	return promedio;
}

int ContadorEnterosPositivos(int vector[], int size, int* totalPositivos) {

	int i;
	int cantidadPositivos;
	int estado;

	cantidadPositivos = 0;
	estado = 0;

	for (i = 0; i < size; i++) {
		if (vector[i] > 0) {
			cantidadPositivos++;
			estado = 1;
		}
	}

	*totalPositivos = cantidadPositivos;

	return estado;
}

int ContadorEnterosNegativos(int vector[], int size, int* totalNegativos) {

	int i;
	int cantidadNegativos;
	int estado;

	cantidadNegativos = 0;
	estado = 0;

	for (i = 0; i < size; i++) {
		if (vector[i] < 0) {
			cantidadNegativos++;
			estado = 1;
		}
	}

	*totalNegativos = cantidadNegativos;

	return estado;
}

int AcumuladorEnterosNegativos(int vector[], int size, int* totalNegativos) {

	int i;
	int acumuladorNegativos;
	int estado;

	acumuladorNegativos = 0;
	estado = 0;

	for (i = 0; i < size; i++) {
		if (vector[i] < 0) {
			acumuladorNegativos = acumuladorNegativos + vector[i];
			estado = 1;
		}
	}

	*totalNegativos = acumuladorNegativos;

	return estado;
}

int ObtenerMenorEntero(int vector[], int size){

	int i;
	int menor;

	for (i = 0; i < size; i++) {
		if (i == 0 || vector[i] < menor) {
			menor = vector[i];
		}
	}

	return menor;
}

int ObtenerMayorEntero(int vector[], int size){

	int i;
	int mayor;

	for (i = 0; i < size; i++) {
		if (i == 0 || vector[i] > mayor) {
			mayor = vector[i];
		}
	}

	return mayor;
}
