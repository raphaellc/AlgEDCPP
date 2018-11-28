#include "Arvore.h"



Arvore::Arvore()
{
	raiz = 0;
	nelementos = 0;
}


Arvore::~Arvore()
{

}

void Arvore::inserir(int n)
{
	novo = new No;
	novo->valor = n;
	novo->dir = 0;
	novo->esq = 0;
	if (raiz == 0) {
		raiz = novo;
		nelementos++;
}
else  {
	no = raiz;
	inserir(novo, raiz);
}
}

bool Arvore::pesquisar(int v)
{
	if (v == raiz->valor) {
		return true;
}
	else {
	
		pesquisar(raiz, v);
	}
	}

bool Arvore::remover(int v)
{
	if (raiz->valor == v && raiz->esq == 0 && raiz->dir == 0) {
		delete raiz;
		return true;
	}
	else {
		remover(v, raiz);
	}
}

No* Arvore::ultimoDir(No *r)
{
	if (r->dir == 0) {
		return r;
	}
	else {
		ultimoDir(r->dir);
	}
}

No* Arvore::ultimoEsq(No *r)
{
	if (r->esq == 0) {
		return r;
	}
	else {
		ultimoDir(r->esq);
	}
}

void Arvore::inserir(No * n, No *r)
{
	if (r->valor == n->valor) {
		//ja existe
		delete n;
	}
	else if (r->valor < n->valor)//vai p direita
	{
		if (r->dir == 0) {
			r->dir = n;
			nelementos++;
		}
		else {
			inserir(n, r->dir);
		}
	}
	else {
		if (r->esq == 0) {
			r->esq = n;
			nelementos++;
		}
		else {
			inserir(n, r->esq);
		}
	}
}

bool Arvore::pesquisar(No *r, int v)
{

	 if (r->valor >= v)//vai p esquerda
	{
		 if(r->esq != 0){
			 if (r->esq->valor == v) {
			
				 return true;
			 }
			 else {
				 pesquisar(r->esq, v);
			 }
		 }
		 else {
			 return false;
		 }
	}
	 else if (r->valor< v) {
		 if (r->dir != 0) {
			 if (r->dir->valor == v) {
				 return true;
			 }
			 else {
				 pesquisar(r->dir, v);
			 }
		 }
		 else{
			 return false;
		 
		 }
	 }
	
}

bool Arvore::remover(int v, No * r)
{
	 No *aux;
	 if (v == r->valor) {
		 if (r->esq > 0 || r->dir > 0) {
			 if (r->esq < r->dir) {
				 if (r->dir->valor == ultimoEsq(r->dir)->valor) {
					 if (r->dir->dir != 0) {
						 aux = r->dir->esq;
						 r->valor = r->dir->valor;
						 delete  r->dir->dir;
						 r->dir = aux;
						 return true;
					 }
					 else {
						 r->valor = r->dir->valor;
						 delete r->dir;
						 return true;
					 }
				 }
				 else {
					 aux->valor = ultimoEsq(r->dir)->valor;
					 delete ultimoEsq(r->dir);
					 r->valor = aux->valor;
					 return true;
				 }

			 }
			 else {
				 if (r->esq->valor == ultimoDir(r->esq)->valor) {
					if (r->esq->esq != 0) {
						aux = r->esq->esq;
						r->valor = r->esq->valor;
						delete  r->esq->esq;
						r->esq = aux;
						return true;
					}
					else {
						r->valor = r->esq->valor;
						delete r->esq;
						return true;
					}
				}
				else {
					aux->valor = ultimoDir(r->esq) ->valor;
					delete ultimoDir(r->esq);
					r->esq->valor = aux->valor;					
					return true;
				}
			 }
		 }
		 else {
			 return false;
		 }
	 }
	else if (r->valor > v)//vai p esquerda
	{
		if (r->esq != 0) {
			if (r->esq->valor == v) {
				if (r->esq->valor == ultimoDir(r->esq)->valor) {
					if (r->esq->esq != 0) {
						aux = r->esq->esq;
						delete  r->esq->esq;
						r->esq = aux;
						return true;
					}
					else {
						delete r->esq;
						return true;
					}
				}
				else {
					aux->valor = ultimoDir(r->esq) ->valor;
					delete ultimoDir(r->esq);
					r->esq->valor = aux->valor;					
					return true;
				}
			}
			else {
				remover(v, r->esq);
			}
		}
		else {
			return false;
		}
	}
	else if (r->valor < v)//vai p esquerda
	{
		if (r->dir != 0) {
			if (r->dir->valor == v) {
				if (r->dir->valor == ultimoEsq(r->dir)->valor) {
					if (r->dir->dir != 0) {
						aux = r->dir->dir;
						delete  r->dir->dir;
						r->dir = aux;
						return true;
					}
					else {
						delete r->dir;
						return true;
					}
				}
				else {
					aux->valor = ultimoEsq(r->dir)->valor;
					delete ultimoEsq(r->dir);
					r->dir->valor = aux->valor;
					return true;
				}
			}
			else {
				remover(v, r->dir);
			}
		}
		else {
			return false;
		}
	}
}

	