//pilha.c
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct listano{
	float info;
	ListaNo *prox;
};

struct pilha {
	ListaNo * topo;
};

Pilha *pilha_cria(void){
	Pilha *p = (Pilha *) malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

void pilha_push(Pilha *p, float v){
	ListaNo * novo = (ListaNo*) malloc(sizeof(ListaNo));
	novo->info = v;
	novo->prox = p->topo;
	p->topo = novo;
}

float pilha_pop(Pilha *p){
	ListaNo *t = p->topo;
	float v = t->info;
	p->topo = t->prox;
	free(t);
	return v;
}
