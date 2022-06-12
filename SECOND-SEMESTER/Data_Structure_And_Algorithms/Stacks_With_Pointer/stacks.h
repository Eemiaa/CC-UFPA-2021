typedef struct tpnodo{
    int chave;
}TPnodo;

typedef struct celula_str *apontador;

typedef struct celula_str{
    TPnodo nodo;
    apontador proximo;
}Celula;

typedef struct tppilha{
    apontador fundo, topo;
    int tamanho;
}TPpilha;

TPpilha* init_pilha();
void esvaziar(TPpilha*);
bool estado(TPpilha*);
void empilhar(TPnodo, TPpilha*);
TPnodo desempilhar(TPpilha*);
int tamanho(TPpilha*);

