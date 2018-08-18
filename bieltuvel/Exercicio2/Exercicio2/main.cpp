#include <iostream>
#include <string>
#include "guerreiro.h"

int forcaG = 43;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	guerreiro* Thetoko = new guerreiro();
	//Imprimindo no console as informa��es do Guerreiro Thetoko
	std::cout << "Nome do Guerreiro: " << Thetoko->getNome("Thetoko") << endl;
	std::cout << "For�a do Guerreiro: " << Thetoko->getForca(forcaG) << endl;
	std::cout << "Equipamento: " << Thetoko->getEquip("Espada de Duas M�os") << endl;
	std::cout << "Level: " << Thetoko->getLvl(27) << endl;
	std::cout << "Defesa: " << Thetoko->getDef(43) << endl;

	//Colocando em pr�tica as a��es
	Thetoko->provocar();

	//Se a for�a for maior que 40 ele pode dar uma investida
	if (forcaG >= 40)
	{
		Thetoko->investida();
	}
	//Se n�o, n�o.
	else if (forcaG < 40)
	{
		std::cout << "Voc� n�o tem for�a para dar uma investida!" << endl;
	}

	Thetoko->persuadir();
	Thetoko->deitar();
	Thetoko->atkEspecial();

	system("pause");
	return 0;
}
