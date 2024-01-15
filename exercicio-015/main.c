#include <stdio.h>


/* 
   Prof. Saulo Santos
   
   Jo�o deseja comprar um notebook que custa R$8000,00.
   
   Pagando a vista, Jo�o conseguir� um desconto de 10%. 
   Pagando em duas vezes, conseguir� um desconto de 5%. 
   
   Escreva um programa que apresente o valor a ser pago pelo notebook nas duas condi��es acima.
    
     
*/

float desconto(float valor, float taxa){
	taxa = 1 - taxa/100; // 0.05  // 0.95
	return valor * taxa;  // 8000 * 0.95 // 7600
}

int main(void) {
	float valor;	
	
	//Entrada de Dados
	valor = 8000;	
	
	//Processamento de Dados	
	
	//Sa�da de Dados
	printf("Valor com 10%% de desconto = R$ %.2f\n",desconto(valor,10));
	printf("Valor com  5%% de desconto = R$ %.2f\n",desconto(valor,5));
	
	return 0;
}
