#include <iostream>
#include<string>

#include"Arvore.h"

using namespace std;

int main()
{
	Arvore arvore;
	arvore.inserir(15);
	arvore.inserir(10);
	arvore.inserir(22);
	arvore.inserir(7);
	arvore.inserir(17);

	cout << boolalpha;

	cout << "Raiz do 22: " << arvore.retornarRaiz(22)->valor << endl;
	cout << "Raiz do 15: " << arvore.retornarRaiz(15) << endl;
	cout << "Raiz do 10: " << arvore.retornarRaiz(10)->valor << endl;
	cout << "Raiz do 7: " << arvore.retornarRaiz(7)->valor << endl;

	cout << "Pesquisar 22: " << arvore.pesquisar(22) << endl;
	cout << "Remover 22: " << arvore.remover(22) << endl;
	cout << "Pesquisar 22: " << arvore.pesquisar(22) << endl;

	cout << "Pesquisar 7: " << arvore.pesquisar(7) << endl;
	cout << "Remover 7: " << arvore.remover(7) << endl;
	cout << "Pesquisar 7: " << arvore.pesquisar(7) << endl;
	system("pause");
	return 0;
}