#include <stdio.h>
#include "Pilha/pilha.h"
#include "Fila/fila.h"

//Você deve simular uma fila de atendimento. Porém, por algum motivo
//(ex: mudança de ordem de prioridade),
//você precisa inverter a ordem dos atendimentos usando uma pilha.
// inserções: 10,20,30,40 e output: 40,30,20,10

void main() {
    int max = 4;
    TPILHA pilha;
    TFILA fila;
    TNOP nop;
    TNO no;
    int i;
    int valores[] = {10,20,30,40};

    cria_pilha_vazia(&pilha,max);
    cria_fila_vazia(&fila);
    // inserindo elementos na pilha
    for (i = 0; i < MAX; i++) {
      nop.info = valores[i];
      push(&pilha, &nop);
    }
    //inserindo elementos da pilha, na fila
    while (!pilha_vazia(&pilha)) {
        pop(&pilha, &nop);
        no.info = nop.info;
        enqueue(&fila, no);
    }

    //exibindo a fila
    while (!fila_vazia(&fila)) {
        dequeue(&fila, &no);
        printf("\nOrdem de Invertida\n");
        printf("%d ", no.info);
    }
}
