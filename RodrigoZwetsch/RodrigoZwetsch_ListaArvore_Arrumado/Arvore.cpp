#include "Arvore.h"

Arvore::Arvore()
{
	nElementos = 0;
	raiz = 0;
}

Arvore::~Arvore()
{
}

void Arvore::inserir(int i)
{
	novo = new No;
	novo->valor = i;
	novo->No_da_esq = 0;
	novo->No_da_dir = 0;
	if (nElementos == 0)//Arvore vazia
	{
		raiz = novo;
		nElementos++;
	}
	else //Já existem nós
	{
		inserir(raiz, novo);
	}
}

bool Arvore::pesquisar(int v)
{
	if (nElementos == 0)
	{
		return false;
	}
	else
	{
		return pesquisar(raiz, v);
	}
}

bool Arvore::remover(int v)
{
	if (nElementos == 0)
	{
		return false;
	}
	else
	{
		return remover(raiz, v);
	}
}

No* Arvore::percorrerDireita(No* r)
{
	if (r->No_da_dir == 0) {
		return r;
	}
	else {
		percorrerDireita(r->No_da_dir);
	}
}

No * Arvore::retornarRaiz(int v)
{
	if (nElementos == 0)
	{
		return nullptr;
	}
	else
	{
		return retornarRaiz(raiz, v);
	}
}

void Arvore::inserir(No * r, No * n)
{
	if (r->valor == n->valor)
	{
		delete n;
	}
	else if (n->valor < r->valor)
	{
		if (r->No_da_esq == 0)
		{
			r->No_da_esq = n;
			nElementos++;
		}
		else
		{
			inserir(r->No_da_esq, n);
		}
	}
	else
	{
		if (r->No_da_dir == 0)
		{
			r->No_da_dir = n;
			nElementos++;
		}
		else
		{
			inserir(r->No_da_dir, n);
		}
	}
}

bool Arvore::pesquisar(No * r, int v)
{
	if (r->valor == v) {
		return true;
	}
	else if (r->valor > v) {
		if (r->No_da_esq == nullptr) {
			return false;
		}
		else {
			return pesquisar(r->No_da_esq, v);
		}

	}
	else {
		if (r->No_da_dir == nullptr) {
			return false;
		}
		else {
			return pesquisar(r->No_da_dir, v);
		}
	}
}

bool Arvore::remover(No * r, int v)
{
	if (r->valor == v) {
		if (r->No_da_dir == 0 && r->No_da_esq == 0) {
			r->valor = 0;
			r = nullptr;
			return true;
		}
		else if (r->No_da_dir == 0 && r->No_da_esq != 0) {
			r->valor = r->No_da_esq->valor;
			r->No_da_esq = 0;
			return true;
		}
		else if (r->No_da_dir != 0 && r->No_da_esq == 0) {
			r->valor = r->No_da_dir->valor;
			r->No_da_dir = 0;
			return true;
		}
		else if (r->No_da_dir != 0 && r->No_da_esq != 0) {
			if (r->No_da_esq->No_da_esq == 0 || r->No_da_esq->No_da_dir == 0) {
				r->valor = r->No_da_esq->valor;
				r->No_da_esq = 0;
				return true;
			}
			else if (r->No_da_dir->No_da_esq == 0 || r->No_da_dir->No_da_dir == 0) {
				r->valor = r->No_da_dir->valor;
				r->No_da_dir = 0;
				return true;
			}
			else {
				r->valor = percorrerDireita(r->No_da_esq)->valor;
				delete percorrerDireita(r->No_da_esq);
				return true;
			}
		}
	}
	else if (r->valor > v) {
		if (r->No_da_esq == nullptr) {
			return false;
		}
		else {
			return remover(r->No_da_esq, v);
		}
	}
	else {
		if (r->No_da_dir == nullptr) {
			return false;
		}
		else {
			return remover(r->No_da_dir, v);
		}
	}
}

No * Arvore::retornarRaiz(No * r, int v)
{
	if (r->valor == v) {
		return nullptr;
	}
	else if (r == nullptr) {
		return nullptr;
	}
	else if (r->valor > v) {
		if (r->No_da_esq->valor == v) {
			return r;
		}
		else {
			retornarRaiz(r->No_da_esq, v);
		}
	}
	else {
		if (r->No_da_dir->valor == v) {
			return r;
		}
		else {
			retornarRaiz(r->No_da_dir, v);
		}
	}
}
