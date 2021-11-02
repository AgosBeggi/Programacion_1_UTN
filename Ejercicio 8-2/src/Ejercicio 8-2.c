/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Beggi - Agostina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 * Ejercicio 7-1 / 8-2 / 9-1
 Una empresa importadora que comercializa productos Apple, decide registrar de
 sus productos los siguientes datos:

 idProducto (numerico)
 descripcion (alfanumérico)
 nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
 (por el momento hacer que los numeros, muestren las opciones)
 tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
 precio (numérico decimal)

 * Para eso hay que crear un nuevo tipo de dato que contenga esa estructura.
 * Debe incluir un dato que permita guardar un valor para inicializar la lista. (isEmpty)

 Realizar un programa que permita interactuar con un menú de usuarios con las siguientes
 opciones:

 * Crear un menu

 ALTA Producto: Se ingresan los datos de UN solo producto.

 * Crear funcion para ingresar sólo un producto.

 Siempre y cuando haya espacio disponible en el array.

 * Crear funcion que verifique si hay un espacio libre.

 BAJA Producto: A partir del ingreso del ID.

 * Crear funcion de busqueda por ID.

 Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.

 * Crear funcion para eliminar datos de la lista.

 MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.

 * Crear funcion que permita modificar datos.

 LISTADO Productos.

 * Crear funcion que muestre el listado completo.

 LISTADO ordenado por precio.
 LISTADO ordenado por descripción.

 * Crear funcion que permita ordenar los arrays, y llamar a la funcion anterior.

 stricmp() In C: https://www.2braces.com/c-programming/c-stricmp
 //strcmp
 //menor a cero = izquierda es menor derecha
 //cero  = izquierda es igual que derecha
 //mayor a cero = izquierda es mayor derecha
 9-1
 Agregar los siguientes informes:
 El/los  productos más caros.
 Los productos que cuestan 700
 Precio promedio por tipo de producto.
 De los Iphone el más barato
 Los productos "MADE IN CHINA"
 Las MAC que cuestan más de 700 USD
 El/Los Accesorios más caros
 informes en biblioteca "Informes.h"
 Trabajo en clase:
 https://www.onlinegdb.com/-s7XUvJfN
 ultimo ultimo codigo https://www.onlinegdb.com/HznNVVQAQ

 https://onlinegdb.com/n3eb28Bnp

--- CONTAR PALABRAS ---
 #define TAM_LINEA 40
 #define TAM_TEXTO 200

 void main()
 {

 char texto[TAM_TEXTO];
 int contador, palabras=1;

 printf("\n\tEscribe un texto de %d caracteres como maximo. :\n\t", TAM_TEXTO);

 gets(texto);

 contador=0;
 while(contador<strlen(texto))
 {

 if(texto[contador]==' ' && texto[contador-1]!=' ' && contador>0)
 palabras++;

 contador++;

 }

 printf("\n\n\tHay: %d caracteres, %d palabras y %d lineas" strlen(texto), palabras, (caracteres/TAM_LINEA));

 }

 */

