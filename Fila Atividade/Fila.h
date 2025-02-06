#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listano ListaNo;

typedef struct fila Fila;

Fila* fila_cria(void);
int fila_vazia(Fila *f);
void fila_insere(Fila *f, float v);
float fila_retira(Fila *f);
void fila_libera(Fila *f);
