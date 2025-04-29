#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void cria_pilha_vazia (TPILHA *ppilha,int max){
    ppilha -> topo = -1;
    ppilha -> maximo= max;
}

//pilha está vazia?
int pilha_vazia(const TPILHA *ppilha){
    return (ppilha->topo == -1);
}
//pilha está cheia?
int pilha_cheia(const TPILHA *ppilha){
    return (ppilha -> topo == ppilha->maximo-1);
}

// Empilha ou Push
int push (TPILHA *ppilha, const TNOP *no){
    if (pilha_cheia(ppilha))
        return 0; /*overflow*/
    (ppilha -> topo)++;
    ppilha -> vnos[ppilha -> topo] = *no;
    return 1;
}

//Desempilha ou Pop
int pop (TPILHA *ppilha, TNOP *no){
    if (pilha_vazia(ppilha))
        return 0; /* Underflow */
    *no = ppilha -> vnos[ppilha -> topo];
    (ppilha -> topo)--;
    return 1;
}