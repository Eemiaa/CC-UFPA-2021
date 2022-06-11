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
        cout<<"\nOlá usuário, escolha dentre as opções:\n1: inserir novo nodo;\n2: verificar o estado da lista;\n3: esvaziar a lista;\n4: retirar nodo da lista;\n5: imprimir lista;\n0: sair;\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            cout<<"\nForneça o valor a ser inserido: ";
            cin>>Nodo->valor;
            inserir_nodo(lista, Nodo);
            break;
        case 2:
            cout<<endl<<verificar_estado(lista)<<endl;
            break;
        case 3:
            esvaziar_lista(lista);
            break;
        case 4:
            cout<<"\nForneça a posição do nodo que você gostaria de retirar: ";
            cin>>posicao;
            Valor = retirar_nodo(lista, posicao);
            if (Valor == NULL){
                cout<<"\nThe position does not exist.\n"; 
            }else{
                cout<<"\nO nodo de posicao "<<posicao<<" foi retirado com sucesso. Seu valor era de: "<<Valor->valor<<endl;
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
