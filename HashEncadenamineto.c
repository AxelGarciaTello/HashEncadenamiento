#include "HashEncadenamineto.h"

void CrearTabla(TABLADISPERSION *T){
	int i;
	NODO *Lista=NULL;
	for (i=0; i<TAM; i++){
		T->Tabla[i]=Lista;
	}
	T->elementos=0;
}

long funcioHash(char *clave){
	long p=0;
	int i;
	for (i=0; i<strlen(clave); i++){
		p=p*31+clave[i];
	}
	p=abs(p);
	return p;
}

int direccion(TABLADISPERSION *T, char *clave){
	long p=funcioHash(clave);
	int i=1;
	p=p%TAM;
	return (int) p;
}

void insertarReg(TABLADISPERSION *T, ALUMNO A){
	int dir=direccion(T,A.bol);
	insertarCabLSE(&(T->Tabla[dir]),A);
	T->elementos++;
}

void eliminarReg(TABLADISPERSION *T, char *clave){
	int dir=direccion(T,clave);
	NODO *lista=T->Tabla[dir];
	NODO *anterior=NULL;
	int bandera=0;
	while((lista->dato.bol)==(clave) && lista!=NULL){
		anterior=lista;
		lista=lista->siguiente;
	}
	if(lista!=NULL){
		if(lista!=T->Tabla[dir]){
			anterior->siguiente=lista->siguiente;
		}
		else{
			T->Tabla[dir]=lista->siguiente;
		}
	}
}

void mostrarAlumno(ALUMNO a){
	printf("Nombre: %s\nBoleta: %s\nEdad: %d\n\n", a.nm, a.bol, a.edad);
}
	
void buscar(TABLADISPERSION *T, char *clave){
	int dir=direccion(T,clave);
	NODO *lista=T->Tabla[dir];
	while((lista->dato.bol)==(clave) && lista!=NULL){
		lista=lista->siguiente;
	}
	if(lista!=NULL){
		mostrarAlumno(lista->dato);
	}
}

void mostrarTodo(TABLADISPERSION *T){
	int i;
	NODO *lista=NULL;
	for(i=0; i<TAM; i++){
		lista=T->Tabla[i];
		while(lista!=NULL){
			mostrarAlumno(lista->dato);
			lista=lista->siguiente;
		}
	}
}
