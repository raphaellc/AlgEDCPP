#include "pch.h"
#include "Guerreiro.h"
#include <string>
using namespace std;
//GUERREIRO.cpp
/*Assim, estou tentando usar o NEW mas n�o sei se minha aplica��o est� correta. Tinha feito sem ele, mas como na �ltima aula ele foi usado achei melhor usra tbm*/
Guerreiro::Guerreiro()
{
}

Guerreiro::~Guerreiro()
{
}


string Guerreiro::getNome(string n)
{
	nome = n;
	return nome; // retornado o valor que eu atribuir a variavel Nome. 
}

void Guerreiro::coment1() // Com estes void eu estou colocando um comentario como se fosse do torb.
{
	cout << "Meu nome � Torb!!!" << endl;
}



int Guerreiro::getIdade(int d)
{
	idade = d;
	return idade;  // retornado o valor que eu atribuir a variavel Idade. 
}

void Guerreiro::coment2()
{
	cout << "Eu tenho 55 anos de idade!!" << endl;
}



string Guerreiro::getCor(string c)
{
	corCabelo = c;
	return corCabelo; // retornado o valor que eu atribuir a variavel corCabelo. 
}

void Guerreiro::coment3()
{
	cout << "A cor desta palha aqui � Amarela, mas todos chamam isso de loiro!HAHAHAH!" << endl;
}



string Guerreiro::getArma(string a)
{
	arma = a;
	return arma; // retornado o valor que eu atribuir a variavel arma. 
}

void Guerreiro::coment4()
{
	cout << "O que eu uso para FATIAR meus inimigos � um Mini-Machado, muito �til no combate!" << endl;
}


float Guerreiro::getTamanhoArm(float arm)
{
	tamanhoArmadura = arm;
	return tamanhoArmadura; // retornado o valor que eu atribuir a variavel tamanhoArmadura. 
}

void Guerreiro::coment5()
{
	cout << "Tamanho n�o � documento!!" << endl;
}



string Guerreiro::getSexo(string sex)
{
	sexo = sex;
	return sexo; // retornado o valor que eu atribuir a variavel sexo. 
}

void Guerreiro::coment6()
{
	cout << "Todos podemos lutar igualmente!" << endl;
}


string Guerreiro::getHumor(string h)
{
	humor = h;
	return humor;
}

void Guerreiro::coment7()
{
	cout << "� ISSO MESMO, NA MAIOR PARTE DO TEMPO EU SOU MUITO MAS MUITO PUTO!" << endl;
}

string Guerreiro::getEstilo(string e)
{
	EstilodeGame = e;
	return EstilodeGame;
}

void Guerreiro::coment8()
{
	cout << "shiu..." << endl;
}

void Guerreiro::provocar()
{
	
	cout << "Ei seu fracote... VAMOS JOGAR!" << endl;
}

void Guerreiro::lvl()
{
	cout << "Voc� possui um n�vel alto....ISSO � MUITO BOM!" << endl;
}




