// Main.cpp
#include <iostream>
#include "Lista.hpp"
#include <locale.h>

using namespace std;

int main() {
	int num, i, n, maiorSoma = 0;
	Lista l;
	cout << "\nQuantos números desejas adicionar a lista?\n";
	cin >> n;
	for (i=0; i<n; i++){
		cout << "\nValor " << i+1 << ": ";
		cin >> num;
		l.inserirFinal(num);
	}
	cout << "\nImprimindo Lista:\n_________________________________________\n";
	l.MostarTodos();
	cout << "\n_________________________________________\n";
	cout << "\nEncontrando a maior soma...\n";
	maiorSoma = l.maiorSoma();
	cout << "\nMaior soma = " << maiorSoma;
	return 0;
}

