#include <iostream>
#include<string>
#include "No.h"
#include "ListaPessoas.h"
#include "Lista.h"
#include"PilhaPessoas.h"
#include"FilaPessoas.h"
#include<stack>
#include<queue>
#include"Inventario.h"
#include"Jogador.h"

using namespace std;

//void percorreLista(No * no) {
//	if (no != nullptr) {
//		std::cout << no->pessoa->s_nome << std::endl;
//		percorreLista(no->proximo);
//	}
//}
int main() {

	//ListaPessoas * lp_lista_pessoas = new ListaPessoas();
	//FilaPessoas * fl_pessoas = new FilaPessoas();
	Inventario*lst_item = new Inventario;
	//PilhaPessoas * pilhaP = new PilhaPessoas;
	//Pessoa * pessoa1;
	//definição da lista
	// Definição de uma pessoa

	//stack<Pessoa*> * pilha_pessoas = new stack<Pessoa *>();
	//queue<Pessoa*> * fila_pessoas = new queue<Pessoa *>();


	/*pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	pilha_pessoas->push(pessoa1);*/

	//adicionar esta pessoa no nó.

	//lp_lista_pessoas->insereFimLista(pessoa1);
	//adicionar o nó na lista
//----------------------------------------------------------	
	/*Pessoa * DEUX = new Pessoa;
	DEUX->s_nome = "DEUX";
	DEUX->i_idade = 0;
	pilha_pessoas->push(DEUX);
	while (!pilha_pessoas->empty) {
		cout << pilha_pessoas->top()->s_nome << endl;
		pilha_pessoas->pop();
	}*/
	//-----------------------------------------------------------
		//adicionar novo nó na lista
		//pilhaP->push(DEUX);
		//pilhaP->push(pessoa1);
		//Pessoa p = pilhaP->topo();
		/*fl_pessoas->enfileirar(pessoa1);
		fl_pessoas->enfileirar(DEUX);*/

		//-----------------------------------------------------------
			//cout << p.s_nome << endl;
			//lp_lista_pessoas->insereFimLista(DEUX);
			//lp_lista_pessoas->percorreLista(lp_lista_pessoas->lista);
			//fl_pessoas->desenfileirar();
		//-----------------------------------------------------------
	Jogador* jogador = new Jogador;
	jogador->item->nome_item = "Espada";
	jogador->item->num = 1;

	lst_item->insereFimInventario(jogador->item);

	cout << jogador->item->nome_item << "\n";

	system("pause");
	return 0;
}