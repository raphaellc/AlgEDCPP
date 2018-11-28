#include <iostream>
#include <iomanip>
#include "Arvore.h"

using namespace std;
int main() {
	Arvore arvore;

	
	arvore.inserir(54);
	arvore.inserir(24);
	arvore.inserir(18);
	arvore.inserir(92);
	arvore.inserir(76);
	cout << boolalpha;
	cout << "pesquisar 24: " << arvore.pesquisar(24) << endl;
	cout << "pesquisar 92: " << arvore.pesquisar(92) << endl;
	cout << "pesquisar 237: " << arvore.pesquisar(237) << endl;
	cout << "pesquisar 44: " << arvore.pesquisar(44) << endl;
	system("pause");
	return 0;
}