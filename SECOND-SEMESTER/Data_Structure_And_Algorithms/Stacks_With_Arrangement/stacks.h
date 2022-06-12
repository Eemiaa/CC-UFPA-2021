#define MAXTAM 1000

typedef struct tpnodo{
    int chave;
}TPnodo;
typedef struct tppilha{
    TPnodo nodo[MAXTAM];
    int topo;
}TPpilha;

TPpilha* init_pilha();

void empilhar(TPnodo* , TPpilha* );

void esvaziar_pilha(TPpilha* );

bool verificar_estado(TPpilha* );

TPnodo* desempilhar(TPpilha* );

int tamanho_da_pilha(TPpilha* );