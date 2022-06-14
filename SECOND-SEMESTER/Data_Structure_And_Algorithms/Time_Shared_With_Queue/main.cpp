#include <iostream>
#include <cstdlib>
#include "timeshared.cpp"

using namespace std;

int main(void)
{
int opcao=-1;
    int posicao;
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
            cin>>x.name;
            cin>>x.priority;
            cin>>x.wait;
            fura_fila_priority(x, fila);
            break;
        case 2:
            fura_fila_wait(fila);
            break;
        case 3:
            x=desenfileirar(fila);
            cout<<"\nO processo com as informações:\n\nID: "<<x.id<<"\nName: "<<x.name<<"\nPriority: "<<x.priority<<"\nWait: "<<x.wait<<"\n\nFoi executado com sucesso!\n";
        case 4:
            imprimir(fila);
            break;
        default:
            opcao=0;
            break;
        }        
    }
}
