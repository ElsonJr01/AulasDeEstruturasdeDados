#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

int main() {
   
    Lista* l = lista_cria();
    lista_insere(l, 1);
    lista_insere(l, 2);
    printf("Retirado da lista: %.2f\n", lista_retira(l));
    lista_libera(l);

    return 0;
}

