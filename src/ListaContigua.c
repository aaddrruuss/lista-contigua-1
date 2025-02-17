#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ListaContigua.h"

ListaContigua constructor(ListaContigua *lista){
    lista->n = 0;
    lista->array = (int)calloc(lista->n, sizeof(int));
    lista->capacidad = 0;
}

void destructor(ListaContigua lista){
    free(lista.array);
}

int isLlena(ListaContigua lista){
    int elementos = sizeof(lista.array) / sizeof(lista.array[0]);
    if(elementos == lista.n){
        return 1;
    }
    return 0;
}

int elementoPosicion(ListaContigua lista, int posicion){
    assert(lista.array != NULL);
    return lista.array[posicion];
}

void modificarElemento(ListaContigua lista, int posicion, int nuevoValor){

}

void ampliarCapacidad(ListaContigua lista, int nuevaCapacidad);

void insertarElemento(ListaContigua lista, int elemento);

void eliminarUltimoElemento(ListaContigua lista);