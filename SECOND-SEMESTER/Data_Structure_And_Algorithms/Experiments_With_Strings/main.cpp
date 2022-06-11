#include <iostream>
#include "cadeia.cpp"

using namespace std;

int main(void){
    char opcao;
    cout<<"\n Forneça o tipo de operação que deseja realizar de acordo com o menu:\n\n r = receber como parâmetro uma cadeia de caracteres e retornar quantas vogais a cadeia de caracteres possui. \n\n i = inserir um caractere em qualquer posição de uma cadeia de caracteres. \n\n a = achar todas as posições de ocorrência de uma cadeia de caracter em um texto. \n\n";
    cin>>opcao;

    switch (opcao){
    case 'r':
        cin.ignore();
        receber();
        break;
    case 'i':
        cin.ignore();
        inserir();
        break;
    case 'a':
        cin.ignore();
        achar();
        break;    
    default:
        break;
    }
}
