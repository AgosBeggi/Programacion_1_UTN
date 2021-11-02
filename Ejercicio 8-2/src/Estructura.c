/*
 * Estructura.c
 *
 *  Created on: 30 sep. 2021
 *      Author: Beggi - Agostina
 */

#include "Estructura.h"

#define SIZE_ARRAY 100
#define EMPTY 0
#define FULL 1
#define SIZE_STRING 51
#define TAMAL 0
#define TABIEN 1
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define EMPTY 0
#define FULL 1
#define SIZE_STRING 51
#define SIZE_ITEMS 51
#define STATUS "Empty"

//INICIALIZAR ARRAY
void InicializarEstructura(eProducto variable){

	variable.isEmpty = EMPTY;
	strcpy(variable.descripcion, "0");
	variable.idProducto = EMPTY;
	variable.nacionalidad = EMPTY;
	variable.precio = EMPTY;
	variable.tipo = EMPTY;
}

void InicializarListaArray(eProducto lista[], int size){

	int i;

	for(i = 0; i < size; i++){
		lista[i].isEmpty = EMPTY;
	}
}

int initEmployees(Employee* list, int len){

	int retorno;
	int i;
	retorno = -1;

	if(len > EMPTY && list != NULL){
		for(i = 0; i < len; i++){
			list[i].id = EMPTY;
			list[i].salary = EMPTY;
			list[i].sector = EMPTY;
			strcpy(list[i].name, STATUS);
			strcpy(list[i].lastName, STATUS);
			list[i].isEmpty = EMPTY;
			retorno = 0;
		}
	}
	return retorno;
}

void InicializarListaProducto (eProducto lista[], int tam){

  for (int i = 0; i < tam; i++){
      lista[i].isEmpty = EMPTY;
    }
}

//CARGAR DATOS DE UN PRODUCTO
eProducto CargarDatosDeUnElemento(){

	int estadoID;
	int estadoDescripcion;
	int estadoNacionalidad;
	int estadoPrecio;
	int estadoTipo;
	eProducto unElemento;

	estadoID = IngresoEntero("Ingrese el ID del producto:\n", &unElemento.idProducto);
	estadoDescripcion = IngresarCadena(unElemento.descripcion, SIZE_ARRAY, "Ingrese la descripcion del producto:\n");
	estadoNacionalidad = IngresoEntero("Ingrese la nacionalidad del producto:\n", &unElemento.nacionalidad);
	estadoTipo = IngresoEntero("Ingrese el tipo del producto:\n", &unElemento.tipo);
	estadoPrecio = IngresoFlotante("Ingrese el precio del producto:\n", &unElemento.precio);

	if(estadoID == 1 && estadoDescripcion == 1 && estadoNacionalidad == 1 && estadoPrecio == 1 && estadoTipo == 1){
		unElemento.isEmpty = FULL;
	}
	return unElemento;
}

eProducto IngresarUnProducto (){

  eProducto producto;
  producto.idProducto = IngresarEntero ("Ingresa el id del producto");
  getString (producto.descripcion, "Ingresar la descripcion del producto", 100);
  producto.nacionalidad = IngresarEntero("Ingresa la nacionalidad del producto, 1.EEUU, 2.China, 3.Otro: ");
  producto.tipo = IngresarEntero("Ingresa el tipo del producto, 1.Iphone, 2.Mac, 3.Ipad, 4.Accesorios: ");
  producto.precio = IngresarFlotante ("Ingresa el precio del producto");
  producto.isEmpty = FULL;

  return producto;
}

//CARGAR UN ELEMENTO AL ARRAY DE ELEMENTOS
void CargarUnElementoAListaArray(eProducto lista[], int size, eProducto unElemento){

	int i;

	for(i = 0; i < size; i++){
		lista[i] = unElemento;
		lista[i].isEmpty = FULL;
		break;
	}
}

int CargarProducto (eProducto lista[], int tam)
{
  int index = BuscarPrimerEspacioLibre (lista, tam);
  if (index != -1)
    {
      lista[index] = IngresarUnProducto ();
    }
  return index;
}

