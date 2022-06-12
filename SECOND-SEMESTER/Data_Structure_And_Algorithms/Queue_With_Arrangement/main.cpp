#include <iostream>
#include <stdlib.h>
#include "queue.cpp"

using namespace std;

int main(void)
{
    int opcao=-1;
    TPnodo* Nodo;
    Nodo = (TPnodo*) malloc(sizeof(TPnodo));
    TPfila* Fila;
    Fila = init_fila();
    while(opcao!=0){
        cout<<"\nHello user, choose from the options:\n1: to queue;\n2: empty queue;\n3: check queue status;\n4: dequeue;\n0: exit;\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            cout<<"\nProvide the value to be stacked: ";
            cin>>Nodo->chave;
            enfileirar(Nodo, Fila);
            break;
        case 2:
            esvaziar_fila(Fila);
            break;
        case 3:
            if(verificar_estado(Fila)){
                cout<<"\nThe queue is empty.\n"<<endl;
            }else{
                cout<<"\nThe queue is not empty.\n"<<endl;
            }
            
            break;
        case 4:
            Nodo = desenfileirar(Fila);
            if(Nodo == NULL){
                cout<<"\nThe queue is empty.\n";
            }else{
                cout<<"\nO valor: "<< Nodo->chave<<". Foi desenfileirado com sucesso.\n";
            }
            break;
        default:
            break;
        }        
    }
}