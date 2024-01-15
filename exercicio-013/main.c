#include <stdio.h>
#include <stdlib.h>

/* 
   Prof. Saulo Santos
   
   Escrever um programa que gere um número aleatório dentro de uma determinada faixa digitada pelo usuário. 
   Por exemplo, um número entre 10 e 20. 
*/

int main(void) {
    int a=-1, b=1, resposta;
	
    int i,j;
    
    srand(time(NULL));    
    for (j=0; j<20;j++){
	    resposta = a + rand() % (b+1-a);

    printf("%d\n",resposta);             // 0 e 32767
}
    
    
    return 0; 		
}
