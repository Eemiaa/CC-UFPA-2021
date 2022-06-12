typedef struct tpnodo{
    int chave;
}TPnodo;

typedef struct celula_str *apontador;

typedef struct celula_str{
    TPnodo nodo;
    apontador proximo;
}Celula;

typedef struct tpfila{
    apontador frente, tras;
}TPfila;

TPfila* init_fila();
void esvaziar(TPfila* );
bool estado(TPfila*);
void enfileirar(TPnodo, TPfila*);
TPnodo desenfileirar(TPfila*);