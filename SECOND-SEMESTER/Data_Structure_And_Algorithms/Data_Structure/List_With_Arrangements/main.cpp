#include <iostream>
#include <stdlib.h>
#include "list.cpp"

using namespace std;

int main(void)
{
    int opcao=-1;
    int posicao;
    TPnodo* Valor; 
    Valor = (TPnodo*) malloc(sizeof(TPnodo)); 
    TPnodo* Nodo; 
    Nodo = (TPnodo*) malloc(sizeof(TPnodo)); 
    TPlista* lista;

    lista = init_lista();
    /*menu*/
    while(opcao!=0){
        cout<<"\nHello user, choose from the options:\n1: insert new node;\n2: check the list status;\n3: empty the list;\n4: remove node from the list;\n5: print list;\n0: exit;\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            cout<<"\nProvide the value to enter: ";
            cin>>Nodo->valor;
            inserir_nodo(lista, Nodo);
            break;
        case 2:
            if(verificar_estado(lista)){
                cout<<"\nThe list is empty.\n"<<endl;
            }else{
                cout<<"\nThe list is not empty.\n"<<endl;
            }
            break;
            break;
        case 3:
            esvaziar_lista(lista);
            break;
        case 4:
            cout<<"\Provide the position of the mode you would like to withdraw: ";
            cin>>posicao;
            Valor = retirar_nodo(lista, posicao);
            if (Valor == NULL){
                cout<<"\nThe position does not exist.\n"; 
            }else{
                cout<<"\nThe position node "<<posicao<<" was successfully withdrawn. Its value was: "<<Valor->valor<<endl;
            }
            break;
        case 5:
            imprimir(lista);
            break;
        default:
            opcao=0;
            break;
        }        
    }
}
