//
// Created by elson.sousa on 17/12/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include "ListaLinear.h"

struct lista
{
int qtdElementos;
    int dados[max];
};

Lista* criarLista()
{
 Lista* lista = (Lista*)malloc(sizeof(lista));

    if (lista != NULL)
    {
        lista->qtdElementos = 0;
    }
return lista;

}
int inserirElemento(Lista* lista, int elemento)
{
    if (lista == NULL || lista->qtdElementos >=  max)
    {
        return -1;
    }
    lista->dados[lista->qtdElementos] = elemento;
    lista->qtdElementos++;
}
void imprimirLista(Lista* lista)
{
    if (lista == NULL || lista->qtdElementos == 0)
    {
        printf("lista vazia\n");
        return;
    }
    for (int i = 0; i < lista->qtdElementos; i++)
    {
        printf("%d: %d\n ",i+1, lista->dados[i]);
    }
}
void liberarLista(Lista* lista)
{
    free(lista);
}
