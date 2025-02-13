#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    int info;
    struct No *prox;
} No;

typedef struct NoStr {
    char info[100];
    struct NoStr *prox;
} NoStr;

// Funções
No* cria_lista();
No* insere(No* lista, int valor);
No* remove_k_esimo(No* lista, int k);
No* remove_valor(No* lista, int v);
No* concatena_listas(No* lista1, No* lista2);
No* inverte_lista(No* lista);
No* copia_lista_str(NoStr* lista);
int comprimento_lista(No* lista);
int conta_maiores(No* lista, int x);
int ultimo_valor(No* lista);
int listas_iguais(No* lista1, No* lista2);
void remove_ocorrencias(No** lista, int x);
void imprime_lista(No* lista);


