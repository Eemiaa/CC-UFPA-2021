#include <iostream>
#include <cstdlib>
#include "stacks.h"

using namespace std;


TPpilha* init_pilha(){
    TPpilha* pilha = (TPpilha*) malloc(sizeof(TPpilha));
    return pilha;
}

void esvaziar(TPpilha* pilha){
    pilha->topo = (apontador) malloc(sizeof(Celula));
    pilha->fundo = pilha->topo;
    pilha->topo->proximo = NULL;
    pilha->tamanho = 0;
}

bool estado(TPpilha* pilha){
    return(pilha->topo==pilha->fundo);
}

void empilhar(TPnodo x, TPpilha* pilha){
    apontador aux;
    aux = (apontador) malloc(sizeof(Celula));
    pilha->topo->nodo=x;
    aux->proximo = pilha->topo;
    pilha->topo = aux;
    pilha->tamanho++;
}

TPnodo desempilhar(TPpilha* pilha){
    apontador q;
    if (estado(pilha)){
        cout<<"\nThe pile is empty.\n";
    }
    q = pilha->topo;
    pilha->topo = q->proximo;
    free(q);
    pilha->tamanho--;
    return pilha->topo->nodo;   
}

int tamanho(TPpilha* pilha){
    return (pilha->tamanho);
}
