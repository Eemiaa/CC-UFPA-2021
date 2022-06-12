#include <iostream>
#include <cstdlib>
#include "queue.h"

using namespace std;


TPfila* init_fila(){
    TPfila* fila = (TPfila*) malloc(sizeof(TPfila));
    return fila;
}

void esvaziar(TPfila* fila){
    fila->frente = (apontador) malloc(sizeof(Celula));
    fila->tras = fila->frente;
    fila->frente->proximo = NULL;
}

bool estado(TPfila* fila){
    return (fila->frente == fila->tras);
}

void enfileirar(TPnodo x, TPfila* fila){
    fila->tras->proximo= (apontador) malloc(sizeof(Celula));
    fila->tras = fila->tras->proximo;
    fila->tras->nodo = x;
    fila->tras->proximo = NULL;
}

TPnodo desenfileirar(TPfila* fila){
    apontador  q;
    if(estado(fila)){
        cout<<"\nThe queue is empty.\n";
    }
    q=fila->frente;
    fila->frente = fila->frente->proximo;
    free(q);
    return fila->frente->nodo;
}