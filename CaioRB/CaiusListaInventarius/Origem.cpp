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
#include"Player.h"

using namespace std;

int main() 
{	
	Inventario*lst_item = new Inventario;
	Player* player = new Player;
	player->item->nome_item = "Espada";
	player->item->num = 1;
	lst_item->insereFimInventario(player->item);
	system("pause");
	return 0;
}