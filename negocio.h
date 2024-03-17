#ifndef NEGOCIO_H_INCLUDED
#define NEGOCIO_H_INCLUDED
#include "lista.h"


struct Negocio;

typedef struct Negocio * NegocioPtr;


NegocioPtr crearNegocio(char nom[15], char dir[15]);

void liberarNegocio(NegocioPtr n);


void mostrarLista(Lista l);
//hacer los getters y setters


Lista getLista(NegocioPtr n);
#endif // NEGOCIO_H_INCLUDED
