#pragma once

struct No {
	int valor;
	No* Nesq, *Ndir;
};

class Arvore
{

public:
	Arvore();
	~Arvore();
	void inserir(int i);
	bool pesquisar(int v);
	bool remover(int v);
	No* percorrerDireita(No* r);
	No* retornarRaiz(int v);

protected:
	No* raiz, *novo, *nodo;
	int nElementos;
	void inserir(No* r, No * n);
	bool pesquisar(No* r, int v);
	bool remover(No* r, int v);
	No* retornarRaiz(No* r, int v);
};