#include <stdio.h>
#include "ListaLinear.h"

int main(void)
{
    //criando lista
Lista *lista = criarLista();
    inserirElemento(lista, 10);
    printf("Elemento de lista:\n ");
    imprimirLista(lista);
    liberarLista(lista);

}
