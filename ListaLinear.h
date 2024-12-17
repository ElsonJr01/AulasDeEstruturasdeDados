//
// Created by elson.sousa on 17/12/2024.
//

#ifndef LISTALINEAR_H
#define LISTALINEAR_H
#define max 10

typedef struct lista Lista;
Lista* criarLista();
int inserirElemento(Lista* lista, int elemento);
void imprimirLista(Lista* lista);
void liberarLista(Lista* lista);



#endif //LISTALINEAR_H
