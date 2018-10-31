/* Autor: Raphael Leite Campos
 * Data Atualiza��o: 31/10/18
 * Especifica��o: Insere n� no final da lista; In�cio da fila coincide com o in�cio da lista, 
 * e final da fila com o final da lista.
 */
#pragma once
#include "Lista.h"
#include "Pessoa.h"
class FilaPessoas :
	public Lista<Pessoa>
{
public:
	FilaPessoas();
	~FilaPessoas();
	void enfilierar(Pessoa * p);
	void desenfileirar();
	//retorna a pessoa do in�cio da fila
	Pessoa inicioFila();

	//retorna a pessoa do final da fila
	Pessoa fimFila();
};

