#include <stdio.h>
#include <stdlib.h>
#include "imprimirLista.h"
#include "ListaContigua.h"

int main(){
    ListaContigua lista;
    constructor(&lista);
    imprimirLista(&lista);
    for(int i = 0 ; i < 12 ; i++){
        insertarElemento(&lista, i);
        imprimirLista(&lista);
    }
    imprimirElementoLista(&lista, 0);
    return 0;
}