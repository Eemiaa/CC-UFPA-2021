#include <iostream>
#include <stdlib.h>
#include "queue.h"

using namespace std;

TPfila* init_fila(){
    TPfila* fila = (TPfila*) malloc(sizeof(TPfila));
    return fila;
}

void enfileirar(TPnodo* nodo, TPfila* fila){
   /*cout<<fila->tras<<endl;
    cout<<fila->frente<<endl;
    cout<<(fila->tras+1)%MAXTAM;*/
    if((fila->tras+1)%MAXTAM==fila->frente){
        cout<<"\nThe queue is full.\n";
    }else{
        fila->nodo[fila->tras] = *nodo;
        fila->tras=(fila->tras+1)%MAXTAM;
    }
    
}

void esvaziar_fila(TPfila* fila){
    fila->frente=0;
    fila->tras=fila->frente;
}

bool verificar_estado(TPfila* fila){
    return(fila->frente==fila->tras);
}

TPnodo* desenfileirar(TPfila* fila){
    TPnodo* Nodo;
    Nodo = (TPnodo*) malloc(sizeof(TPnodo));
    if(verificar_estado(fila)){
        return NULL;
    }else{
        int idx = fila->frente;
        fila->frente= (fila->frente+1)%MAXTAM;
        *Nodo = fila->nodo[idx];
        return Nodo;
    }
}