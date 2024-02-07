#include <stdio.h>
/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 29/170
    ==============

Escreva um programa que permita ao usuário digitar um número inteiro. 
O programa deve analisar esse número e imprimir uma das seguintes mensagens:
  
  "Número ímpar" ou "Número par."

*/

void parImpar(int numero){
	
	if (numero % 2 == 0)         // Tem duvida sobre o sinal de resto? Assista a aula 6 (parte 3) para entender.
                  printf("Numero par: %d",numero);
	else
	    printf("Numero impar: %d",numero);
}

int main() {

	int n;
	
	printf("Digite um numero: ");scanf("%d",&n);
	
	parImpar(n);
	
	return 0;
}
