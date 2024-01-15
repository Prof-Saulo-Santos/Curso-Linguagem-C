#include <stdio.h>
#include <locale.h>
#include <math.h>

/* 
   João vai investir R$ 1000,00 numa aplicação financeira que vai lhe render 3% de juros ao mês por 5 meses.      
   Escreva um programa (com o uso de funções) que calcule e escreva o montante obtido após o término da aplicação.
 */
double aplicacao(double capitalInicial, double taxa, int tempo){
	return capitalInicial * pow((1+taxa/100.0),tempo);
}

int main(void) {
	double capitalInicial = 10000.0, taxa = 10.0, montante;
	int tempo = 3;

	montante = aplicacao(capitalInicial, taxa, tempo);
	
	printf("Montante R$: %0.2lf",montante);
	
	return 0;
}
