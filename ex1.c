#include <stdio.h>
#include "Fila/fila.h"
#include "Pilha/pilha.h"

//Exercício 1: Fila - Atendimento em ordem de chegada
//Descrição: Simule uma fila de atendimento. Ao final, imprima a ordem de atendimento.
//Inserções: 5, 10, 54, 34, 56
//Resultado esperado (ordem de remoção da fila):
//5 10 54 34 56

void main() {
    // exercicios 1
    TFILA fila;
    TNO no;
    int i;
    int valores[] = {5, 10, 54, 34, 56};

    cria_fila_vazia(&fila);

    // Enfileirar elementos
    for (i = 0; i < 5; i++) {
        no.info = valores[i];
        enqueue(&fila, no);
    }

    // Desenfileirar e mostrar a ordem de atendimento
    printf("Ordem de atendimento:\n");
    while (!fila_vazia(&fila)) {
        dequeue(&fila, &no);
        printf("%d ", no.info);
    }
}
