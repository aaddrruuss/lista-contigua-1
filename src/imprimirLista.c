#include <stdio.h>
#include "imprimirLista.h"

void imprimirLista(ListaContigua lista){
    printf("n = %d | Max = %d | ListaContigua: ", lista.n, lista.capacidad);
    for(int i=0;i<lista.n;i++){
        printf("%d", lista.array[i]);
    }
}