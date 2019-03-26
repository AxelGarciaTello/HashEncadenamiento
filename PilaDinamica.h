/*
 * Instituto Politécnico Nacional
 * Escuela Superior de Cómputo
 * Estructura de datos
 * Grupo: 1CV8
 * Alumno: García Tello Axel
 * Profesor: Benjamín Luna Benoso
 * @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 * Cabeceras para las funciones de listas
 * 
 * Fecha: 17 de marzo de 2019
*/

//Liberias usadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alumno{
	char nm[30];
	char bol[10];
	int edad;
} ALUMNO;

//Definimos el tipo de dato de nuestra lista
typedef ALUMNO TipoDato;

//Estructura de nuestra lista
typedef struct nodo{
	TipoDato dato;
	struct nodo *siguiente;
} NODO;

//Cabeceras de las funciones
NODO *CrearNodo(NODO *, TipoDato);
void insertarCabLSE(NODO **, TipoDato);
void eliminarLSE(NODO **, TipoDato);
void imprimirLSE(NODO *);
