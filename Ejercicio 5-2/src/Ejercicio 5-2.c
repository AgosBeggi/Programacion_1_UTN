/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Resolucion en clase GDB: https://www.onlinegdb.com/fork/YMM7fcap5
/*Ejercicio 5-2:
 Pedir el ingreso de 10 n�meros enteros entre -1000 y 1000. Determinar:
 2-Cantidad de positivos y negativos.
 3-Sumatoria de los pares.
 4-El mayor de los impares.
 5-Listado de los n�meros ingresados.
 6-Listado de los n�meros pares.
 7-Listado de los n�meros de las posiciones impares.
 Se deber�n utilizar funciones y vectores.

 */


#include <stdio.h>
#include <stdlib.h>

#define T 10
#define MAX 1000
#define MIN -1000


void CargarArrayEntreRango(int array[], int tamanio, int minimo, int maximo);
int EstaEnRango(int numeroIngresado, int minimo, int maximo);
int ValidarSigno(int numeroIngresado);
void ContadorPositivosNegativos(int array[],int tamanio, int* positivos, int* negativos);
int EsPar(int numeroIngresado);
int SumarPares(int array[], int tamanio, int* refAcumulador);
int MayorImpar(int array[], int tamanio, int* maximo);
void ListarNumeros (int array[], int tamanio);
void ListarPosicionImpar(int array[], int tamanio);
void ListarNumerosPares(int array[], int tamanio);


int main(void) {
	setbuf(stdout, NULL);

	int array[T] = {0,24,-68,52,-159, 9999,-1000,221,38,-673};
	    int contadorPositivo;
	    int contadorNegativo;
	    int sumatoriaPares;
	    int numeroMayorImpar;


	    contadorNegativo = 0;
	    contadorPositivo = 0;

	    //CargarArrayEntreRango(array, T, MIN, MAX);

	    ContadorPositivosNegativos(array,T,&contadorPositivo,&contadorNegativo);

	    printf("\nHay %d positivos y %d negativos.",contadorPositivo,contadorNegativo);

	    /*sumatoriaPares=SumarPares(array, T);
	    printf("\nLa suma de los pares es: %d", sumatoriaPares);*/
	    if(SumarPares(array, T, &sumatoriaPares)== 1){
	         printf("\nLa suma de los pares es: %d", sumatoriaPares);
	    } else {
	        printf("\nNo se ingresaron pares.");
	    }

	    if(MayorImpar(array, T, &numeroMayorImpar) == 1){
	        printf("\nEl numero mayor impar es: %d", numeroMayorImpar);
	    } else {
	        printf("\nNo hay numeros impares en el array.");
	    }

	    ListarNumeros(array, T);
	    ListarNumerosPares(array,T);
	    ListarPosicionImpar(array,T);

	return EXIT_SUCCESS;
}

void CargarArrayEntreRango(int array[], int tamanio, int minimo, int maximo)
{
    int i;
    int numeroIngresado;
    for(i=0; i<tamanio; i++)
    {
        printf("Ingrese un numero entre %d y %d: ", minimo, maximo);
        scanf("%d", &numeroIngresado);
        while(EstaEnRango(numeroIngresado,minimo,maximo)==0){
            printf("Error, ingrese un numero entre  %d y %d", minimo, maximo);
            scanf("%d", &numeroIngresado);
        }

        array[i] = numeroIngresado;

    }

}


void ContadorPositivosNegativos(int array[],int tamanio, int* positivos, int* negativos)
{
    int i;
    int cantidadPositivos;
    int cantidadNegativos;
    int signo;

    cantidadNegativos = 0;
    cantidadPositivos = 0;

    for(i = 0; i < tamanio; i++)
    {
        signo = ValidarSigno(array[i]);
        if(signo==1)
        {
            cantidadPositivos++;
        }
        else
        {
            if(signo==-1)
            {
                cantidadNegativos++;
            }
        }
    }

    *positivos = cantidadPositivos;
    *negativos = cantidadNegativos;

}


int ValidarSigno(int numeroIngresado){

    int signo = 0;

    if ( numeroIngresado > 0)
    {
        signo = 1;
    }
    else
    {
        if(numeroIngresado<0)
		{
			signo = -1;
		}
    }

    return signo;


}



// 0 falso 1 verdadero
int EstaEnRango(int numeroIngresado, int minimo, int maximo){
    int retorno;
      retorno=1;
    if(numeroIngresado<minimo || numeroIngresado>maximo)
    {
        retorno=0;
    }
    return retorno;
}

int EsPar(int numeroIngresado){
    int retorno;
        retorno=0;

    if(numeroIngresado%2==0)
    {
        retorno=1;
    }
    return retorno;
}

int SumarPares(int array[], int tamanio, int* refAcumulador){
    int acumuladorPares;
    acumuladorPares=0;
    int i;
    int flag;

    flag=0;

    for(i=0; i<tamanio; i++)
    {
        if(EsPar(array[i])==1){
            acumuladorPares+=array[i];
            flag=1;
        }
    }
    *refAcumulador=acumuladorPares;
    return flag;

}

// Devuelve 1 si hay un mayor impar o 0 si no hay mayor impar.
int MayorImpar(int array[], int tamanio, int* maximo){

    int i;
    int mayorFlag = 0;
    int numeroMayor;

    for(i=0;i<tamanio;i++){
        if(EsPar(array[i]) == 0){
            if((mayorFlag == 0) || (array[i] > numeroMayor)){
                mayorFlag = 1;
                 numeroMayor = array[i];
            }
        }
        /*  ALTERNATIVA
            if(EsPar(array[i]) == 0 && (mayorFlag == 0 || array[i] > numeroMayor)){
            mayorFlag = 1;
            numeroMayor = array[i];
        }*/
    }
    *maximo = numeroMayor;
    return mayorFlag;
}
//4)Listado de los n�meros ingresados.

void ListarNumeros (int array[], int tamanio){

    int i;

    for(i=0; i<tamanio; i++){
        printf("\n%d", array[i]);
    }
}
//6)Listado de los n�meros de las posiciones impares.
void ListarPosicionImpar(int array[], int tamanio){
    int i;

    for(i=0;i<tamanio;i++)
    {
        if(EsPar(i)==0)
        {
            printf("\nPosicion: %d y valor: %d",i,array[i]);
        }
    }
}
void ListarNumerosPares(int array[], int tamanio){
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(EsPar(array[i])==1)
        {
            printf("\nvalor: %d",array[i]);
        }
    }
}

