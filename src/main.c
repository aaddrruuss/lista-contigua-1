#include <stdio.h>
#include <stdlib.h>
#include "imprimirLista.h"
#include "ListaContigua.h"

int main(){
    ListaContigua lista;
    constructor(&lista);
    imprimirLista(lista);

    return 0;
}