#include <stdio.h>
#include <stdlib.h>
#include "FilaPrioridade.h"

struct paciente{
    char nome[50];
    int prio;
};

int main()
{
    FilaPrio *fp;
    fp = cria_FilaPrio();
    struct paciente itens[4] = {
        {"Jose", 5},
        {"Angela",  50},
        {"Adriana",  20},
        {"Maria", 10}};

    int i;
    for(i = 0; i < 4; i++){
        printf("%d  %d %s\n", i, itens[i].prio, itens[i].nome);
        insere_FilaPrio(fp, itens[i].nome, itens[i].prio);
    }
    printf("========================================================\n");
    imprimir_FilaPrio(fp);

    return 0;
}