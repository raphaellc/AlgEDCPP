#include <iostream>
#include "No.h"
#include "Inventario.h"
#include "Lista.h"
#include "PilhaPessoas.h"
#include <string>
#include"Player.h"


int main() {
	

	Inventario * lst_item = new Inventario();
	//PilhaPessoas * iPilha = new PilhaPessoas();
	Player* player = new Player;

	std::cout << "\n";

	//-1º_Pessoa_da_Lista-------------------------------------------------------------//

	player->item->s_nome = "Espada Demoniaca";
	player->item->Posicao = 1;
		
	lst_item->insereFimInventario(player->item);
	
	//--------------------------------------------------------------------------------//

	//Imprime a lista
	lst_item->percorreInventario(lst_item->lista);

	//Imprime o topo
	//std::cout << iPilha->topo().s_nome << std::endl;

	std::cout << "\n\n";

	system("pause");
	return 0;
}