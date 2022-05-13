//No.cpp
#include <iostream>
#include "No.hpp"

using namespace std;

No::No(int num){
	this->num = num;
	this->prox =  NULL;
}

int No::obterValor(){
	return this->num;
}

No* No::obterProx(){
	return prox;
}

void No::setProx(No* p){
	prox = p;
}
void No::setAtual(int num){
	this->num = num;
}

