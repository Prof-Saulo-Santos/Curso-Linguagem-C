/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 25/170
    ==============

    Uma empresa sediada na cidade de Castro/PR produz e vende leite em caixas. 
    Essa empresa deseja inovar na dimensão da sua embalagem que atualmente comparta o volume de 1 litro. 
    Escreva um programa que permita ao usuário digitar o valor (em centímetros) das três (x,y,z) dimensões desta 
    nova embalagem. 

   Escreva uma função que:
   - Receba, por meio de seus argumentos, os valores das três dimensões (x,y,z) em centímetros.
   - Retorne o volume em litros.

   Dados para o desenvolvimento do código:

   - 1.0 Litro = 1000.0cm3

   Dica: Se você multiplicar os argumentos 'x', 'y' e 'z' que estão em 'cm', vai obter um valor em 'cm3'.
*/

#include <stdio.h>

double VolumeCaixa(double x, double y, double z){	
	return (x*y*z)/1000.0;
}

int main() {
	double x, y, z;
	
	//Entrada de Dados
	printf("Digite o valor da dimensao X da caixa em cm: "); scanf("%lf",&x);
    	printf("Digite o valor da dimensao Y da caixa em cm: "); scanf("%lf",&y);
    	printf("Digite o valor da dimensao Z da caixa em cm: "); scanf("%lf",&z);
    
    	//Chamada da Funcao e Saida de Dados
	printf("Salario Liquido = %.1lfL",VolumeCaixa(x,y,z));
	return 0;
}
