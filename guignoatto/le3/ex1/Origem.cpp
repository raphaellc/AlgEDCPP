#include "Pessoa.h"
#include "Rico.h"
#include "Pobre.h"
#include "Miseravel.h"

int main()
{
	setlocale(LC_ALL, "ptb");

	Miseravel miseravel;
	Pobre pobre;
	Rico rico;
	
	//A��es rico
	rico.fazCompras();
	rico.Pessoa_();

	cout << endl;

	//A��es pobre
	pobre.trabalhar();
	pobre.Pessoa_();

	cout << endl;

	//A��es miser�vel
	miseravel.mendigar();
	miseravel.Pessoa_();

	system("pause");
	return 0;
}