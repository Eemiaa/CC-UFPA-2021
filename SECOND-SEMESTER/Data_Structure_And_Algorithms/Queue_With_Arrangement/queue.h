#define MAXTAM 1000

typedef struct tpnodo{
    int chave;
}TPnodo;

typedef struct tpfila{
    TPnodo nodo[MAXTAM];
    int frente, tras;
}TPfila;


TPfila* init_fila();
/*Enfileira um valor na fila*/
void enfileirar(TPnodo* , TPfila* );
/*esvazia a fila*/
void esvaziar_fila(TPfila* );
/*Verifica se a fila está vazia*/
bool verificar_estado(TPfila* );
/*retira o últimp valor da fila*/
TPnodo* desenfileirar(TPfila* );