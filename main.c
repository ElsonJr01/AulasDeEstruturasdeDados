    #include <stdio.h>
    #include <stdlib.h>
    #include "filaEstatica.h"

     int main(void) {

         struct aluno al, a[2] = {{2, "Andre", 9.5, 7.8, 8.5}, {3, "Jose", 2.0, 3.0,1.0}};
         Fila *fi = cria_fila();
         // printf("Ta")
         int i;
         for (i = 0; i < 2; i++){
             insere_fila(fi, a[i]);
             consulta_fila(fi, &al);
             printf("Consulta: %d \t %s\n", al.matricula, al.nome);
         }
         return 0;
     }