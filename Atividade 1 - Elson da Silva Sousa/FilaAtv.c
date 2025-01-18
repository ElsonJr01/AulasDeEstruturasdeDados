        //
        // Created by jhule on 18/01/2025.
        //
        #include <stdio.h>
           #include <stdlib.h>
           #include "FilaAtv.h"

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
        void libera_fila(Fila *fi){
            free(fi);
        }
        int consulta_fila(Fila *fi, struct aluno *al) {
            if (fi == NULL || fila_vazia(fi)) {
                return 0;
            }
            *al = fi->dados[fi->inicio];
            return 1;
        }
        int fila_vazia(Fila *fi){
            if (fi == NULL){
                return -1;
            }
            return (fi->qtd == 0);
            }
        int insere_fila(Fila *fi, struct aluno al){
            if (fi == NULL || fi->qtd == MAX) {
                return 0;
            }
            fi->dados[fi->final] = al;
            fi->final = (fi->final + 1) % MAX;
            fi->qtd++;
            return 1;
        }
        int remove_fila(Fila *fi, struct aluno *al) {
            if (fi == NULL || fila_vazia(fi)) {
                return 0;
            }
            *al = fi->dados[fi->inicio];
            fi->inicio = (fi->inicio + 1) % MAX;
            fi->qtd--;
            return 1;
        }
        void imprime_fila(Fila *fi) {
            if (fi == NULL || fila_vazia(fi)) {
                printf("Fila vazia ou inexistente.\n");
                return;
            }
            int i, pos = fi->inicio;
            for (i = 0; i < fi->qtd; i++) {
                printf("Elemento %d: %d \t %s\n", i, fi->dados[pos].matricula, fi->dados[pos].nome);
                pos = (pos + 1) % MAX;
                    }
        }