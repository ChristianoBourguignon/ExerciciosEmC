#include <stdio.h>
#include "Pilha/pilha.h"

//Exercício 4: Pilha - Histórico de páginas web
//Descrição: Cada número representa uma página acessada.
//Ao pressionar "voltar", o sistema mostra a última página acessada.
//Inserções: 1, 2, 3, 4
//Resultado esperado ao "voltar" 3 vezes: 4 3 2

void main() {
    // exercicios 4
    int max = 4;
    TPILHA pilha;
    TNOP no;
    int i;
    int valores[] = {1,2,3,4};

    cria_pilha_vazia(&pilha, max);

    // Empilhar elementos
    for (i = 0; i < 4; i++) {
        no.info = valores[i];
        push(&pilha, &no);
    }

    // Desenfileira e mostrar a ordem de atendimento
    printf("Ordem de desinfileiramento:\n");
    while (max != 1) {
        pop(&pilha, &no);
        printf("%d ", no.info);
        max--;
    }
}
