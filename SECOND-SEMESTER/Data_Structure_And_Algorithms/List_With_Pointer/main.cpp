#include <iostream>
#include <cstdlib>
#include "list.cpp"

using namespace std;

int main(void)
{
    int opcao=-1;
    int ret=0;
    TPnodo x;
    apontador E;
    E = (apontador) malloc(sizeof(Celula));
    TPlista* lista;
    lista = init_lista();
    esvaziar_lista(lista);
    

    while(opcao!=0){
        cout<<"\nHello user, choose from the options:\n1: type the element at the beginning;\n2: insert the element at the end;\n3: remove the element;\n4: show the list;\n5: query the element;\n6: size of the list;\n7: make the list empty;\n0: exit;\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            cout<<"\nProvide the value to enter: ";
            cin>>x.chave;
            E = lista->posicao_inicial;
            inserir(x, lista, E);
            break;
        case 2:
            cout<<"\nProvide the value to enter: ";
            cin>>x.chave;
            E = lista->posicao_final;
            inserir(x, lista, E);
            break;
        case 3:
            if(verificar_estado(lista)){
                cout<<"\nThe list is empty.\n";
            }else{
            E = lista->posicao_inicial;
            x = retirar(E, lista);
            cout<<"\nThe value "<<x.chave<<" was successfully removed\n";}
            break;
        case 4:
            imprimir(lista);
            break;
        case 5:
            int v;
            cout<<"\nWhat is the value to search?\n";
            cin>>v;
            ret = busca(v, lista);
            if(ret == true){
                cout<<"\nValue "<<v<<" found in list.\n";
            }else{
                cout<<"\nValue "<<v<<" not found in list.\n";
            }
            break;
        case 6:
            cout<<"\nList size: "<<tamanho(lista)<<endl;
            break;
        case 7:
            esvaziar_lista(lista);
            cout<<"\nthe list has been emptied successfully.\n";
            break;
        default:
            opcao=0;
            break;
        }        
    }
}
