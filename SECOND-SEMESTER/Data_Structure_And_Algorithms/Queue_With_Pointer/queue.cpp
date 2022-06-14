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

void fura_fila_enfileira(TPnodo x, TPfila* fila, int posicao){
    apontador p = (apontador) malloc(sizeof(Celula));
    apontador q = (apontador) malloc(sizeof(Celula)); 
    p=fila->frente;
    for(int i=1; i<posicao; i++){
        p = p->proximo;
    }  
    q = p->proximo;
    p->proximo= (apontador) malloc(sizeof(Celula));
    p->proximo->nodo=x;
    p->proximo->proximo = q;  
}

void fura_fila_desenfileira(TPfila* fila, int posicao){
    apontador p = (apontador) malloc(sizeof(Celula));
    apontador q; 
    p=fila->frente;
    for(int i=1; i<posicao; i++){
        p = p->proximo;
    }  
    p->proximo = p->proximo->proximo;
}

TPnodo desenfileirar(TPfila* fila){
    apontador  q;
    q=fila->frente;
    fila->frente = fila->frente->proximo;
    free(q);
    return fila->frente->nodo;
}


void imprimir(TPfila* fila){
    if(fila->frente==NULL){
        cout<<"\nThe queue is empty.\n";
    }else{
        cout<<"Values on list: \n";
        apontador p = (apontador) malloc(sizeof(Celula));
        for(p=fila->frente->proximo; p!=NULL; p = p->proximo){
            cout<<p->nodo.chave<<endl;
        }
    }
}

int tamanho(TPfila* fila){
    int cont = 0;
    apontador p = (apontador) malloc(sizeof(Celula));
    if(fila->frente->proximo != NULL){
        for (p=fila->frente->proximo; p != NULL; p = p->proximo){
            cont++;
        }
    }
    return cont;
}
