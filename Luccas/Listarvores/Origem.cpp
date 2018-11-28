#include"Arvore.h"
#include<iostream>
using namespace std;

int main()
{
	Arvore arvore;
	arvore.inserir(16);
	arvore.inserir(11);
	arvore.inserir(22);
	arvore.inserir(8);
	arvore.inserir(17);
	cout << boolalpha;
	
	cout << "Raiz do 22: " << arvore.retornarRaiz(22)->valor << endl;
	cout << "Raiz do 16: " << arvore.retornarRaiz(16) << endl;
	cout << "Raiz do 11: " << arvore.retornarRaiz(11)->valor << endl;
	cout << "Raiz do 8: " << arvore.retornarRaiz(8)->valor << endl;
	
	cout << endl;
	cout << "Pesquisar 22: " << arvore.pesquisar(22) << endl;
	cout << "Remover 22: " << arvore.remover(22) << endl;
	cout << "Pesquisar 22: " << arvore.pesquisar(22) << endl;
	
	cout << endl;

	cout << "Pesquisar 8: " << arvore.pesquisar(8) << endl;
	cout << "Remover 8: " << arvore.remover(8) << endl;
	cout << "Pesquisar 8: " << arvore.pesquisar(8) << endl;
	system("pause");
	return 0;
}