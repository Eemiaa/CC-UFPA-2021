#include <iostream>
#include <stdlib.h>
#include "list.h"

using namespace std;

TPlista* init_lista(){
    TPlista* list = (TPlista*) malloc(sizeof(TPlista));
    return list;
}

void inserir_nodo(TPlista* lista, TPnodo* Nodo){
    if(lista->posicao_final>=MAXTAM){
        cout<<"\nThe list is full\n";
    }else{
        lista->nodo[lista->posicao_final]= *Nodo;
        lista->posicao_final++;
    }
}

bool verificar_estado(TPlista* lista){
    return (lista->posicao_final==lista->posicao_inicial);
}

void esvaziar_lista(TPlista* lista){
    lista->posicao_inicial=0;
    lista->posicao_final=lista->posicao_inicial;
}

TPnodo* retirar_nodo(TPlista* lista, int posicao){
    int aux;
    TPnodo* Nodo;
    Nodo = (TPnodo*) malloc(sizeof(TPnodo));
    if(verificar_estado(lista)|| posicao>=lista->posicao_final){
        return NULL; 
    }else{
        *Nodo = lista->nodo[posicao];
        lista->posicao_final--;
        for (aux=posicao; aux < lista->posicao_final; aux++){
            lista->nodo[aux]=lista->nodo[aux+1];        
        }
        return Nodo;
    }
}

void imprimir(TPlista* lista){
    cout<<"\nP  |   K\n";
    for(int aux = lista->posicao_inicial; aux < lista->posicao_final; aux++){
        cout<<aux<< "   |   "<< lista->nodo[aux].valor<<endl;
    }
}
