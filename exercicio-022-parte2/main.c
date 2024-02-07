/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 22/170 - parte 2
    ======================
    Escopo de Variáveis, tempo de vida, visibilidade e classes de armazenamento
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
 double investimento (double valor, double taxa, double mes) {
 	
 	return (valor * (taxa/100) * mes) + valor ;
 	
 } 	
 
int main (void) {
	
	double valor, taxa, mes, valorTotal;
	
	printf("Digite o Valor que deseja investir: R$");
	scanf("%lf", & valor);
	
	printf("digite quantos meses tera sua aplicacao: ");
	scanf("%lf", & mes);
	
	taxa = 3.0;
	
	valorTotal = investimento(valor, taxa, mes);
	
	printf("Esse investimento ira lhe render R$%.2lf", valorTotal);
   
   return 0;	
}
