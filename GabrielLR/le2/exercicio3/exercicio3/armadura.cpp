#include "armadura.h"

armadura::armadura()
{
}

armadura::~armadura()
{
}

void armadura::status()
{
	int choose;
	std::cout << "Voc� deseja vestir o seu colete?\n"
		      << "1. Sim 2.N�o" << std::endl;
	std::cin >> choose;
	if (choose == 1) 
	{
		std::cout << "Colete Pesado: Vestido." << std::endl;
	}
	else if (choose = 2) 
	{
		std::cout << "Colete Pesado: N�o Vestido" << std::endl;
	}
}
