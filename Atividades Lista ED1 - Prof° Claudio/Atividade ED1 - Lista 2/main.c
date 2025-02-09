#include "Pilha.h"
#include <stdio.h>

int main() {
    // Teste de Pilha
    Pilha* p = pilha_cria();
    pilha_push(p, 10);
    pilha_push(p, 20);
    printf("Topo da pilha: %.2f\n", topo(p));
    pilha_libera(p);

    return 0;
}

