#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


int main(){
	
	Pilha *p = pilha_cria();
	
	pilha_push(p, 10);
	pilha_push(p, 20);
	pilha_push(p, 30);
	
	printf("%2f\n", pilha_pop(p));
		printf("%2f\n", pilha_pop(p));
			printf("%2f\n", pilha_pop(p));
	return 0;
}
