/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 28/170
    ==============

Um fabricante de sandálias de couro em Campina Grande/PB premia seus 
funcionários com um aumento de 10% no salário quando a meta de produção 
mensal é ultrapassada.Escreva um programa que (preferencialmente use funções):
Leia:
	- A quantidade de sandálias produzidas por um determinado funcionário.	
	- O valor do salário mensal.	
	- A quantidade de sandálias a ser produzida (meta).	
Calcule:	
	- Se a produção bateu a meta, então o salário deve receber o acréscimo 
	  de 10% sobre o salário.	
Imprima:	
	- O salário novo desse funcionário.
*/


#include <stdio.h>


double ChecaMeta(double salario, double premio, int meta, int qtdSandalias){	
	if (qtdSandalias > meta) salario = salario * premio;	
	return salario;
}

double ConvertePorcentagem(double taxa){
	return (1 + taxa/100.0); 
}

int main() {

	int qtdSandalias = 0; 
	int meta = 200;
	double salario = 2500.0;	
	double taxaPremio = 10; // equivale a 10%
	
	printf("Salario atual R$ %.2lf:\n",salario);	

	printf("Digite a quantidade sandalias produzidas: ");
	scanf("%d",&qtdSandalias);
	
	taxaPremio = ConvertePorcentagem(taxaPremio);
	salario = ChecaMeta(salario, taxaPremio, meta,qtdSandalias);
	
	printf("Salario final R$ %.2lf:",salario);
	
	return 0;
}

