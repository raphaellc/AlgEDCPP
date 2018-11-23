#include "Lista.h"
Lista::Lista()
{
	this->tam = 0;
}
Lista::~Lista()
{
}

void Lista::percorreLista(No * lista)
{
	if (lista != nullptr) 
	{
		percorreLista(lista->proximo);
	}
}

void Lista::insereFimLista(No * no)
{
	if (this->lista == nullptr)
	{ 
		this->lista = no;
		this->tam++;
	}
	else 
	{
		this->lista_aux = this->lista; 
		while (this->lista_aux->proximo != nullptr) 
		{
			this->lista_aux = this->lista_aux->proximo;
		}
		
		this->lista_aux->proximo = no; 
		this->tam++;
	}
}

void Lista::insereEm(int posicao, No * no)
{
	int i = 0;
	No * no_ant = nullptr;	
	this->lista_aux = this->lista;
	no_ant = this->lista;
	if (posicao <= this->tam) 
	{
		while (i <= posicao)
		{
			if (i == posicao) 
			{				
				if (listaVazia()) {
					insereFimLista(no);
				}
				else {
					if (posicao == 0) 
					{						
						no->proximo = this->lista;
						this->lista = no;
					}
					else 
					{
						no->proximo = this->lista_aux;
						no_ant->proximo = no;
					}
				}
				this->tam++;
			}			
			no_ant = this->lista_aux;
			this->lista_aux = this->lista_aux->proximo;
			i++;
		}
	}
	else 
	{
		
	}
}

int Lista::obtemTamanhoLista()
{
	return this->tam;
}

bool Lista::listaVazia()
{
	if (this->lista == nullptr)
		return true;
	else
		return false;
}

void Lista::esvaziaLista()
{
	if (this->lista != nullptr)
	{
		this->lista_aux = this->lista;
		while (this->lista_aux != nullptr
		{			
			this->lista_aux = this->lista->proximo;		
			delete this->lista;			
			this->lista = this->lista_aux;
		}
	}
}