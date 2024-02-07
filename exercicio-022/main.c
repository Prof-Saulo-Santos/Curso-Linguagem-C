/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 22/170
    ==============
    Escopo de Variáveis, tempo de vida, visibilidade e classes de armazenamento
*/

#include <stdio.h>

int global=4;
int a,b,c,d;

void teste(){
	int b;
	printf("%d",global);
}

int main(void) {	
	int a=5;
	
	for(int i=1;i<3;i++)
	{
		int a=2;
		int bloco;
		printf("bloco = %d\n",a);
	}
	
	printf("local = %d",i);	
		
	return 0;
}
