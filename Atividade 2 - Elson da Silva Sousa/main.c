#include <stdio.h>
#include <string.h>
#include "AtvLivros.h"

int main() {
    Fila fila;
    inicializarFila(&fila);

    int opcao;
    char nome[NOME];

    do {
        printf("\n--------- Sistema de Fila de Livros----------\n");
        printf("1. Inserir aluno na fila\n");
        printf("2. Remover aluno da fila\n");
        printf("3. Exibir fila atual\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Digite o nome do aluno: ");
            fgets(nome, NOME, stdin);
            nome[strcspn(nome, "\n")] = '\0'; // remove o enter e poe o \0 da função fgets
            inserirFila(&fila, nome);
            break;
            case 2:
                removerFila(&fila);
            break;
            case 3:
                exibirFila(&fila);
            break;
            case 4:
                printf("Encerrando o programa.\n");
            break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
