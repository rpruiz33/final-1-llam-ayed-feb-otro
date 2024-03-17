#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "negocio.h"
#include "cliente.h"
#include "lista.h"

///Ejercicio: crear un programa para administrar los clientes de un negocio
///El examen se debe entregar antes de las 19:30 comprimido en .rar a los siguientes mails
//nico_perez_velez@hotmail.com
//nperez_dcao_smn@outlook.com

//1) Anidar correctamente el negocio con los clientes (utilizando listas void, las que se adjuntan)

//2) Insertar los 5 clientes dados en el negocio (en el orden que los di)

//3) Mostrar el negocio, al mostrar el negocio se deben ver los clientes del mismo

//4) Ordenar los clientes por edad (en cualquier sentido). Mostrar el negocio y sus clientes.

//5) Eliminar al cliente Solange L. Mostrar el negocio y sus clientes.


///------------------- hasta acá requisito de aprobación -----------------

//6) Duplicar la lista y mostrarla. (Solo los clientes, no el negocio)



int main(int argc, char *argv[]){


    NegocioPtr neg = crearNegocio("Paul Mac Carne", "Eva Peron 1520");

    ClientePtr c1 = crearCliente("Nico P.", 12121, 30, 3500.90);
    ClientePtr c2 = crearCliente("Solange L.", 99952, 18, 11500.50);
    ClientePtr c3 = crearCliente("Jorge G.", 231, 51, 500);
    ClientePtr c4 = crearCliente("Leandro R.", 25000, 44, 3000000);
    ClientePtr c5 = crearCliente("Alejandra V.", 2560, 52, 1000);

    mostrarCliente(c2);


    insertarFinal(getLista(neg),c1);
    insertarFinal(getLista(neg),c2);
     insertarFinal(getLista(neg),c3);
     insertarFinal(getLista(neg),c4);
     insertarFinal(getLista(neg),c5);

    mostrarNegocio(neg);
    ordenarClientes(getLista(neg));
    printf("\n ordenado por nombre\n");
     mostrarNegocio(neg);
     remover(getLista(neg), 1,c2);
       mostrarNegocio(neg);
       Lista l2=duplicarLista(getLista(neg));
       printf ("\nlista duplicada---------\n");
       mostrarLista(l2);
    return 0;
}