int addEmployee(Employee* list, int len, char name[], char lastName[], float salary, int sector, int id){

	int retorno;
	int i;
	int index;
	Employee employee;

	retorno = -1;

	if(len > EMPTY && list != NULL){
		for(i = 0; i < len; i++){
			if(list[i].isEmpty == EMPTY){
				index = i;
				break;
			}
		}
		if (index != -1){
			employee.id = id;
			strncpy(employee.lastName, lastName, SIZE_STRING);
			strncpy(employee.name, name, SIZE_STRING);
			employee.salary = salary;
			employee.sector = sector;
			employee.isEmpty = FULL;
			list[index] = employee;
			retorno = 0;
		}
	}
	return retorno;
}

//BUSCAR PRIMER ESPACIO LIBRE DE LA LISTA
int BuscarPrimerEspacioLibre (eProducto lista[], int tam)
{
  int i;
  int index;

  index = -1;
  for (i = 0; i < tam; i++)
    {
      if (lista[i].isEmpty == EMPTY)
	{
	  index = i;
	  break;
	}
    }
  return index;
}

//BUSCAR ID EN ARRAY
int BuscarPorID(eProducto lista[], int size){

	int id;
	int i;
	int retorno;

	retorno = 0;

	MostrarListadoArrayEstructura(lista, size);
	printf("Ingrese el ID del producto que desea dar de baja:\n");
	scanf("%d", &id);

	for(i = 0; i < size; i++){
		if(lista[i].idProducto == id){
			retorno = 1;
			break;
		}
	}
	return retorno;
}

int findEmployeeById(Employee* list, int len,int id){

	int index;
	int i;

	index = -1;

	for(i = 0; i < len; i++){
		if(list[i].id == id){
			index = i;
			break;
		}
	}
	return index;
}

//BUSCAR
float BuscarPrecioMasAlto (eProducto lista[], int tam){

  int flagMax = 0;
  float auxiliarPrecioMax;
  for (int i = 0; i < tam; i++){
      if (lista[i].isEmpty == FULL){
    	  if (flagMax == 0 || lista[i].precio > auxiliarPrecioMax){
    		  auxiliarPrecioMax = lista[i].precio;
    		  flagMax = 1;
    	  }
      }
  }
  return auxiliarPrecioMax;
}

