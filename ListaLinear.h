//
// Created by mateusandrade on 17/12/2024.
//

#ifndef LISTALINEAR_H
#define LISTALINEAR_H

#define MAX 10
typedef struct lista Lista;

Lista* criarLista();
int inserirElemento(Lista* li, int elemento);
void imprimir(Lista* li);
void liberarLista(Lista* li);

#endif //LISTALINEAR_H
