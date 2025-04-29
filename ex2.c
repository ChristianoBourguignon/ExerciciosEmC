#include <stdio.h>
#include "Fila/fila.h"
#include "Pilha/pilha.h"

//Exercício 2: Fila - Impressão de documentos
//Descrição: Cada número representa um documento na fila de impressão.
//Remova os documentos da fila e imprima-os conforme a ordem de chegada.
//Inserções: 12, 7, 3, 9
//Resultado esperado:
//12 7 3 9

void main() {
    // exercicios 2
    TFILA fila;
    TNO no;
    int i;
    int valores[] = {12, 7, 3, 9};

    cria_fila_vazia(&fila);

    // Enfileirar elementos
    for (i = 0; i < 4; i++) {
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
