#include "Velho.h"
#include<iostream>

using namespace std;

Velho::Velho()
{
}


Velho::~Velho()
{
}

void Velho::imprimeValor()
{
	cout << "O im�vel de endere�o " << endereco << " custa " << valor - 500000 << " dinheiros" << endl;
}
