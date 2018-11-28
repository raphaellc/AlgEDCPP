#pragma once
struct No {
	int valor;
	No*esq, *dir;
	};
class Arvore
{
public:
	Arvore();
	~Arvore();

	void inserir(int n);
	bool pesquisar(int v);
	bool remover(int v);
protected:
	No* ultimoDir(No *r);
	No* ultimoEsq(No *r);
	No *raiz, *novo, *no;
	int nelementos;
	void inserir(No *n, No *t);
	bool pesquisar(No *r,int v);
	bool remover(int v, No *r);
};