/*#include <stdio.h>
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

#define SIZE_LIST 5
#define SIZE_ARRAY 100
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define WRONG 0
#define CORRECT 1
#define EMPTY 0
#define FULL 1
#define LENTIPO 4
#define TAMAL 0
#define TABIEN 1

#define TAM 5
#define EMPTY 0
#define FULL 1
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define TAMAL 0
#define TABIEN 1
#define LENTIPO 4

#define SIZE_STRING 51
#define len 100*/



	/*int estadoOpcion;
	Employee list[SIZE_LIST];
	int estado;
	int opcion;
	int retorno;
	int retornoFuncion;
	float precioPromedioPorIphone;
	float precioPromedioPorMac;
	float precioPromedioPorIpad;
	float precioPromedioPorAccesorios;
	int estadoBusqueda;
	char seguir;
	int estadoFlotante;
	float flotante;
	eProducto unProducto;
	Employee lista[SIZE_LIST];
	int estadoName;
	int estadoLastName;
	int estadoSalary;
	int estadoSector;
	char name[51];
	char lastName[51];
	float salary = 0;
	int sector = 0;
	int ingresoOpcion;
	int posicion;
	int estadoBusquedaID;
	int opcion2;
	int estadoEliminado;
	int index;
	int estadoAdd;
	eTipoProducto listaTipoProductos[LENTIPO];
	eProducto listaProductos[TAM];
	int order = 1;
	int id = 0;
	Employee employee;

	estado = initEmployees(list, SIZE_LIST);

	if (estado == 0) {
		puts(
				"-----------------------------------------------------------------");
		printf("\t\t\t  BIENVENIDO\n");
		puts(
				"-----------------------------------------------------------------");

		do {
			puts("INGRESE UNA OPCIÓN: \n");
			puts("01. ALTA DE UN EMPLEADO");
			puts("02. MODIFICAR UN EMPLEADO");
			puts("03. BAJA DE UN EMPLEADO");
			puts("04. INFORMAR");
			puts("05. ALTA DE UN PRODUCTO");
			puts("06. MODIFICAR UN PRODUCTO");
			puts("07. BORRAR UN PRODUCTO");
			puts("08. MODIFICAR UN PRODUCTO");
			puts("09. ORDENAR UN PRODUCTO POR PRECIO");
			puts("10. ORDENAR UN PRODUCTO POR DESCRIPCION");
			puts("11. LISTADO DE IPHONE DE EEUU\n");

			estadoOpcion = Get_A_Number_Int("\n", &opcion);

			puts(
					"-----------------------------------------------------------------");
			if (estadoOpcion == 1
					&& (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4
							|| opcion == 5 || opcion == 6 || opcion == 7
							|| opcion == 8 || opcion == 9 || opcion == 10
							|| opcion == 11)) {
				//
			} else {
				puts("Error, Opción incorrecta.");
			}

			switch (opcion) {
			case 1:
				//id++;

				estadoName = Get_String(name, SIZE_STRING, "NOMBRE: ");

				while (estadoName != 1) {
					puts("Error. Intente nuevamente.");
					estadoName = Get_String(name, SIZE_STRING, "NOMBRE: ");
				}

				estadoLastName = Get_String(lastName, SIZE_STRING, "APELLIDO: ");

				while (estadoLastName != 1) {
					puts("Error. Intente nuevamente.");
					estadoLastName = Get_String(lastName, SIZE_STRING, "APELLIDO: ");
				}

				estadoSalary = Get_A_Number_Float("SALARIO: ", &salary);
				while (estadoSalary != 1) {
					puts("Error. Intente nuevamente.");
					estadoSalary = Get_A_Number_Float("SALARIO: ", &salary);
				}

				estadoSector = Get_A_Number_Int("SECTOR: ", &sector);

				while (estadoSector != 1) {
					puts("Error. Intente nuevamente.");
					estadoSector = Get_A_Number_Int("SECTOR: ", &sector);

				}
				if (estadoName == 1 && estadoLastName == 1 && estadoSalary == 1
						&& estadoSector == 1) {
					id = id + 1;
					estadoAdd = addEmployee(list, len, name, lastName, salary,
							sector, id);
				}
				if (estadoAdd == 0) {
					puts("\nSe cargó correctamente.");
				}
				break;
			case 2:
				estado = printEmployees(list, len);
				puts("-----------------------------------------------------------------");
				puts("\t\t\t  MODIFICAR");
				puts("-----------------------------------------------------------------");
				estado = Get_A_Number_Int("1. NOMBRE\n2. APELLIDO\n3. SALARIO\n4. SECTOR\n", &ingresoOpcion);
				puts("-----------------------------------------------------------------");

				estado = Get_A_Number_Int("Ingrese el ID del empleado a modificar: ", &posicion);
				puts("-----------------------------------------------------------------");
				estadoBusquedaID = findEmployeeById(list, len, posicion); //retorna la posicion del id encontrado o -1 para error
				if (estado == 1 && estadoBusquedaID == 0) {
					puts("-----------------------------------------------------------------");
					puts("Se modificó correctamente.");
				}
				break;
			case 3:
				puts("-----------------------------------------------------------------");
				puts("\t\t\t  ELIMINAR");
				puts("-----------------------------------------------------------------");
				puts("Ingrese el ID del empleado a dar de baja: \n");
				estado = printEmployees(list, len);
				estado = Get_A_Number_Int("\n", &index);
				puts("-----------------------------------------------------------------");
				estadoBusquedaID = findEmployeeById(list, len, index); //retorna la posicion del id encontrado o -1 para error
				if (estado == 1) {
					estadoEliminado = removeEmployee(list, len, posicion);
					if (estadoEliminado == 0) {
						puts("-----------------------------------------------------------------");
						puts("Se eliminó correctamente.");
						estado = sortEmployees(list, len, order);
					} else {
						puts("Error.");
					}
				}
				break;
			case 4:
				estado = printEmployees(list, len);
				break;
			case 5:
				retornoFuncion = CargarProducto(listaProductos, TAM);
				if (retornoFuncion != -1) {
					puts("El producto se cargo exitosamente\n");
				} else {
					puts("El producto no pudo cargarse\n");
				}
				break;
			case 6:
				MostrarListadoProductos(listaProductos, TAM);
				break;
			case 7:
				retornoFuncion = BorrarProductoGuardado(listaProductos, TAM);
				if (retornoFuncion == 1) {
					printf("El producto se borro exitosamente.\n");
				} else {
					printf("no se pudo borrar el producto.\n");
				}
				break;
			case 8:
				retornoFuncion = ModificarProductoGuardado(listaProductos, TAM);
				if (retornoFuncion == 1) {
					printf("El producto se modifico Correctamente.\n");
				} else {
					printf("No se pudo modificar el producto con exito.\n");
				}
				break;
			case 9:
				OrdenarProductoPorPrecio(listaProductos, TAM);
				printf("Se ordeno Correctamente\n");
				break;
			case 10:
				OrdenarListaProductosPorDescripcion(listaProductos, TAM);
				printf("Se ordeno Correctamente\n");
				break;
			case 11:
				retornoFuncion = ListadoProductosIphone(listaProductos, TAM);
				if (retornoFuncion == TAMAL) {
					printf("No se encontraron Iphone de EEUU\n");
				}
				break;

			default:
				puts("Opción incorrecta.");	//si acá doy una opcion incorrecta, el id no funciona
				ListadoProductosConTipo(listaProductos, listaTipoProductos, TAM,
				LENTIPO);
				break;
			}

			puts("-----------------------------------------------------------------");
			estado = Get_A_Number_Int("¿Desea continuar?\n1. Si\n2. No\n", &retorno);
			puts("-----------------------------------------------------------------");

		} while (retorno == 1);
	}

	//eProducto listaProductos[TAM];
	//InicializarListaProducto(listaProductos,TAM);

	 InformarProductoPorPrecio (listaProductos, TAM, 700);

	 if (MostrarPrecioPromedioPorTipoDeProducto(listaProductos, TAM, 1, &precioPromedioPorIphone) == 0)
	 {
	 printf ("el promedio de precios para Iphone es igual a %.2f", precioPromedioPorIphone);
	 }
	 if (MostrarPrecioPromedioPorTipoDeProducto (listaProductos, TAM, 2, &precioPromedioPorMac) == 0)
	 {
	 printf ("el promedio de precios para Mac es igual a %.2f",precioPromedioPorMac);
	 }
	 if (MostrarPrecioPromedioPorTipoDeProducto(listaProductos, TAM, 3, &precioPromedioPorIpad) == 0)
	 {
	 printf ("el promedio de precios para Ipad es igual a %.2f",precioPromedioPorIpad);
	 }
	 if (MostrarPrecioPromedioPorTipoDeProducto (listaProductos, TAM, 4, &precioPromedioPorAccesorios) == 0)
	 {
	 printf ("el promedio de precios para Accesorios es igual a %.2f", precioPromedioPorAccesorios);
	 }
	 */
//CargarProductos(listaProductos, TAM);
	/*
	 InformarProductoMasCaro(listaProductos, TAM);
	 MostrarListadoProductos(listaProductos, TAM);
	 printf("Lista Ordenada\n");
	 OrdenarListaProductosPorId(listaProductos, TAM);
	 MostrarListadoProductos(listaProductos, TAM);

	 */

