//
// Created by mateusandrade on 17/12/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include "ListaLinear.h"

struct lista {
    int qtdElementosDaLista;
    int dados[MAX];
};

Lista* criarLista() {
    Lista* li = (Lista*) malloc(sizeof(struct lista));
    if (li != NULL) {
        li-> qtdElementosDaLista = 0;
    }
    return li;
}
int inserirElemento(Lista* li, int dado) {
    if (li->qtdElementosDaLista >= MAX) {
        printf("Lista cheia");
        return 0;
    }
    li->dados[li->qtdElementosDaLista] = dado;
    li->qtdElementosDaLista++;
    return 1;
}
void imprimir(Lista* li) {
    if (li == NULL || li -> qtdElementosDaLista == 0) {
        printf("Lista vazia");
        return;
    }
    for (int i = 0; i < li -> qtdElementosDaLista; i++) {
        printf("%d ", li->dados[i]);
    }
}
void liberarLista(Lista* li) {
    free(li);
}