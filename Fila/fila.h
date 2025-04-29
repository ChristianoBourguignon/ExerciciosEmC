#ifndef FILA_H
#define FILA_H
#define MAX 4

/* Primeiro, a definição de um tipo para o elemento */
typedef struct {
    int info;
} TNO;

/* Em seguida, um tipo para a pilha */
typedef struct {
    TNO vnos[MAX];
    int F,R;
    int maximo;
} TFILA;

/*cria fila vazia*/
void cria_fila_vazia(TFILA *pfila);

//fila está vazia?
int fila_vazia(TFILA *fila);

//fila está cheia?
int fila_cheia(TFILA *fila);

//Enfileira fila
int enqueue (TFILA*pfila, TNO no);

// Desenfileira ou Dequeue
int dequeue(TFILA*pfila,TNO *no);

// Imprimir fila
void imprimirFila(TFILA *pfila);

#include "fila.c"
#endif
