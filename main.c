#include "HashEncadenamineto.h"

void inicio(void){
	int bandera=0, edad;
	TABLADISPERSION T;
	CrearTabla(&T);
	ALUMNO a;
	char nombre[30], boleta[10];
	while(bandera!=5){
		printf("Cual es la acción que quiere realizar?\n");
		printf("1. Dar de alta un registro\n");
		printf("2. Buscar un registro\n");
		printf("3. Eliminar un registro\n");
		printf("4. Mostrar todos los registros\n");
		printf("5. Salir\n");
		scanf("%d", &bandera);
		switch(bandera){
			case 1: printf("Ingrese el nombre del alumno\n");
					scanf("%s", a.nm);
					printf("Ingrese la boleta del alumno\n");
					scanf("%s", a.bol);
					printf("Ingrese la edad del alumno\n");
					scanf("%d", &edad);
					a.edad=edad;
					insertarReg(&T, a);
			break;
			case 2: printf("Ingrese el numero de boleta\n");
					scanf("%s", boleta);
					buscar(&T, boleta);
			break;
			case 3: printf("Ingrese el numero de boleta\n");
					scanf("%s", boleta);
					eliminarReg(&T, boleta);
			break;
			case 4: mostrarTodo(&T);
			break;
			case 5: 
			break;
			default: printf("Opcion incorrecta\n");
			break;
		}
	}
}

int main(void){
	inicio();
	return 0;
}
