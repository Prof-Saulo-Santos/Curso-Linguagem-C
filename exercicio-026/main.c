/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 26/170
    ==============

Uma montadora de autom�veis sediada na cidade de Cama�ari/BA produz um modelo de autom�vel que tem
custo final para o cliente o valor de R$220.000,00. Sabe-se que o lucro da montadora � de 10% e que o
lucro da ag�ncia que vende o autom�vel � de 5% sobre o pre�o que vem da montadora. 
Calcule e imprima o valor do autom�vel sem os lucros da montadora (10%) e da ag�ncia (5%). 

Escreva uma fun��o que:

- Receba, por meio de seus argumentos, o valor do autom�vel pago pelo cliente (R$220.000,00).

- Retorne o valor de produ��o do autom�vel. 

Essa � a resposta: R$ 190.476,19

*/

#include <stdio.h>

float CustoAutomovel(double taxaMontadora, double taxaAgencia, double valorAutomovel){
	return valorAutomovel / (1 +   taxaAgencia/100.0) / (1 + taxaMontadora/100.0);
}

int main() {
	double taxaMontadora = 10.0;
	double taxaAgencia = 5.0;
	double valorAutomovel = 220000.0;
	
    	//Chamada da Fun��o e Sa�da de Dados
    
	printf("Custo de Producao do automovel = %.2lf",CustoAutomovel(taxaMontadora,taxaAgencia,valorAutomovel));
	return 0;
}
