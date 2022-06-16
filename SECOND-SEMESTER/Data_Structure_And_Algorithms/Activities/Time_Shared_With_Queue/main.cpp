#include <iostream>
#include <cstdlib>
#include "timeshared.cpp"
#include <string.h>

using namespace std;

int main(void)
{
int opcao=-1;
    int posicao;
    char name[100];
    TPnodo x;
    TPfila* fila;
    fila = init_fila();
    esvaziar(fila);

    while(opcao!=0){
        
        cout<<"\nEscolha dentre as opções:\n1: incluir um novo processo na fila de processos;\n2: matar o processo com maior tempo de espera;\n3: executar um processo;\n4: imprimir o conteúdo da lista de processos;\n0: exit;\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            cout<<"\nForneça os valores: ID, Name, Priority e Wait, respectivamente;\n";
            cin>>x.id;
            cin.ignore();
            cin.get(name, 100);
            strcpy(x.name, name);
            cin>>x.priority;
            cin>>x.wait;
            fura_fila_priority(x,fila);
            break;
        case 2:
            if(tamanho(fila)!=0){
                fura_fila_wait(fila);}
            else{
                cout<<"\nA fila está vazia.\n";
            }
            break;
        case 3:
            if(tamanho(fila)!=0){
                x=desenfileirar(fila);
                cout<<"\nO processo com as informações:\n\nID: "<<x.id<<"\nName: "<<x.name<<"\nPriority: "<<x.priority<<"\nWait: "<<x.wait<<"\n\nFoi executado com sucesso!\n";
            }
            else{
                cout<<"\nA fila está vazia.\n";
            }
            break;
        case 4:
            imprimir(fila);
            break;
        default:
            opcao=0;
            break;
        }        
    }
}
