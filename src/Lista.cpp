// Lista.cpp
#include <iostream>
#include "No.hpp"
#include "Lista.hpp"

using namespace std;

Lista::Lista(){
	cabeca = NULL;
	cauda = NULL;
}

Lista::Lista(int num){
	cabeca = new No(num);
	cauda = cabeca;
}

bool Lista::verificaVazia(){
	return (cabeca == NULL);
}

void Lista::MostarTodos(){
	cout << "\nImprimindo elementos.\n";
	No* c = cabeca;
	int i = 0;
	int valor;
	if(verificaVazia())
		cout << "Lista vazia!\n";
	else
	{
		for (i = 0; i< this->Size(); i++)
		{
			valor = c->obterValor();
			cout << valor << endl;
			c = c->obterProx();
		}
	}
}

void Lista::inserirInicio(int num){
	No* novo_no = new No(num);

	if(verificaVazia())
	{
		cabeca = novo_no;
		cauda = novo_no;
	}
	else
	{
		novo_no->setProx(cabeca);
		cabeca = novo_no;
	}
}

void Lista::inserirFinal(int num){
	No* novo_no = new No(num);

	if(verificaVazia())
	{
		cabeca = novo_no;
		cauda = novo_no;
	}
	else
	{
		cauda->setProx(novo_no);
		cauda = novo_no;
	}
}

int Lista::Size(){
	if(verificaVazia()){
		cout << "\nLista vazia -> tamanho = 0.";	
	}
	No* c = cabeca;
	int tam = 0;
	do
	{
		c = c->obterProx();
		tam++;
	}
	while(c);
	
	return tam;
}

int Lista::maiorSoma(){
	int Maiors = 0;
	if (this->verificaVazia()){
		cout << "\nLista Vazia!!\n";
	}

	else {
		int soma = 0;
		int soma_aux = 0;
		No* ant = cabeca;
		No* c = ant->obterProx();
		while(c){
			if (ant->obterValor()>=0){
				soma = soma + ant->obterValor();
			}
			else{
				if (soma > 0){
					if (soma > soma_aux){
						soma_aux = soma;
						soma = 0;
					}
					else{
						soma = 0;
					}
				}
			}
			ant = ant->obterProx();
			c = c->obterProx();
		}
		if (soma > soma_aux){
			Maiors = soma;
		}
		else {
			Maiors = soma_aux;
		}
	}

	return Maiors;
}
