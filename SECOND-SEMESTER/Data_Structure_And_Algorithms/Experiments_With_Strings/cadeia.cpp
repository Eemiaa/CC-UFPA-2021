#include <cstring>
#include <iostream>
#include "cadeia.h"
#include <string.h>

using namespace std;

//qtd de caracteres na cadeia
int contador(char* cadeia){
    int i=0;
    while(cadeia[i]!='\0'){
        i++;
    }
    return i;
}
//vogal: receber uma cadeia de caracteres e informar quantas vogais a cadeia tem
void receber(){

    char cadeia[88];
    
    cout<<endl<<"Forneca uma cadeia de caracteres"<<endl;
    cin>>cadeia;
    
    int qtd = contador(cadeia);
    int qtdv=0;
    for(int i=0; i<qtd; i++){
        if ( cadeia[i]=='a' || cadeia[i]=='A' || cadeia[i]=='e' || cadeia[i]=='E' || cadeia[i]=='i' || cadeia[i]=='I' || cadeia[i]=='o' || cadeia[i]=='O' || cadeia[i]=='u' || cadeia[i]=='U'){
            qtdv++;}
    }
    
    cout<<endl<<"A cadeia tem "<<qtdv<<" vogal(is)."<<endl;
}
//cadeia de caracteres, a posição onde se deseja inserir e o caractere
void inserir(){
    
    char cadeia[88];
    int posi;
    char carac;
    
    cout<<endl<<"Forneca uma cadeia de caracteres"<<endl;
    cin>>cadeia;
    cout<<endl<<"Forneca a posicao da cadeia onde deseja trocar o caractere (inicio em 0):"<<endl;
    cin>>posi;
    cout<<endl<<"Forneca o caractere"<<endl;
    cin>>carac;
    
    cadeia[posi]=carac;

    cout<<endl<<"Resultado:"<<endl<<cadeia<<endl;
}

void achar(){

    char cadeia[500];
    char cad[88];
    int cont=0;
    int vetor[500];
    int z=0;
    cout<<endl<<"Forneca um texto de, no máximo, 500 caracteres"<<endl;
    cin.get(cadeia, 500);

    cout<<endl<<"Forneca a cadeia a ser procurada:"<<endl;
    cin>>cad;

    int contcadeia = strlen(cadeia);
    int contcad = contador(cad);
   
    for(int i = 0; i<contcadeia; i++){
        cont=0;
        if(cadeia[i]==cad[0]){
            for(int j = 0; j<contcad; j++){
                if(cadeia[i+j]==cad[j]){
                    cont++;
                }
            }
            if(cont==contcad){
                vetor[z]=i;
                z++;
        }
        
    }
}
if(z==0){
    cout<<"\n\nA palavra "<<cad<<" não aparece nenhuma vez no texto: "<<cadeia<<".\n\n";
}
else{
    cout<<"\n\nA palavra "<<cad<<" ocorre nas posições ";
    for(int x =0; x<z; x++){ 
        cout<<vetor[x];
        if(x+2<z){
            cout<<", ";
        }else{
            if(z!=1 and x+1!=z){cout<<" e ";}
        }
    }
    cout<< " do texto: "<<cadeia<<".\n\n";

}
}
