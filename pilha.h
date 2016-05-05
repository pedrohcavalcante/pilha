#define TAMANHO_PADRAO 5
#define VALOR_ERRO -99999

typedef struct{
	int topo;
	int tamanho;
	int *elementos;
}Pilha;

Pilha* criarPilha();
Pilha* criarPilha(int tamanho);
bool empilhar(Pilha* pilha, int valor);
bool desempilhar(Pilha* pilha);
bool pilhaCheia(Pilha* pilha);
bool pilhaVazia(Pilha* pilha);

