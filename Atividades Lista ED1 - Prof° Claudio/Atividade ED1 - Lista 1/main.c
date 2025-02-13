#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    No* lista = cria_lista();
    lista = insere(lista, 5);
    lista = insere(lista, 3);
    lista = insere(lista, 8);
    lista = insere(lista, 1);
    
    printf("Lista: ");
    imprime_lista(lista);
    printf("Comprimento: %d\n", comprimento_lista(lista));
    printf("Números maiores que 4: %d\n", conta_maiores(lista, 4));
    printf("Último valor: %d\n", ultimo_valor(lista));
    
    return 0;
}

