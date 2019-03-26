#include "PilaDinamica.h"
#define TAM 1009

typedef NODO* TipoDatoHash;
typedef struct tabla{
	TipoDatoHash Tabla[TAM];
	int elementos;
} TABLADISPERSION;

void CrearTabla(TABLADISPERSION *);
long funcioHash(char *);
int direccion(TABLADISPERSION *, char *);
void insertarReg(TABLADISPERSION *, ALUMNO);
void eliminarReg(TABLADISPERSION *, char *);
void mostrarAlumno(ALUMNO);
void buscar(TABLADISPERSION *, char *);
void mostrarTodo(TABLADISPERSION *);
