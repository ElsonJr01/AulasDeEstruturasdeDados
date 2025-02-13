#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

No* cria_lista() {
    return NULL;
}

No* insere(No* lista, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->info = valor;
    novo->prox = NULL;
    if (!lista || lista->info >= valor) {
        novo->prox = lista;
        return novo;
    }
    No* atual = lista;
    while (atual->prox && atual->prox->info < valor) {
        atual = atual->prox;
    }
    novo->prox = atual->prox;
    atual->prox = novo;
    return lista;
}

No* remove_k_esimo(No* lista, int k) {
	int i;
    if (!lista || k < 0) return lista;
    if (k == 0) {
        No* temp = lista;
        lista = lista->prox;
        free(temp);
        return lista;
    }
    No* atual = lista;
    for (i = 0; atual->prox && i < k - 1; i++) {
        atual = atual->prox;
    }
    if (atual->prox) {
        No* temp = atual->prox;
        atual->prox = temp->prox;
        free(temp);
    }
    return lista;
}

No* remove_valor(No* lista, int v) {
    if (!lista) return NULL;
    if (lista->info == v) {
        No* temp = lista;
        lista = lista->prox;
        free(temp);
        return lista;
    }
    No* atual = lista;
    while (atual->prox && atual->prox->info != v) {
        atual = atual->prox;
    }
    if (atual->prox) {
        No* temp = atual->prox;
        atual->prox = temp->prox;
        free(temp);
    }
    return lista;
}

No* concatena_listas(No* lista1, No* lista2) {
    if (!lista1) return lista2;
    No* atual = lista1;
    while (atual->prox) {
        atual = atual->prox;
    }
    atual->prox = lista2;
    return lista1;
}

No* inverte_lista(No* lista) {
    No* prev = NULL;
    No* atual = lista;
    No* prox = NULL;
    while (atual) {
        prox = atual->prox;
        atual->prox = prev;
        prev = atual;
        atual = prox;
    }
    return prev;
}

//NoStr* copia_lista_str(NoStr* lista) {
//    if (!lista) return NULL;
//    NoStr* nova_lista = (NoStr*)malloc(sizeof(NoStr));
//    strcpy(nova_lista->info, lista->info);
//    nova_lista->prox = copia_lista_str(lista->prox);
//    return nova_lista;
//}

int comprimento_lista(No* lista) {
    int count = 0;
    while (lista) {
        count++;
        lista = lista->prox;
    }
    return count;
}

int conta_maiores(No* lista, int x) {
    int count = 0;
    while (lista) {
        if (lista->info > x) count++;
        lista = lista->prox;
    }
    return count;
}

int ultimo_valor(No* lista) {
    if (!lista) return -1;
    while (lista->prox) {
        lista = lista->prox;
    }
    return lista->info;
}

int listas_iguais(No* lista1, No* lista2) {
    while (lista1 && lista2) {
        if (lista1->info != lista2->info) return 0;
        lista1 = lista1->prox;
        lista2 = lista2->prox;
    }
    return lista1 == lista2;
}

void imprime_lista(No* lista) {
    while (lista) {
        printf("%d -> ", lista->info);
        lista = lista->prox;
    }
    printf("NULL\n");
}
