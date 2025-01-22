//
// Created by elson.sousa on 21/01/2025.
//

#ifndef FILAPRIORIDADE_H
#define FILAPRIORIDADE_H
#define MAX 4

typedef struct fila_prioridade FilaPrio;

FilaPrio* cria_FilaPrio();
int insere_FilaPrio(FilaPrio *fp, char *nome, int prioridade);
int remove_FilaPrio(FilaPrio *fp);
void imprimir_FilaPrio(FilaPrio *fp);







#endif //FILAPRIORIDADE_H
