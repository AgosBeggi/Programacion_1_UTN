/*
 * Math.h
 *
 *  Created on: 6 oct. 2021
 *      Author: Beggi Agostina
 */

#ifndef MATH_H_
#define MATH_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

#include "Estructura.h"
#include "Ingresos.h"
#include "Listados.h"
#include "Validar.h"
#include "Vector.h"
#include "Math.h"

float Sumar(float num1, float num2);

float Restar(float num1, float num2);

float Multiplicar(float num1, float num2);

int Dividir(float *punteroResultado, float num1, float num2);

int Factorear(int *punteroResultado, char string[]);

int contarVocales(char *cadena);

int contarConsonantes(char *cadena);

#endif /* MATH_H_ */
