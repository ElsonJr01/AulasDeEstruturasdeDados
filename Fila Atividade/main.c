#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fila.h"

int main(void){
	int i =0;
	Fila *f = fila_cria();
	
	fila_insere(f, 123);
	fila_insere(f, 124);
	fila_insere(f, 125);
	fila_insere(f, 126);
			
	if(fila_vazia(f)){
		printf("Fila Vazia.");
	}
	else{
		printf("A Fila nao esta vazia.");
	}
	
	for(i=0; i<4; i++){
	printf("Removendo elemento %d: %.2f\n", i, fila_retira(f));
}
	
	return 0;
}
