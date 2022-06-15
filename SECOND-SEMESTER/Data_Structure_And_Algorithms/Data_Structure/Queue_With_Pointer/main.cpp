#include <iostream>
#include <cstdlib>
#include "queue.cpp"

using namespace std;

int main(void){
    int opcao=-1;
    int posicao;
    TPnodo x;
    TPfila* fila;
    fila = init_fila();
    esvaziar(fila);
    

    while(opcao!=0){
        cout<<"\nHello user, choose from the options:\n1: queue a new value;\n2: dequeue;\n3: empty queue;\n4: check queue stats;\n5: pull the queue adding element;\n6: pull the queue removing element;\n7: print values;\n8: check the queue size;\n0: exit;\n";
        cin>>opcao;
        switch (opcao)
        {
            //ENFILEIRAR UM NOVO VALOR;
        case 1:
            cout<<"\nProvide the value to enter: ";
            cin>>x.chave;
            enfileirar(x, fila);
            break;
            //DESENFILEIRAR;
        case 2:
            if(estado(fila)){
                cout<<"\nThe queue is empty.\n";
            }else{
            x = desenfileirar(fila);
            cout<<"\nThe value "<<x.chave<<" was successfully removed\n";}
            break;
            //ESVAZIAR FILA;
        case 3:
            esvaziar(fila);
            cout<<"\nthe queue has been emptied successfully.\n";
            break;
            //VERIFICAR ESTADO DA FILA;
        case 4:
            if(estado(fila)){
                cout<<"\nThe queue is empty.\n";
            }else{
                cout<<"\nThe queue is not empty.\n";
            }
            break;
            //FURAR A FILA ADICIONANDO ELEMENTO;
        case 5:
            cout<<"\nProvide the value to enter: ";
            cin>>x.chave;
            cout<<"\nChoose the position to cut the queue: ";
            cin>>posicao;
            if(posicao>0 && posicao<=tamanho(fila)){
                fura_fila_enfileira(x, fila, posicao);
            }else{
                cout<<"\nThis position does not exist in the queue.\n";
            }
            
            break;
            //FURAR A FILA REMOVENDO ELEMENTO;
        case 6:
            if(estado(fila)){
                cout<<"\nThe queue is empty.\n";
            }else{
            cout<<"\nChoose the position to dequeue abruptly: ";
            cin>>posicao;
            if(posicao>0 && posicao<=tamanho(fila)){
                fura_fila_desenfileira(fila, posicao);
            }else{
                cout<<"\nThis position does not exist in the queue.\n";
            }
            }
            break;
            //IMPRIMIR OS VALORES DA FILA;
        case 7:
            imprimir(fila);
            break;
            //VERIFICAR O TAMANHO DA FILA;
        case 8:
            cout<<"\nThe queue has the size: "<<tamanho(fila)<<endl;
            break;
        default:
            opcao=0;
            break;
        }        
    }
}