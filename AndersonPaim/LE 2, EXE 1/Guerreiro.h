#pragma once
#include <string>
#include <iostream>

using namespace std;

class Guerreiro
{


public:
	Guerreiro();
	~Guerreiro();

	string getNome();
	int getIdade();
	bool Escudo;
	bool Espada;
	void Equipamentos();
	void Ataque();
	void Andar();
	void Falar();
	void Curar();

protected:

	string Nome;
	int Idade;





};

/*

2. Modifique a solu��o do problema 1 de forma a contemplar as seguintes classes: cl�rigo, mago,
ladino, sacerdote da luz, sacerdote das trevas, bardo, b�rbaro, paladino e ranger. Procure
primeiramente agrupar estas classes por caracter�sticas comuns e na fase de projeto organize uma
�rvore hier�rquica para auxili�-lo na cria��o das classes base e derivadas. Se precisares de
informa��es sobre estas classes consulte � Internet.

*/