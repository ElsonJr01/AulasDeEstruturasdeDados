#include <stdio.h>
#include "ListaLinear.h"

int main(void) {
    //Criando lista
    Lista *li = criarLista();
    inserirElemento(li, 10);
    printf("Elementos na lista:\n");
    imprimir(li);
    liberarLista(li);

    return 0;
}
