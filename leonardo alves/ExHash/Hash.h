#pragma once
#include <string>
#include <iostream>
using namespace std;

class Hash
{
public:
	Hash();
	~Hash();

	int hash(string key);
	void addItem(string nome, int valor);
	int numeroItens(int index);
	void escreveTabela();
	void escreveOutrosItens(int index);
	void procuraValor(string nome);
	void removerItem(string nome);

private:
	static const int tamanho = 10;

	struct item {
		string nome;
		int valor;
		item *next;
	};

	item *tabelaHash[tamanho];
};

