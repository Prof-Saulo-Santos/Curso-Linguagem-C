/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 33/170
    ==============   

   Esse é um exercício simples que visa treinar o uso de if..else aninhados.
   Você deve escrever um código que declare e atribua valores diferentes para três variáveis tipo int.
   Em seguida, deve imprimir o maior número atribuido. 
   
*/

#include <stdio.h>
#include <stdlib.h>



int verMaior(int x, int y, int z){
int maior;
	if (x>y)
	   maior = x;
	else
	   maior = y;
	   
	if (z>maior) maior = z;
	
	return maior;
}

int main(void) {
	int a=1, b=2, c=3, maior=0;
	
//	if (a>b)
//	   maior = a;
//	else
//	   maior = b;
//	   
//	if (c>maior) maior = c;
	
	printf("%d",verMaior(a, b, c));	
	return 0;
}
