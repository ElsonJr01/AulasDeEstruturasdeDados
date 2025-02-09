#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista {
    float dados[100];
    int ini, fim;
};

Lista* lista_cria(void) {
    Lista* l = (Lista*)malloc(sizeof(Lista));
    l->ini = l->fim = 0;
    return l;
}

void lista_insere(Lista* l, float v) {
    l->dados[l->fim++] = v;
}

float lista_retira(Lista* l) {
    return l->dados[l->ini++];
}

int lista_vazia(Lista* l) {
    return l->ini == l->fim;
}

void lista_libera(Lista* l) {
    free(l);
}

