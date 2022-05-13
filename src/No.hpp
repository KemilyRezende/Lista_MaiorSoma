// No.hpp
#include <iostream>
#ifndef __NO__HPP
#define __NO__HPP

using namespace std;

class No{
	private:
		int num;
		No* prox;
	public:
		No(int num);
		int obterValor();
		No* obterProx();
		void setProx(No* p);
		void setAtual(int num);
};

#endif
