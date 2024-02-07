/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 38/170
    ================

    Escreva um programa que leia (ou atribua) um número inteiro entre 1 e 7. 
    Avalie esse número e imprima uma mensagem identificando a qual dia da semana esse número representa.
   
*/    

#include <stdio.h>


int main(void) {
     
    int dia=7;
    
	switch(dia){
	  case (1):printf("domingo");      break;
	  case (2):printf("segunda-feira");break;
	  case (3):printf("terça-feira");  break; 
	  case (4):printf("quarta-feira"); break;
	  case (5):printf("quinta-feira"); break;
	  case (6):printf("sexta-feira");  break;
	  case (7):printf("sabado");       break;	
	  default: printf("Erro: Numero invalido");
	}
	
	return 0;
}

//Altere essa solução! 
//Crie uma solução usando if-else aninhados e 
//poste no comentários do vídeo para eu corrigir!
