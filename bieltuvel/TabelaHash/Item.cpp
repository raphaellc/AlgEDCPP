#include "stdafx.h"
#include "Item.h"


Item::Item()
{
	
}
//Construtor padr�o passando as informa��es do Item
Item::Item(std::string _nome2, std::string _desc, int _peso)
{
	setNome(_nome2);
	descricao = _desc;
	peso = _peso;
}

Item::~Item()
{
}
//M�todos Get e Set para o nome
std::string Item::getNome()
{
	return nome;
}

void Item::setNome(std::string _nome)
{
	nome = _nome;
}
