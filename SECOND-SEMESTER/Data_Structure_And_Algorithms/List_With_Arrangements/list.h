#define MAXTAM 1000

typedef struct tpnodo{
    int valor;
}TPnodo;
typedef struct tplista{
    TPnodo nodo[MAXTAM];
    int posicao_inicial, posicao_final;
}TPlista;


/*iniciar a lista.*/
TPlista* init_lista();

/*inserir um novo nodo com valor após o i-ésimo nodo.*/
void inserir_nodo(TPlista* lista,  TPnodo* Nodo);

/*verificar se a lista está vazia.*/
bool verificar_estado(TPlista*);

/*faz a lista ficar vazia.*/
void esvaziar_lista(TPlista*);

/*retirar um nodo da lista e retornar esse nodo.*/
TPnodo* retirar_nodo(TPlista*, int);

/*imprimiur os itens da lista em ordem de ocorrência.*/
void imprimir(TPlista*);


/*localizar o i-ésimo item para examinar e/ou
alterar o conteúdo de seus componentes.*/
/*combinar duas ou mais listas lineares em uma
lista única.*/
/*partir uma lista linear em duas ou mais listas*/
/*fazer uma cópia da lista linear.*/
/*ordenar os itens da lista em ordem ascendente 
ou descendente, de acordo com alguns de seus 
componentes.*/
/*Pesquisar a ocorrência de um item com um valor
particular em algum componente.*/

