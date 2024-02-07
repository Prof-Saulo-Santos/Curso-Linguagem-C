/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 24/170
    ==============

   Escreva uma fun��o que retorne o sal�rio liquido de um sal�rio bruto enviado como argumento.
   Os descontos s�o:

	- INSS: 8%
	- IR: 15%
	- faltas n�o justificadas: R$100,00 por dia
	
   Essa fun��o deve receber os seguintes argumentos:

	- salario bruto
	- quantidade de faltas
	
   Essa fun��o deve imprimir os valores descontados	
	
   Essa fun��o deve retornar o sal�rio l�quido
*/

#include <stdio.h>
#include <math.h>

double SalarioLiquido(double salario, int qtdFaltas, double valorINSS, double valorIR, double valorFaltas ){	
	valorINSS = salario * valorINSS/100.0;
	valorIR = salario * valorIR/100.0;
	valorFaltas = qtdFaltas * valorFaltas;
	
	printf("INSS = %.2f\n",valorINSS);
	printf("IR = %.2f\n",valorIR);
	printf("Faltas = R$%.2f\n",valorFaltas);
	
	return salario - (valorINSS+valorIR+valorFaltas);
}

void main() {
	
	double valorINSS, valorIR, valorFaltas;
	
	valorINSS = 14.0;
	valorIR = 7.0;
	valorFaltas = 120.0;

	printf("Salario Liquido = %.2lf",SalarioLiquido(5000.00,2,valorINSS,valorIR,valorFaltas));
}
