typedef struct tpnodo{
    int chave;
}TPnodo;

typedef struct celula_str *apontador;

typedef struct celula_str{
    TPnodo nodo;
    apontador proximo;
}Celula;

typedef struct tplista{
    apontador posicao_inicial, posicao_final;
}TPlista;

TPlista* init_lista();
TPnodo retirar(Celula*, TPlista*);
void inserir(TPnodo, TPlista*, apontador);
bool verificar_estado(TPlista*);
void esvaziar_lista(TPlista*);
void imprimir(TPlista*);
int tamanho(TPlista*);
bool busca(int, TPlista*);
