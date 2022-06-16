
typedef struct tpnodo{
    int id;
    char name[100];
    int priority;
    int wait;
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

void esvaziar(TPfila*);

void fura_fila_priority(TPnodo, TPfila*);

int tamanho(TPfila* );

void imprimir(TPfila* );

void enfileirar(TPnodo , TPfila* );

void fura_fila_wait(TPfila* );

TPnodo desenfileirar(TPfila*);

void fura_fila_desenfileira(TPfila*, int);