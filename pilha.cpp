#include <iostream>
#include "pilha.h"
using namespace std;

Pilha* criarPilha(){
	Pilha* novaPilha = new Pilha;
	novaPilha->topo = -1;
	novaPilha->tamanho = TAMANHO_PADRAO;
	novaPilha->elementos = new int[TAMANHO_PADRAO];

	return novaPilha;
}

Pilha* criarPilha(int tamanho){
	Pilha* novaPilha = new Pilha;
	novaPilha->topo = -1;
	novaPilha->tamanho = tamanho;
	novaPilha->elementos = new int[tamanho];

	return novaPilha;
}

bool pilhaCheia(Pilha* pilha){
	return pilha->topo+1 == pilha->tamanho;
}

bool pilhaVazia(Pilha* pilha){
	return pilha->topo == -1;
}

bool empilhar(Pilha* pilha, int valor){
	if(pilhaCheia(pilha)){
		return false;
	}else{
		pilha->elementos[pilha->topo+1] = valor;
		pilha->topo++;
		return true;
	}
}

bool desempilhar(Pilha* pilha){
	if(pilhaVazia(pilha)){
		return false;
	}else{
		pilha->elementos[pilha->topo] = 0;
		pilha->topo--;
		return true;
	}
}