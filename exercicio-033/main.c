/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 33/170
    ==============   

   Esse � um exerc�cio simples que visa treinar o uso de if..else aninhados.
   Voc� deve escrever um c�digo que declare e atribua valores diferentes para tr�s vari�veis tipo int.
   Em seguida, deve imprimir o maior n�mero atribuido. 
   
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
