		#include <stdio.h>
		#include <stdlib.h>
		
		typedef struct listano ListaNo;
		struct listano{
			int info;
			ListaNo* prox;
		};
		typedef struct lista Lista;
		struct lista{
			ListaNo* prim;
		};
		Lista* lst_cria (void){
			Lista* l = (Lista*) malloc(sizeof(Lista));
			l->prim = NULL;
			return l;
		}
		void lst_insere (Lista* l, int i){
			ListaNo* novo = (ListaNo*) malloc(sizeof(ListaNo));
			novo->info = i;
			novo->prox = l->prim;
			l->prim = novo;
		}
		void lst_imprime (Lista* l){
			ListaNo* aux;
			for(aux = l->prim; aux != NULL; aux = aux->prox){
				printf(" %d ", aux->info);
			}
		}
		int main(){
			int i;
			
			Lista* l = lst_cria();
			
			if (l==NULL){
				printf("Erro ao alocar lista!");
			} else {
				printf("Lista alocada!");
			} 
			lst_insere(l, 10);
			lst_insere(l, 20);
			printf("\nPrimeiro: %d\n", l->prim->info);
			
			lst_imprime (l);
			
			return 0;
		}
		
//Aula ED1 Cláudio 19/12/2024
