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

void incluir(TPfila*, int, char, int, int);


TPfila* init_fila();
void esvaziar(TPfila* );
bool estado(TPfila*);
void enfileirar(TPnodo, TPfila*);
TPnodo desenfileirar(TPfila*);
void fura_fila_desenfileira(TPnodo, TPfila*);
void fura_fila_enfileira(TPnodo, TPfila*, int);
void imprimir(TPfila*);
int tamanho(TPfila*);