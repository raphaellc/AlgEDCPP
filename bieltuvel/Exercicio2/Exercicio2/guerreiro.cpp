#include <iostream>
#include "guerreiro.h"
#include <string>

guerreiro::guerreiro()
{
}

guerreiro::~guerreiro()
{
}
//Provoca��o ao Inimigo
void guerreiro::provocar()
{
	std::cout << "Ei, seu bunda mole!" << endl;
}
//Ataque com a Espada
void guerreiro::investida()
{
	std::cout << "Voc� deu uma investida no advers�rio!" << endl;
}
//Expulsando o inimigo sem luta, usando a persuas�o
void guerreiro::persuadir()
{
	std::cout << "Ei, voc�. Saia daqui ou irei te matar!" << endl;
}
//Descanso
void guerreiro::deitar()
{
	std::cout << "Hora de descanso..." << endl;
}
//Ataque especial do Guerreiro
void guerreiro::atkEspecial()
{
	std::cout << "Pelos deuses!!! F�ria dos Little Capetas!" << endl;
}

string guerreiro::getNome(string _nome)
{
	nome = _nome;
	return nome;
}

int guerreiro::getForca(int _forca)
{
	forca = _forca;
	return forca;
}

int guerreiro::getLvl(int _lvl)
{
	lvl = _lvl;
	return lvl;
}

int guerreiro::getDef(int _def)
{
	def = _def;
	return def;
}

string guerreiro::getEquip(string _equip)
{
	equip = _equip;
	return equip;
}




