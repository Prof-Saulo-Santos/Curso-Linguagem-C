/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 26/170
    ==============

Uma montadora de automóveis sediada na cidade de Camaçari/BA produz um modelo de automóvel que tem
custo final para o cliente o valor de R$220.000,00. Sabe-se que o lucro da montadora é de 10% e que o
lucro da agência que vende o automóvel é de 5% sobre o preço que vem da montadora. 
Calcule e imprima o valor do automóvel sem os lucros da montadora (10%) e da agência (5%). 

Escreva uma função que:

- Receba, por meio de seus argumentos, o valor do automóvel pago pelo cliente (R$220.000,00).

- Retorne o valor de produção do automóvel. 

Essa é a resposta: R$ 190.476,19

*/

#include <stdio.h>

float CustoAutomovel(double taxaMontadora, double taxaAgencia, double valorAutomovel){
	return valorAutomovel / (1 +   taxaAgencia/100.0) / (1 + taxaMontadora/100.0);
}

int main() {
	double taxaMontadora = 10.0;
	double taxaAgencia = 5.0;
	double valorAutomovel = 220000.0;
	
    	//Chamada da Função e Saída de Dados
    
	printf("Custo de Producao do automovel = %.2lf",CustoAutomovel(taxaMontadora,taxaAgencia,valorAutomovel));
	return 0;
}
