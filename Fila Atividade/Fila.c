#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fila.h"

struct listano{
	float info;
	ListaNo* prox;
};
struct fila{
	ListaNo* ini;
	ListaNo* fim;
};

Fila *fila_cria(){
	Fila *f = (Fila*)malloc(sizeof(Fila));
	f->ini = f->fim = NULL;
    return f;
}
int fila_vazia(Fila *f){
	return (f->ini == NULL);
}
void fila_insere(Fila *f, float v){
	ListaNo *n = (ListaNo*) malloc(sizeof(ListaNo));
	n->info = v;
	n->prox = NULL;
	
	if(f->fim != NULL){
		f->fim->prox = n;
	}
	else {
		f->ini = n;
	}
		f->fim = n;
}
float fila_retira(Fila *f){
	ListaNo *t = f->ini;
	float v = t->info;
	f->ini = t->prox;
	if(f->ini == NULL){
		f->fim = NULL;
	}
	free(t);
	return v;
}
void fila_libera(Fila *f){
	ListaNo *q = f->ini;
	while(q != NULL){
		ListaNo *t = q->prox;
		free(q);
		q =t;
	}
	free(f);
}


















