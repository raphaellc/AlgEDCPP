#include "FilaPessoas.h"

FilaPessoas::FilaPessoas()
{
}


FilaPessoas::~FilaPessoas()
{
}

void FilaPessoas::enfileirar(Pessoa * p)
{
	No<Pessoa> * no = new No<Pessoa>;
	no->info = p;
	no->proximo = nullptr;
	Lista<Pessoa>::inserirInicioLista(no);
}

void FilaPessoas::desenfileirar()
{
	Lista<Pessoa>::removeUltimoNo(lista);
}

void FilaPessoas::percorrerFila(No<Pessoa> * lista)
{
	if (lista != nullptr) {
		cout << lista->info->s_nome << endl;
		percorreLista(lista->proximo);
	}
}