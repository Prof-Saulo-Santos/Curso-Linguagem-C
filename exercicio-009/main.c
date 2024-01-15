#include <stdio.h>
#include <locale.h>

/* 
   Prof. Saulo Santos
   
   Escreva um programa que calcule a quantidade de dias que faltam para o final do ano. 
   O usuário deverá digitar os seguintes dados de entrada:
   
	- dia e mês	
	
   Obs.: Adote 30 dias para todos os meses do ano.
*/

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, resposta;	
	
	//Entrada de Dados
	printf("Dia: ");
	scanf("%d",&dia);
	
	printf("Mes: ");
	scanf("%d",&mes);	
	//Processamento de Dados
	
	resposta = 30 - dia;
	
	resposta = resposta + (12-mes)*30;
	
	//Saída de Dados
	printf("Resposta: %d",resposta);
	
	return 0;
}
