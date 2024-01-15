#include <stdio.h>

/* 
   Prof. Saulo Santos
   
   Ana e João jantaram e o valor da conta ficou em R$100,00.
   
   O valor do couvert artístico é de 2% sobre o valor da conta.
   O valor da gorjeta é de 10% sobre o valor da conta.
   
   Escreva um programa que apresente:
   
   - o valor da conta 
   - o valor do couvert artístico 
   - o valor da gorjeta 
   - o valor total da conta
*/
double taxas(double valorConta, double taxa){
	return valorConta * taxa / 100;
}

int main(void) {
	double valorConta=100.0, taxaCouvert=2.0, taxaGorjeta=10.0, vlrCouvert, vlrGorjeta, totalConta;
	
	//Processamento de Dados
	
	vlrCouvert = taxas(valorConta,taxaCouvert);
	vlrGorjeta = taxas(valorConta,taxaGorjeta);
	totalConta = valorConta + vlrCouvert + vlrGorjeta;
	
	//Saída de Dados
	printf("Couvert = R$ %6.2lf\n",vlrCouvert);
	printf("Gorjeta = R$ %6.2lf\n",vlrGorjeta);
	printf("Valor   = R$ %6.2lf\n",valorConta);
	printf("Total   = R$ %6.2lf\n",totalConta);
	return 0;
}
