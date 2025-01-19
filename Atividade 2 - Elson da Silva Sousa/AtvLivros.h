//
// Created by jhule on 18/01/2025.
//

#ifndef ATVLIVROS_H
#define ATVLIVROS_H


#define FILA 5
#define NOME 50


typedef struct { // Estrutura para a fila.
    char nomes[FILA][NOME];
    int inicio;
    int fim;
    int tamanho;
} Fila;

// Protótipos das funções ensinados no primeiro periodo.
void inicializarFila(Fila *fila);
int filaCheia(Fila *fila);
int filaVazia(Fila *fila);
void inserirFila(Fila *fila, const char *nome);
void removerFila(Fila *fila);
void exibirFila(Fila *fila);

#endif
