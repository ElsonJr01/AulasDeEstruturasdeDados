    //
    // Created by elson.sousa on 14/01/2025.
    //
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "filaEstatica.h"

        struct fila {
            int inicio, final, qtd;
            struct aluno dados[MAX];
        };

    Fila *cria_fila() {
      Fila *fi; //definicao de ponteiro para manipular fila
        fi = (Fila *)malloc(sizeof(Fila)); //alocaçao de memoria
        if (fi != NULL) {
            fi->inicio = 0;
            fi->final = 0;
            fi->qtd = 0;
        }
        return fi;

    }
    void libera_fila(Fila *fi)
    {
        free(fi);
    }
    int consulta_fila(Fila *fi, struct aluno *al)
    {
        if (fi == NULL || fila_vazia(fi))
        {
            return 0;
        }
            *al = fi->dados[fi->final];
        return 1;
    }
    int fila_vazia(Fila *fi){
        if (fi == NULL)
        {
            return -1;
        }
        if (fi->qtd == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int insere_fila(Fila *fi, struct aluno al){
        fi->dados[fi->final] = al;
        fi->final = (fi->final + 1) % MAX;
        fi->qtd++;
    return 1;
    }
