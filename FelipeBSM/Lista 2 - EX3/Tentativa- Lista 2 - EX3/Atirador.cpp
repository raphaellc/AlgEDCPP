#include "pch.h"
#include "Atirador.h"

#include <iostream>

using namespace std;


Atirador::Atirador()
{
}


Atirador::~Atirador()
{
}

void Atirador::usarA()
{
	armor.protection();


}

void Atirador::tiro()
{
	int opcao;
	char opcao2, opcao3;
	char opcao5, opcao6, opcao8, opcao9;
	int opcao4, opcao7, opcao10, opcao11;

	std::cout << "Selecione sua arma: [1]Pistola, [2]Rifle, [3]Carabina." << "\n";
	std::cin >> opcao;


	if (opcao == 1)
	{

		pistola.info3();

		cout << "Aperte T para atirar:" << "\n";
		cin >> opcao2;

		if ((opcao2) = 'T')
		{

			pistol.pente = 0;
			cout << "Voc� atirou! Muni��o atual: " << pistol.pente << "\n";


			cout << "Aperte R para recarregar:" << "\n";
			cin >> opcao3;
			if ((opcao3 = 'R') || (opcao3 = 'r'))
			{

				pistol.pente = 15;
				cout << "Voc� recarregou! Muni��o atual: " << pistol.pente << " balas no pente." << "\n";
				cout << "Caracter�sticas desta muni��o: Dano: " << pistol.dano << " / Dano B�nus: " << pistol.danobonus << endl;
			}
			else
			{
				cout << "Voc� n�o recarregou sua muni��o!" << "\n";
			}


		}
		else
		{
			cout << "Voc� tem que atirar pf." << "\n";
		}

		cout << "Para trocar de arma selecione: [1]Rifle, [2]Carabina." << endl;
		cin >> opcao4;

		if (opcao4 == 1)
		{
			cout << "Voc� trocou para o Rifle:" << endl;


			rifle.info2();



		}
		else if (opcao4 == 2)
		{
			carabina.info();
		}

	}
	else if (opcao == 2)
	{
		rifle.info2();

		cout << "Aperte T para atirar:" << "\n";
		cin >> opcao5;

		if ((opcao5) = 'T')
		{

			rifleA.pente = 0;
			cout << "Voc� atirou! Muni��o atual: " << rifleA.pente << "\n";


			cout << "Aperte R para recarregar:" << "\n";
			cin >> opcao6;
			if ((opcao6 = 'R') || (opcao6 = 'r'))
			{


				rifleA.pente = 8;
				cout << "Voc� recarregou! Muni��o atual: " << rifleA.pente << " balas no pente." << "\n";
				cout << "Caracter�sticas desta muni��o: Dano: " << rifleA.dano << " / Dano B�nus: " << rifleA.danobonus << endl;
			}
			else
			{
				cout << "Voc� n�o recarregou sua muni��o!" << "\n";
			}


		}
		else
		{
			cout << "Voc� tem que atirar pf." << "\n";
		}
		cout << "Para trocar de arma selecione: [1]Pistola, [2]Carabina." << endl;
		cin >> opcao7;

		if (opcao7 == 1)
		{
			cout << "Voc� trocou para a Pistola:" << endl;


			pistola.info3();



		}
		else if (opcao7 == 2)
		{
			carabina.info();
		}

	}
	else if (opcao == 3)
	{

		carabina.info();
		cout << "Aperte T para atirar:" << "\n";
		cin >> opcao8;

		if ((opcao8) = 'T')
		{

			carabinaA.pente = 0;
			cout << "Voc� atirou! Muni��o atual: " << carabinaA.pente << "\n";


			cout << "Aperte R para recarregar:" << "\n";
			cin >> opcao9;
			if ((opcao9 = 'R') || (opcao9 = 'r'))
			{


				carabinaA.pente = 30;
				cout << "Voc� recarregou! Muni��o atual: " << carabinaA.pente << " balas no pente." << "\n";
				cout << "Caracter�sticas desta muni��o: Dano: " << carabinaA.dano << " / Dano B�nus: " << carabinaA.danobonus << endl;
			}
			else
			{
				cout << "Voc� n�o recarregou sua muni��o!" << "\n";
			}
			cout << "Para trocar de arma selecione: [1]Pistola, [2]Rifle." << endl;
			cin >> opcao10;

			if (opcao10 == 1)
			{
				cout << "Voc� trocou para a Pistola:" << endl;


				pistola.info3();



			}
			else if (opcao10 == 2)
			{
				rifle.info2();
			}

		}
		else
		{
			cout << "Voc� tem que atirar pf." << "\n";
		}
	}
	else
	{
		cout << "Arma n�o dispon�vel. " << " \n";
	}
	
}

void Atirador::kitzao()
{
	kit.hp();
}
