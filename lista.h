#ifndef LINKEDlista_H
#define LINKEDlista_H
#include "cliente.h"

enum Booleanos {FALSE, TRUE};


typedef struct NodoE * Nodo;

typedef struct listaE *  Lista;


Nodo crearNodo(Lista lista, void *data);
Lista crearLista( int tamDelDatoEnBytes);

int estaVacia( Lista lista);
int obtenerTamanio( Lista lista);

void* obtenerDato( Lista lista, int pos);
void* obtenerPrimerDato( Lista lista);
void* obtenerUltimoDato( Lista lista);

int obtenerDatoEnParametro( Lista lista, int pos, void *backup);

int insertar(Lista lista, void *data, int pos);
int insertarInicio(Lista lista, void *data);
int insertarFinal(Lista lista, void *data);

int removerInicio(Lista lista, void *backup);
int removerFinal(Lista lista, void *backup);
int remover(Lista lista, int pos, void *backup);

ClientePtr getData(Nodo l);
void liberarlista(Lista lista);
Nodo getPrimero(Lista c);
ClientePtr getData(Nodo l);
Nodo getProximo(Nodo n);
void setData(Nodo n, void *data);
int getTamanio(Lista l);
void setProximo(Nodo nodo, Nodo siguiente);
Lista duplicarLista(Lista l);
#endif
