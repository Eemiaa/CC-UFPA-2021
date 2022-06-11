#include <iostream>
#include <stdlib.h>
#include "stacks.h"

using namespace std;

TPpilha* init_pilha(){
    TPpilha* pilha = (TPpilha*) malloc(sizeof(TPpilha));
    return pilha;
}

void empilhar(TPnodo* Nodo, TPpilha* pilha){
    if(pilha->topo==MAXTAM){
        cout<<"\n The stack is full.\n";
    }else{
        pilha->nodo[pilha->topo] = *Nodo;
        pilha->topo++;
    }
}

void esvaziar_pilha(TPpilha* pilha){
    pilha->topo = 0;
}

bool verificar_estado(TPpilha* pilha){
    return (pilha->topo==0);
}

TPnodo desempilhar(TPpilha *pilha){
    if(verificar_estado(pilha)){
        cout<<"\nThe stack is empty.\n";
    }
    else{
        pilha->topo--;
        return pilha->nodo[pilha->topo];
    }
} 

int tamanho_da_pilha(TPpilha* pilha){
    return pilha->topo; 
}