// REMOVER UN EMPLEADO.
int removeEmployee(Employee* list, int len, int index){

	int retorno;
	int i;

	retorno = -1;

	if(len > EMPTY && list != NULL){
		for(i = 0; i <= index; i++){
			if(list[i].isEmpty == FULL){
				list[i].isEmpty = EMPTY;
				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}

// ORDENAR LISTA.
int sortEmployees(Employee* list, int len, int order){

	int i;
	int j;
	Employee aux;
	int retorno;

	retorno = -1;

	if(len > EMPTY && list != NULL){
		for(i = 0; i <len; i++){
			for(j = i+1; j <len; j++){
				if(order == 1){
					if(list[i].id < list[j].id){
						list[i].isEmpty = EMPTY;
						aux = list[i];
						list[i] = list[j];
						list[j] = aux;
						retorno = 0;
						break;
					}
				}
				if(order == 2){
					if(list[i].id > list[j].id){
						list[i].isEmpty = EMPTY;
						aux = list[i];
						list[i] = list[j];
						list[j] = aux;
						retorno = 0;
						break;
					}
				}
			}
		}
	}

	return retorno;
}

void OrdenarListaProductosPorId (eProducto lista[], int tam){
  eProducto auxiliarProducto;

  for (int i = 0; i < tam - 1; i++){
      for (int j = i + 1; j < tam; j++){
		  if (lista[i].idProducto < lista[j].idProducto){
			  auxiliarProducto = lista[i];
			  lista[i] = lista[j];
			  lista[j] = auxiliarProducto;
			}
      }
  }
}

void OrdenarProductoPorPrecio (eProducto lista[], int tam){
  eProducto auxiliarProducto;

  for (int i = 0; i < tam - 1; i++){
	 for (int j = i + 1; j < tam; j++){
		  if (lista[i].precio > lista[j].precio){
			  auxiliarProducto = lista[i];
			  lista[i] = lista[j];
			  lista[j] = auxiliarProducto;
			}
	}
  }
}

void OrdenarListaProductosPorDescripcion (eProducto lista[], int tam){
  eProducto auxiliarProducto;

  for (int i = 0; i < tam - 1; i++){
      for (int j = i + 1; j < tam; j++){
		  if (strcmp (lista[i].descripcion, lista[j].descripcion) > 0){
			  auxiliarProducto = lista[i];
			  lista[i] = lista[j];
			  lista[j] = auxiliarProducto;
			}
      }
   }
}

// IMPRIMIR UN ELEMENTO
void printEmployee(Employee employee){

	char items[SIZE_ITEMS];

	snprintf(items, SIZE_ITEMS, "%d\t%s\t\t%s\t\t%d\t$%.2f\n", employee.id, employee.name, employee.lastName, employee.sector, employee.salary);
	printf("%s", items);
}

void MostrarProducto (eProducto unProducto){

  printf ("%4d %20s %4d %4d %4.2f\n", unProducto.idProducto, unProducto.descripcion, unProducto.nacionalidad, unProducto.tipo, unProducto.precio);
}

void MostrarVariableEstructura(eProducto variable){
	printf("%d", variable.idProducto);
	printf("\t%s", variable.descripcion);
	printf("\t\t%d", variable.nacionalidad);
	printf("\t\t%d", variable.tipo);
	printf("\t%.2f\n", variable.precio);
}

// IMPRIMIR LISTA.
int MostrarListadoArrayEstructura(eProducto lista[], int size){

	int retorno = 1;
	int i;

	printf("ID");
	printf("\tDESCRIPCION");
	printf("\t\tNACIONALIDAD");
	printf("\tTIPO");
	printf("\tPRECIO\n");

	for(i = 0; i < size; i++){
		if(lista[i].isEmpty == EMPTY){
			retorno = 0;
			break;
		}
	MostrarVariableEstructura(lista[i]);
	}
	return retorno;
}

int printEmployees(Employee* list, int len){

	int retorno;
	int i;
	char items[SIZE_ITEMS];

	snprintf(items, SIZE_ITEMS, "ID\tNOMBRE\t\tAPELLIDO\t\tSECTOR\tSALARIO\n");
	printf("%s", items);

	retorno = -1;

	for(i = 0; i < len; i++){
		if(list[i].isEmpty == FULL){
			printEmployee(list[i]);
			retorno = 0;
		}
	}
	return retorno;
}

int MostrarPrecioPromedioPorTipoDeProducto (eProducto lista[], int tam, int tipo,float *pPromedio){
  int i;
  int contador;
  float acumuladorPrecio;
  float promedio;//no se está usando
  int retorno;

  retorno = -1;
  contador = 0;
  acumuladorPrecio = 0;

  for (i = 0; i < tam; i++){
      if (lista[i].isEmpty == FULL && lista[i].tipo == tipo){
	  contador++;
	  acumuladorPrecio += lista[i].precio;
      }
  }
  if (contador != 0){
      *pPromedio = acumuladorPrecio / contador;
      retorno = 0;
  }
  return retorno;
}

void InformarProductoPorPrecio (eProducto lista[], int tam, float precioBuscado){

  for (int i = 0; i < tam; i++){
      if (lista[i].isEmpty == FULL && precioBuscado == lista[i].precio){
		  MostrarProducto (lista[i]);
      }
   }
}

void MostrarListadoProductos (eProducto lista[], int tam){
  int flagListaVacia = 0;

  printf ("Id\tDescripcion\tNacionalidad\tTipo\tPrecio\n");
  for (int i = 0; i < tam; i++){
      if (lista[i].isEmpty == FULL){
    	  MostrarProducto (lista[i]);
      }
      else{
    	  if (flagListaVacia == 0){
    		  puts ("Listado de productos vacia.\n");
    		  flagListaVacia = 1;
    	  }
      }
  }
}

int BorrarProductoGuardado (eProducto lista[], int tam){
  int i;
  int auxiliarProductoGuardado = 0;
  int productoSeleccionado;
  MostrarListadoProductos (lista, tam);

  productoSeleccionado = IngresarEntero ("Ingrese el producto a borrar");

  for (i = 0; i < tam; i++){
      if (lista[i].isEmpty == FULL
	  && lista[i].idProducto == productoSeleccionado){
    	  lista[i].isEmpty = EMPTY;
    	  auxiliarProductoGuardado = 1;
    	  break;
      }
    }
  return auxiliarProductoGuardado;
}

int ModificarProductoGuardado (eProducto lista[], int tam){
  int i;
  int productoSeleccionado;
  float precioAcambiar;
  int retorno;
  retorno = 0;

  productoSeleccionado = IngresarEntero ("Ingrese el producto por ID a modificar");

  for (i = 0; i < tam; i++){
      if (lista[i].isEmpty == FULL && lista[i].idProducto == productoSeleccionado){
    	  precioAcambiar = IngresarFlotante ("Ingrese nuevo precio.");
    	  lista[i].precio = precioAcambiar;
    	  retorno = 1;
    	  break;
      }
  }
  return retorno;
}

int ListadoProductosIphone (eProducto lista[], int tam){
  int retorno = TAMAL;
  int flagListaVacia = 0;

  printf ("Id\tDescripcion\tNacionalidad\tTipo\tPrecio\n");

  for (int i = 0; i < tam; i++){
      if (lista[i].isEmpty == FULL && lista[i].tipo == IPHONE && lista[i].nacionalidad == EEUU){
    	  MostrarProducto (lista[i]);
    	  retorno = TABIEN;
      }
  }
  return retorno;
}

void ListadoProductosConTipo (eProducto productos[], eTipoProducto tipos[], int tamProductos, int tamTipo){
    int i;
    int j;

    for(i = 0; i < tamProductos; i++){
        for(j = 0; j < tamTipo; j++){
            if(productos[i].isEmpty == FULL && productos[i].tipo == tipos[j].idTipo){
                printf("%20s %10s\n",productos[i].descripcion,tipos[j].descripcionTipo);
                break;
            }
        }
    }
}

int Get_Name(Employee* list, int len,int id){

	int retorno;
	int estado;
	int i;
	Employee employee;

	retorno = 0;

	estado = Get_String(employee.name, SIZE_STRING, "NOMBRE: ");
	if(estado == 1){
		for(i = 0; i < len; i++){
			if(list[i].id == id){
				strncpy(list[i].name, employee.name, SIZE_STRING);
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}

int Get_Lastname(Employee* list, int len,int id){

	int retorno;
	int estado;
	int i;
	Employee employee;

	retorno = 0;

	estado = Get_String(employee.lastName, SIZE_STRING, "APELLIDO: ");
	if(estado == 1){
		for(i = 0; i < len; i++){
			if(list[i].id == id){
				strncpy(list[i].lastName, employee.lastName, SIZE_STRING);
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}

int Get_Salary(Employee* list, int len,int id){

	int retorno;
	int estado;
	float salario;
	int i;
	Employee employee;

	retorno = 0;

	estado = Get_A_Number_Float("SALARIO: ", &salario);
	if(estado == 1){
		employee.salary = salario;
		for(i = 0; i < len; i++){
			if(list[i].id == id){
				list[i].salary = employee.salary;
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}

int Get_Sector(Employee* list, int len,int id){

	int retorno;
	int estado;
	float sector;
	int i;
	Employee employee;

	retorno = 0;

	estado = Get_A_Number_Float("SECTOR: ", &sector);
	if(estado == 1){
		employee.sector = sector;
		for(i = 0; i < len; i++){
			if(list[i].id == id){
				list[i].sector = employee.sector;
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}

