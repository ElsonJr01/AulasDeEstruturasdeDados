//
// Created by jhule on 18/01/2025.
//
#include <stdio.h>
#include <string.h>
#include "AtvLivros.h"

// Inicializo a fila com uma funcao que nao retorna na e com as variaveis comecando em zero
void inicializarFila(Fila *fila) {
    fila->inicio = 0;
    fila->fim = 0;
    fila->tamanho = 0;
}

// verifico se a fila esta cheia com uma funcao de retorno
int filaCheia(Fila *fila) {
    return fila->tamanho == FILA;
}

// Verifico se a fila está vazia com uma funcao de retorno
int filaVazia(Fila *fila) {
    return fila->tamanho == 0;
}

// Insere um aluno na fila, nessa função eu uso strcpy que copia um nome para outra variavel, além de usar CONST que garante que a variavel sera do tipo CHAR
void inserirFila(Fila *fila, const char *nome) {
    if (filaCheia(fila)) {
        printf("A fila ta cheia. Não eh possivel adicionar mais alunos.\n");

    }
    strcpy(fila->nomes[fila->fim], nome);
    fila->fim = (fila->fim + 1) % FILA;
    fila->tamanho++;
    printf("Aluno \"%s\" adicionado a fila.\n", nome);
}

// Remove o aluno do início da fila, decrementando no tamanho.
void removerFila(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila ta vazia. Não ha aluno para remover.\n");
    }
    printf("Aluno \"%s\" foi removido da fila.\n", fila->nomes[fila->inicio]);
    fila->inicio = (fila->inicio + 1) % FILA;
    fila->tamanho--;
}

// Exibe o estado atual da fila
void exibirFila(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila ta vazia.\n");
    }
    printf("Estado atual da fila:\n");
    int i = fila->inicio; // inicializei o i = fila->inicio para pode usar dentro do for, tambem criei a variavel J pra usar como contador.
    for (int j = 0; j < fila->tamanho; j++) {
        printf("Aluno %d: %s\n", j + 1, fila->nomes[i]);
        i = (i + 1) % FILA;
    }
}
