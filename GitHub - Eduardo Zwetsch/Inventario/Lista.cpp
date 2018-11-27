/*#include "Lista.h"



Lista::Lista()
{
	this->tam = 0;
}


Lista::~Lista()
{
}

void Lista::percorreLista(No * lista)
{
	if (lista != nullptr) {
		percorreLista(lista->proximo);
	}
}

void Lista::insereFimLista(No * no)
{
	if (this->lista == nullptr) { //se é vazia
		this->lista = no;//insere o primeiro elemento
		this->tam++;
	}
	else {
		this->lista_aux = this->lista; //inicializa variavel aux
		//enquanto não chegou no último nó da lista
		while (this->lista_aux->proximo != nullptr) {
			this->lista_aux = this->lista_aux->proximo;
		}
		//lista_aux aponta para o último nó da lista
		this->lista_aux->proximo = no; //atribui novo nó
		this->tam++;
	}
}

void Lista::insereEm(int posicao, No * no)
{
	//declarar o índice
	int i = 0;
	No * no_ant = nullptr;
	//inicializa o ponteiro para percorrer a lista
	this->lista_aux = this->lista;
	no_ant = this->lista;
	if (posicao <= this->tam) {

		while (i <= posicao) {
			if (i == posicao) {
				//atualiza o nó
				if (listaVazia()) {
					insereFimLista(no);
				}
				else {
					if (posicao == 0) {
						//@todo insereInicioLista ou push_front
						no->proximo = this->lista;
						this->lista = no;
					}
					else {
						no->proximo = this->lista_aux;
						no_ant->proximo = no;
					}
				}
				this->tam++;
			}
			//atualiza o nó anterior
			no_ant = this->lista_aux;
			this->lista_aux = this->lista_aux->proximo;
			i++;
		}
	}
	else {
		//posicao inválida
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
	if (this->lista != nullptr) {
		this->lista_aux = this->lista;
		while (this->lista_aux != nullptr) {
			//primeiro passo: atualizar lista_aux para o próximo nó
			this->lista_aux = this->lista->proximo;
			//segundo passo: deletar o nó
			delete this->lista;
			//terceiro passo: atualizar a lista para o próximo nó
			this->lista = this->lista_aux;
		}
	}
}*/