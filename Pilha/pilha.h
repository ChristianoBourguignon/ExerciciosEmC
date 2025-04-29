#ifndef PILHA_H
#define PILHA_H
#define MAX 100

/* Primeiro, a definição de um tipo para o elemento */
typedef struct {
    int info;
} TNOP;

/* Em seguida, um tipo para a pilha */
typedef struct {
    TNO vnos[MAX];
    int topo;
    int maximo;
} TPILHA;

/*cria pilha vazia*/
void cria_pilha_vazia (TPILHA *ppilha,int max);

//pilha está vazia?
int pilha_vazia(const TPILHA *ppilha);

//Pilha ta cheia?
int pilha_cheia(const TPILHA *ppilha);

// Empilha ou Push
int push (TPILHA *ppilha, const TNOP *no);

//Desempilha ou Pop
int pop (TPILHA *ppilha, TNOP *no);

#endif
