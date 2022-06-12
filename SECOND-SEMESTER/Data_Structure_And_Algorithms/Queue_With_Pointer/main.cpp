#include <iostream>
#include <cstdlib>
#include "queue.cpp"

using namespace std;

int main(void){
    int opcao=-1;
    TPnodo x;
    TPfila* fila;
    fila = init_fila();
    esvaziar(fila);
    

    while(opcao!=0){
        cout<<"\nHello user, choose from the options:\n1: queue;\n2: unqueue;\n3: empty;\n4: status;\n0: exit;\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            cout<<"\nProvide the value to enter: ";
            cin>>x.chave;
            enfileirar(x, fila);
            break;
        case 2:
            if(estado(fila)){
                cout<<"\nThe queue is empty.\n";
            }else{
            x = desenfileirar(fila);
            cout<<"\nThe value "<<x.chave<<" was successfully removed\n";}
            break;
        case 3:
            esvaziar(fila);
            cout<<"\nthe queue has been emptied successfully.\n";
            break;
        case 4:
            if(estado(fila)){
                cout<<"\nThe queue is empty.\n";
            }else{
                cout<<"\nThe queue is not empty.\n";
            }
            break;
        default:
            opcao=0;
            break;
        }        
    }
}