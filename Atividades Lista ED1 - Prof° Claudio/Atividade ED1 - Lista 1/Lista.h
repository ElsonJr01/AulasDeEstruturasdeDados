#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista Lista;

Lista* lista_cria(void);
void lista_insere(Lista* l, float v);
float lista_retira(Lista* l);
int lista_vazia(Lista* l);
void lista_libera(Lista* l);
void combina_listas(Lista* l_res, Lista* l1, Lista* l2);
int eh_palindromo(char* str);
void inverte_string(char* str);
void lista_inverte(Lista* l);
void lista_remove_repetidos(Lista* l);

