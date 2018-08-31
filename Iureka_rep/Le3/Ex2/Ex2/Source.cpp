/*2. Crie uma classe chamada �Ingresso� que possui um valor em reais e um m�todo
imprimeValor().
a. Crie uma classe �VIP�, que herda Ingresso e possui um valor adicional. Crie um m�todo
que retorne o valor do ingresso VIP (com o adicional inclu�do).
b. Crie uma classe �Normal�, que herda Ingresso e possui um m�todo que imprime:
"Ingresso Normal�.
c. Crie uma classe �CamaroteInferior� (que possui a localiza��o do ingresso e m�todos
para acessar e imprimir esta localiza��o) e uma classe �CamaroteSuperior�, que �
mais cara (possui valor adicional). Esta �ltima possui um m�todo para retornar o valor
do ingresso. Ambas as classes herdam a classe �VIP�.*/
#include"CamaroteInferior.h"
#include"CamaroteSuperior.h"
#include"Normal.h"

#pragma once
int main()
{
	Normal normal;
	normal.imprimeValor();

	VIP vip;
	vip.imprimeValor();

	CamaroteInferior camInf;
	camInf.imprimeValor();
	camInf.getImprimeLocal();

	CamaroteSuperior camSup;
	camSup.imprimeValor();
	camSup.getImprimeLocal();
	
	system("pause");
	return 0;
}