#include "pch.h"
#include "Hash.h"

Hash::Hash()
{
	for (int i = 0; i < tamanho; i++) {
		tabelaHash[i] = new item;
		tabelaHash[i]->nome = "empty";
		tabelaHash[i]->valor = 0;
		tabelaHash[i]->next = NULL;
	}
}


Hash::~Hash()
{
}

int Hash::hash(string key)
{
	int hash = 0;
	int index;
	
	for (int i = 0; i < key.length(); i++) 
		hash = hash + (int)key[i];

	index = hash % tamanho;

	return index;
}

void Hash::addItem(string nome, int valor)
{
	int index = hash(nome);

	if (tabelaHash[index]->nome == "empty") {
		tabelaHash[index]->nome = nome;
		tabelaHash[index]->valor = valor;
	}
	else {
		item *ptr = tabelaHash[index];
		item *n = new item;

		n->nome = nome;
		n->valor = valor;
		n->next = NULL;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = n;
	}
}

int Hash::numeroItens(int index)
{
	int numero = 0;

	if (tabelaHash[index]->nome == "empty")
		return numero;
	else {
		numero++;
		item *ptr = tabelaHash[index];

		while (ptr->next != NULL) {
			ptr = ptr->next;
			numero++;
		}
	}

	return numero;
}

void Hash::escreveTabela()
{
	int numero;

	for (int i = 0; i < tamanho; i++) {
		numero = numeroItens(i);
		cout << "index n. " << i << endl;
		cout << tabelaHash[i]->nome << endl;
		cout << tabelaHash[i]->valor << endl;
		cout << "# de items = " << numero << endl;
		cout << "---------------" << endl;
	}
}

void Hash::escreveOutrosItens(int index)
{
	item *ptr = tabelaHash[index];

	if (ptr->nome == "empty")
		cout << "index n. " << index << " vazio";
	else {
		cout << "index n. " << index << " possui" << endl;

		while (ptr != NULL) {
			cout << ptr->nome << endl;
			cout << ptr->valor << endl;
			cout << "-------" << endl;
			ptr = ptr->next;
		}
	}
}

void Hash::procuraValor(string nome)
{
	int index = hash(nome);
	bool achouNome = false;
	bool achouAux = false;
	int valor;
	int posicao = 0;

	item *ptr = tabelaHash[index];
	while (ptr != NULL) {
		achouNome = false;
		if (ptr->nome == nome) {
			achouNome = true;
			valor = ptr->valor;
		}

		if (achouNome == true) {
			cout << "Valor = " << valor << endl;
			cout << "Index = " << index << endl;
			cout << "Posicao = " << posicao << endl;
			cout << "-------" << endl;
			achouAux = true;
		}
			
		ptr = ptr->next;
		posicao++;

	}

	if (achouAux == false)
		cout << "Valor nao encontrado" << endl;
}

void Hash::removerItem(string nome)
{
	int index = hash(nome);
	item *delPtr, *P1, *P2;

	if (tabelaHash[index]->nome == "empty")
		cout << "Nome nao encontrado" << endl;

	else if (tabelaHash[index]->nome == nome && tabelaHash[index]->next == NULL) {
		tabelaHash[index]->nome = "empty";
		tabelaHash[index]->valor = 0;

		cout << "Removido" << endl;
	}

	else if (tabelaHash[index]->nome == nome) {
		delPtr = tabelaHash[index];
		tabelaHash[index] = tabelaHash[index]->next;
		delete delPtr;

		cout << "Removido" << endl;
	}

	else {
		P1 = tabelaHash[index]->next;
		P2 = tabelaHash[index];

		while (P1 != NULL && P1->nome != nome) {
			P2 = P1;
			P1 = P1->next;
		}

		if (P1 == NULL)
			cout << "Nome nao encontrado" << endl;

		else {
			delPtr = P1;
			P1 = P1->next;
			P2->next = P1;
			delete delPtr;

			cout << "Removido" << endl;
		}
	}

	
}
