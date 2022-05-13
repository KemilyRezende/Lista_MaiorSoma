// Lista.hpp
#include <iostream>
#ifndef __LISTA__HPP
#define __LISTA__HPP
#include "No.hpp"

using namespace std;

class Lista{
	private:
		No* cabeca;
		No* cauda;
	public:
		Lista();
		Lista (int num);
		void MostarTodos();
		bool verificaVazia();
		void inserirInicio(int num);
		void inserirFinal(int num);
		int Size();
		int maiorSoma();
		
};

#endif
