#include <iostream>
#include <cstdlib>
#include "list.h"

using namespace std;

TPlista* init_lista(){
    TPlista* lista = (TPlista*) malloc(sizeof(TPlista));
    return lista;
}

void esvaziar_lista(TPlista* lista){
    lista->posicao_inicial = (apontador) malloc(sizeof(Celula));
    lista->posicao_final = lista->posicao_inicial;
    lista->posicao_inicial->proximo=NULL;
}

bool verificar_estado(TPlista* lista){
    return (lista->posicao_inicial==lista->posicao_final);
}

void inserir(TPnodo x, TPlista* lista, apontador E){
    apontador novo;
    novo = (apontador) malloc(sizeof(Celula));
    novo->nodo=x;
    novo->proximo = E->proximo;
    if(lista->posicao_inicial->proximo==NULL){
        lista->posicao_final=novo;
    }if(lista->posicao_final==E){
        lista->posicao_final=novo;
    }
    E->proximo=novo;
}

TPnodo retirar(Celula* cel, TPlista* lista){
    apontador lixo;
    lixo = (apontador) malloc(sizeof(Celula));
    lixo = cel->proximo;
    cel->proximo = lixo->proximo;
    TPnodo nodo = lixo->nodo;
    if(lista->posicao_final==lixo){
        lista->posicao_final == lista->posicao_inicial;
    }
    free(lixo);
    return nodo;
}

int tamanho(TPlista* lista){
    int cont = 0;
    apontador p = (apontador) malloc(sizeof(Celula));
    if(lista->posicao_inicial->proximo != NULL){
        for (p=lista->posicao_inicial->proximo; p != NULL; p = p->proximo){
            cont++;
        }
    }
    return cont;
}
void imprimir(TPlista* lista){
    if(lista->posicao_inicial==NULL){
        cout<<"\nThe list is empty.\n";
    }else{
        cout<<"Values on list: \n";
        apontador p = (apontador) malloc(sizeof(Celula));
        for(p=lista->posicao_inicial->proximo; p!=NULL; p = p->proximo){
            cout<<p->nodo.chave<<endl;
        }
    }
}

bool busca(int chave, TPlista* lista){
    apontador p = (apontador) malloc(sizeof(Celula));
    for(p=lista->posicao_inicial->proximo; p != NULL; p = p->proximo){
        if(p->nodo.chave==chave){return true;}else{return false;}
    }
}