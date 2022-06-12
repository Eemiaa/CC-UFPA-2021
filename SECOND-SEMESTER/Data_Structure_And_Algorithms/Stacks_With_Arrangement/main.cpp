#include <iostream>
#include <stdlib.h>
#include "stacks.cpp"

using namespace std;

int main(void){
    
    int opcao=-1;
    TPnodo* Nodo;
    Nodo = (TPnodo*) malloc(sizeof(TPnodo));
    TPpilha* Pilha;
    Pilha = init_pilha();

    while(opcao!=0){
        cout<<"\nHello user, choose from the options:\n1: stack up;\n2: emptying stack;\n3: check stack status;\n4: unstack;\n5: inform stack size;\n0: exit;\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            cout<<"\nProvide the value to be stacked: ";
            cin>>Nodo->chave;
            empilhar(Nodo, Pilha);
            break;
        case 2:
            esvaziar_pilha(Pilha);
            break;
        case 3:
            if(verificar_estado(Pilha)){
                cout<<"\nThe pile is empty.\n"<<endl;
            }else{
                cout<<"\nThe pile is not empty.\n"<<endl;
            }
            break;
        case 4:
            Nodo = desempilhar(Pilha);
            if (Nodo == NULL){
                cout<<"\nThe stack is empty.\n";
            }else{
                cout<<"\nThe value: "<< Nodo->chave<<". Has been successfully unstacked.\n";
            } 
            break;
        case 5:
            cout<<endl<<tamanho_da_pilha(Pilha)<<endl;
            break;
        default:
            break;
        }        
    }
}