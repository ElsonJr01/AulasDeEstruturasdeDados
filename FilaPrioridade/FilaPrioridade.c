    #include <stdlib.h>
    #include <stdio.h>
    #include "FilaPrioridade.h"
#include <string.h>

#include <string.h>
    //
    // Created by elson.sousa on 21/01/2025.
    //
    struct paciente
    {
        char nome[50];
        int prio;
    };

    struct fila_prioridade
    {
        int qtd;
        struct paciente dados[MAX];
    };

    FilaPrio* cria_FilaPrio(){
     FilaPrio* fp;
        fp = (FilaPrio*) malloc(sizeof(struct fila_prioridade));
        if (fp != NULL)
        {
            fp->qtd = 0;
        }
         return fp;
    }
    int insere_FilaPrio(FilaPrio *fp, char *nome, int prioridade){
        int i = fp->qtd-1;

        while (i >= 0 && fp->dados[i].prio >= prioridade)
        {
            fp->dados[i+1] = fp->dados[i]; //faz a copia dos dados para uma posição deslocada
            i--;
        }
        strcpy(fp->dados[i+1].nome, nome);
        fp->dados[i+1].prio = prioridade;
        fp->qtd++;
        return 1;
    }

        void imprimir_FilaPrio(FilaPrio *fp)
    {
        int i;
        for (i = 0; i < fp->qtd; i++){
            printf("Nome: %s\n", fp->dados[i].nome);
        }

    }