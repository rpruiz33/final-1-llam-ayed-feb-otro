#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED



struct Cliente;


typedef struct Cliente  * ClientePtr;

ClientePtr crearCliente(char n[15], int c, int e, float g);

void liberarCliente(ClientePtr c);

void mostrarCliente(ClientePtr c);
char * getNombre(ClientePtr c);

//hacer los getters y setters


#endif // CLIENTE_H_INCLUDED
