#include "Novo.h"
#include<iostream>

using namespace std;

Novo::Novo()
{
}


Novo::~Novo()
{
}

void Novo::imprimeValor()
{
	cout << "O im�vel de endere�o " << endereco << " custa " << valor + 500000 << " dinheiros" << endl;
}
