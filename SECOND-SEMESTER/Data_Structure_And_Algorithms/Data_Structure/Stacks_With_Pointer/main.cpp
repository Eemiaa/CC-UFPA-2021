#include <iostream>
#include <cstdlib>
#include "stacks.cpp"

using namespace std;

int main(void)
{
    int opcao=-1;
    int ret=0;
    TPnodo x;
    TPpilha* pilha;
    pilha = init_pilha();
    esvaziar(pilha);
    

    while(opcao!=0){
        cout<<"\nHello user, choose from the options:\n1: stack;\n2: unstack;\n3: empty;\n4: size;\n5: status;\n0: exit;\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            cout<<"\nProvide the value to enter: ";
            cin>>x.chave;
            empilhar(x, pilha);
            break;
        case 2:
            if(estado(pilha)){
                cout<<"\nThe pile is empty.\n";
            }else{
            x = desempilhar(pilha);
            cout<<"\nThe value "<<x.chave<<" was successfully removed\n";}
            break;
        case 3:
            esvaziar(pilha);
            cout<<"\nthe pile has been emptied successfully.\n";
            break;
        case 4:
            cout<<"\nStack size: "<<tamanho(pilha)<<endl;
            break;
        case 5:
            if(estado(pilha)){
                cout<<"\nThe pile is empty.\n";
            }else{
                cout<<"\nThe pile is not empty.\n";
            }
            break;
        default:
            opcao=0;
            break;
        }        
    }
}
