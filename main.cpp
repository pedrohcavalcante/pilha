#include <iostream>
#include "pilha.h"
using namespace std;
int main(){
	Pilha* pilha = criarPilha();
	cout << "Pilha->topo " << pilha->topo << endl;	

	cout << "Pilha->tamanho " << pilha->tamanho << endl;

	cout << "Is empty = " << pilhaVazia(pilha) << endl;

	cout << "Pilha->topo: " << pilha->topo << endl;

	cout << "Empilhar 5: " << empilhar(pilha, 5) << endl;
	cout << "Pilha->topo: " << pilha->topo << endl;

	cout << "Empilhar 3: " << empilhar(pilha, 3) << endl;
	cout << "Pilha->topo: " << pilha->topo << endl;

	cout << "Empilhar 2: " << empilhar(pilha, 2) << endl;
	cout << "Pilha->topo: " << pilha->topo << endl;

	cout << "Empilhar 2: " << empilhar(pilha, 2) << endl;
	cout << "Pilha->topo: " << pilha->topo << endl;

	cout << "Empilhar 2: " << empilhar(pilha, 2) << endl;
	cout << "Pilha->topo: " << pilha->topo << endl;

	cout << "Depois de cheio:: " << endl;

	cout << "Empilhar 2: " << empilhar(pilha, 2) << endl;
	cout << "Pilha->topo: " << pilha->topo << endl;

	cout << "Desempilhar: " << desempilhar(pilha) << endl;

	cout << "Desempilhar: " << desempilhar(pilha) << endl;

	cout << "Is full = " << pilhaCheia(pilha) << endl;

	for (int i = 0; i < pilha->tamanho; i++){
		cout << "Pilha->elementos[" << i << "] = " << pilha->elementos[i] << endl;
	}
	return 0;
}