/*
 * Biblioteca_Ej4-2_Transformacion.c
 *
 *  Created on: 13 sep. 2021
 *      Author: Beggi Agostina
 */
#include <stdio.h>
#include <stdlib.h>

float PasajeFahrenheit (int celcius){
	float fahrenheit;
	//ºF = ºC x 1.8 + 32
	fahrenheit=(float)celcius*1.8+32;
	return fahrenheit;
}

int PasajeCelcius (float fahrenheit){
	int celcius;
	//ºC = (ºF-32) ÷ 1.8
	celcius=((float) fahrenheit-32)/1.8;
	return celcius;
}

