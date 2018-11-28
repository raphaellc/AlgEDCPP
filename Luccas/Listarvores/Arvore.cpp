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
	novo->Nesq = 0;
	novo->Ndir = 0;
	if (nElementos == 0)
	{
		raiz = novo;
		nElementos++;
	}
	else 
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
	if (r->Ndir == 0) {
		return r;
	}
	else {
		percorrerDireita(r->Ndir);
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
		if (r->Nesq == 0)
		{
			r->Nesq = n;
			nElementos++;
		}
		else
		{
			inserir(r->Nesq, n);
		}
	}
	else
	{
		if (r->Ndir == 0)
		{
			r->Ndir = n;
			nElementos++;
		}
		else
		{
			inserir(r->Ndir, n);
		}
	}
}

bool Arvore::pesquisar(No * r, int v)
{
	if (r->valor == v) 
	{
		return true;
	}
	else if (r->valor > v) {
		if (r->Nesq == nullptr) 
		{
			return false;
		}
		else {
			return pesquisar(r->Nesq, v);
		}

	}
	else {
		if (r->Ndir == nullptr) 
		{
			return false;
		}
		else {
			return pesquisar(r->Ndir, v);
		}
	}
}

bool Arvore::remover(No * r, int v)
{
	if (r->valor == v) 
	{
		if (r->Ndir == 0 && r->Nesq == 0) 
		{
			r->valor = 0;
			r = nullptr;
			return true;
		}
		else if (r->Ndir == 0 && r->Nesq != 0) 
		{
			r->valor = r->Nesq->valor;
			r->Nesq = 0;
			return true;
		}
		else if (r->Ndir != 0 && r->Nesq == 0) 
		{
			r->valor = r->Ndir->valor;
			r->Ndir = 0;
			return true;
		}
		else if (r->Ndir != 0 && r->Nesq != 0) {
			if (r->Nesq->Nesq == 0 || r->Nesq->Ndir == 0) 
			{
				r->valor = r->Nesq->valor;
				r->Nesq = 0;
				return true;
			}
			else if (r->Ndir->Nesq == 0 || r->Ndir->Ndir == 0) 
			{
				r->valor = r->Ndir->valor;
				r->Ndir = 0;
				return true;
			}
			else 
			{
				r->valor = percorrerDireita(r->Nesq)->valor;
				delete percorrerDireita(r->Nesq);
				return true;
			}
		}
	}
	else if (r->valor > v) {
		if (r->Nesq == nullptr) 
		{
			return false;
		}
		else
		{
			return remover(r->Nesq, v);
		}
	}
	else 
	{
		if (r->Ndir == nullptr) 
		{
			return false;
		}
		else 
		{
			return remover(r->Ndir, v);
		}
	}
}

No * Arvore::retornarRaiz(No * r, int v)
{
	if (r->valor == v) 
	{
		return nullptr;
	}
	else if (r == nullptr)
	{
		return nullptr;
	}
	else if (r->valor > v)
	{
		if (r->Nesq->valor == v) 
		{
			return r;
		}
		else 
		{
			retornarRaiz(r->Nesq, v);
		}
	}
	else {
		if (r->Ndir->valor == v) 
		{
			return r;
		}
		else 
		{
			retornarRaiz(r->Ndir, v);
		}
	}
}