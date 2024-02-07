/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 28/170
    ==============

Um fabricante de sand�lias de couro em Campina Grande/PB premia seus 
funcion�rios com um aumento de 10% no sal�rio quando a meta de produ��o 
mensal � ultrapassada.Escreva um programa que (preferencialmente use fun��es):
Leia:
	- A quantidade de sand�lias produzidas por um determinado funcion�rio.	
	- O valor do sal�rio mensal.	
	- A quantidade de sand�lias a ser produzida (meta).	
Calcule:	
	- Se a produ��o bateu a meta, ent�o o sal�rio deve receber o acr�scimo 
	  de 10% sobre o sal�rio.	
Imprima:	
	- O sal�rio novo desse funcion�rio.
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

