#include <iostream>
#include <cstdlib>
#include "timeshared.h"

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

void enfileirar(TPnodo x, TPfila* fila){
    fila->tras->proximo= (apontador) malloc(sizeof(Celula));
    fila->tras = fila->tras->proximo;
    fila->tras->nodo = x;
    fila->tras->proximo = NULL;
}
void fura_fila_priority(TPnodo x, TPfila* fila){
    if(tamanho(fila)>0){
        apontador p = (apontador) malloc(sizeof(Celula));
        apontador q = (apontador) malloc(sizeof(Celula)); 
        int i;
        p=fila->frente;
        //cout<<endl<<p->proximo->nodo.priority<<endl;
        //cout<<endl<<x.priority<<endl;        
        for(i=1; (x.priority < p->proximo->nodo.priority) && (i < tamanho(fila)); i++){
            p = p->proximo;
        }
        if((i==tamanho(fila)) and (x.priority < p->proximo->nodo.priority)){
                enfileirar(x,fila);
        }else{
            q = p->proximo;
            p->proximo= (apontador) malloc(sizeof(Celula));
            p->proximo->nodo=x;
            p->proximo->proximo = q;
            }  
    }else{
        enfileirar(x,fila);
    }
}

void fura_fila_wait(TPfila* fila){
    //pegar o que tem maior wait
    apontador p = (apontador) malloc(sizeof(Celula));
    apontador q = (apontador) malloc(sizeof(Celula));
    p=fila->frente;
    q = p;
    int cont;
    for(int i=0; i<tamanho(fila); i++){
        p = p->proximo;
        if(q->nodo.wait < p->nodo.wait){
            q = p;
        }
    }
    p=fila->frente;
    for(cont = 0; q->nodo.id != p->nodo.id; cont++){
        p=p->proximo;
    }
    fura_fila_desenfileira(fila, cont);
}

void fura_fila_desenfileira(TPfila* fila, int posicao){
    apontador p = (apontador) malloc(sizeof(Celula));
    apontador lixo = (apontador) malloc(sizeof(Celula));
    p=fila->frente;
    for(int i=1; i<posicao; i++){
        p = p->proximo;
    }  
    lixo = p->proximo;
    p->proximo = p->proximo->proximo;
    free(lixo);
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
        cout<<"\nID | NAME | PRIO | WAIT \n";

        apontador p = (apontador) malloc(sizeof(Celula));
        for(p=fila->frente->proximo; p!=NULL; p = p->proximo){
            cout<<p->nodo.id<<" | "<<p->nodo.name<<" | "<<p->nodo.priority<<" | "<<p->nodo.wait<<endl;
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