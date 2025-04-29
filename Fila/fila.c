#include "fila.h"

#include <stdio.h>

/*cria fila vazia*/
void cria_fila_vazia(TFILA *pfila){
    pfila -> F = 0;
    pfila -> R = -1;
}

//fila está vazia?
int fila_vazia(TFILA *fila){
	return (fila->F > fila->R);
}

//fila está cheia?
int fila_cheia(TFILA *fila){
  int fila_cheia = MAX - 1;
    if (fila -> R == fila_cheia){
      return 1;
    } else {
      return 0;
    }
}
// Enfileira ou enqueue
int enqueue (TFILA*pfila, TNO no){
	if (fila_cheia (pfila)) {
		return 0;
    }
	(pfila ->R)++;
	pfila -> vnos[pfila -> R] = no;
	return 1;
}

// Desenfileira ou Dequeue
int dequeue(TFILA*pfila,TNO *no){
	if (fila_vazia(pfila)){
		return 0;
    }
	*no = pfila -> vnos[pfila -> F];
	(pfila -> F)++;
	return 1;
}

// Imprimir fila
void imprimirFila(TFILA *pfila){
  printf("Fila Sequencial");
  for (int i = 0; i <= pfila -> R; i++){
    printf("%i \n", pfila -> vnos[i].info);
  }

}