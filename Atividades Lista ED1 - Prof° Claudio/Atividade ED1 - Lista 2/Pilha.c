#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>

struct pilha {
    float dados[100];
    int topo;
};

Pilha* pilha_cria(void) {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = 0;
    return p;
}

void pilha_push(Pilha* p, float v) {
    p->dados[p->topo++] = v;
}

float pilha_pop(Pilha* p) {
    return p->dados[--p->topo];
}

int pilha_vazia(Pilha* p) {
    return p->topo == 0;
}

void pilha_libera(Pilha* p) {
    free(p);
}

float topo(Pilha* p) {
    float valor = pilha_pop(p);
    pilha_push(p, valor);
    return valor;
}

