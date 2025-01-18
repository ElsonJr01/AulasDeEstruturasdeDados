  #include <stdio.h>
#include <stdlib.h>
#include "FilaAtv.h"

 int main(void) {

     struct aluno al, a[2] = {{1, "Andre", 9.5, 7.8, 8.5}, {2, "Jose", 2.0, 3.0,1.0}};

     Fila *fi = cria_fila();
        if (fi == NULL) {
            printf("\nErro ao criar fila\n");
            return 1;
        }
     printf("\nFila criada com sucesso!\n");

     int i;
     for (i = 0; i < 2; i++){
         if (insere_fila(fi, a[i])) {
             printf("Elemento %d inserido\n", a[i].matricula);
         }
         else {
             printf("Erro ao inserir elemento\n");
         }
     }
     printf("Imprimindo a fila: ");
     printf("\n");
     imprime_fila(fi);
     printf("\n");
     printf("Removendo elementos da fila: \n");
     for (i = 0; i<2; i++){
         if (remove_fila(fi, &al)) {
             printf("Elemento removido: %d \t %s\n", al.matricula, al.nome);
         }
         else {
             printf("Erro ao remover elemento\n");
         }
     }
     if (fila_vazia(fi)) {
         printf("Fila vazia\n");
     }
     else {
         printf("A fila não esta vazia.");
     }
     libera_fila(fi);
     printf("Fila Liberada.");
     return 0;
 }