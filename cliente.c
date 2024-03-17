#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"




struct Cliente{

    char nombreYApellido[15];
    int nroCliente;
    int edad;
    float gasto;


};


ClientePtr crearCliente(char n[15], int c, int e, float g){

    ClientePtr cli = (ClientePtr) malloc(sizeof(struct Cliente));

    strcpy(cli->nombreYApellido, n);

    cli->nroCliente = c;

    cli->edad = e;

    cli->gasto = g;


    return cli;


}

void liberarCliente(ClientePtr c){


    free(c);

}

void mostrarCliente(ClientePtr c){

    printf("\t------CLIENTE-------\n");
    printf("\tNOMBRE: %s\n", c->nombreYApellido);
    printf("\tNRO: %d\n", c->nroCliente);
    printf("\tEDAD: %d\n", c->edad);
    printf("\tGASTO: %.2f\n", c->gasto);



}


//hacer los getters y setters
char * getNombre(ClientePtr c){
return c->nombreYApellido;
}
