#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "negocio.h"
#include "lista.h"
#include "Cliente.h"
struct Negocio{

    char nombre[15];
    char direccion[15];
    Lista clientes;


};




NegocioPtr crearNegocio(char nom[15], char dir[15]){


    NegocioPtr n = (NegocioPtr) malloc(sizeof(struct Negocio));


    strcpy(n->nombre, nom);

    strcpy(n->direccion, dir);

    n->clientes=(Lista)crearLista(sizeof (n->clientes));
    return n;


}

void liberarNegocio(NegocioPtr n){

    free(n);


}

void mostrarNegocio(NegocioPtr n){

    printf("---------- NEGOCIO ------------\n");
    printf("NOMBRE: %s\n", n->nombre );
    printf("DIRECCION: %s\n\n", n->direccion );
    mostrarLista(n->clientes);

}
void mostrarLista(Lista l){
Nodo  n=getPrimero(l);
while(n!=NULL){

 mostrarCliente( (ClientePtr)(getData(n)));
   n=getProximo(n);
}

}

void ordenarClientes(Lista l){
    Nodo n=getPrimero(l);
    Nodo aux;
for (int i=0;i<5-1;i++){
    for(int j=0;j<5-i-1;j++){
        if(strcmp(getNombre((ClientePtr)getData(n)),getNombre((ClientePtr)getData(getProximo(n))))>0){
            aux=getData(n);
            setData((n),(getData(getProximo(n))));
            setData(getProximo(n),aux);

    }
    n=getProximo(n);
    }
    n=getPrimero(l);
}


}
//hacer los getters y setters

Lista getLista(NegocioPtr n){
return n->clientes;

}

