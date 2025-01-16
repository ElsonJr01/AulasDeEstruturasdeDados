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
			int i=0;
			ListaNo* aux;
			for(aux = l->prim; aux != NULL; aux = aux->prox){
				i++;
				printf("\nitem %d: %d\n ",i, aux->info);
				
			}
		}
//		int lst_vazia(Lista *l){
//				if(l->prim == NULL){
//					return 1;
//				}
//				else {
//			     	return 0;
//			         }
//			}
		
		int lst_vazia(Lista *l){  //mesma coisa da lista passada. 
			return l->prim == NULL;
		}
		
		int lst_pertence(Lista *l, int v){
			ListaNo* p;
//			int *opcao;
		for(p = l->prim; p != NULL; p = p->prox){
				if(p->info == v){
					return 1;
				}
			}
			return 0;
		}
		void lst_retira(Lista *l, int v){
			ListaNo *ant = NULL;
			ListaNo *p = l->prim;
			while(p!= NULL && p->info != v){
				ant = p;
				p = p->prox;
			}
			if(p != NULL){
				if(ant == NULL){
					l->prim = p->prox;
				}
				else {
					ant->prox = p->prox;
				}
				
			free(p);
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
			
			printf("A lista esta vazia?: %d", lst_vazia(l));
			lst_insere(l, 10);
			lst_insere(l, 20);
			lst_insere(l, 30);
			lst_insere(l, 40);
			lst_insere(l, 50);
			lst_insere(l, 60);
//			printf("\nPrimeiro: %d\n", l->prim->info);
			lst_imprime (l);
			printf("\nA lista esta vazia?: %d", lst_vazia(l));	
			
			lst_retira(l, 10);
			lst_retira(l, 20);	
			lst_retira(l, 30);
			lst_imprime(l);
//		do {
//		    lst_pertence(l, opcao);
//		}while(lst_pertence != opcao);
			return 0;
		}
		
//Aula ED1 Cláudio 19/12/2024
