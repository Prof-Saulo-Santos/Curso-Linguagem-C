/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 38/170
    ================

    Escreva um programa que leia (ou atribua) um n�mero inteiro entre 1 e 7. 
    Avalie esse n�mero e imprima uma mensagem identificando a qual dia da semana esse n�mero representa.
   
*/    

#include <stdio.h>


int main(void) {
     
    int dia=7;
    
	switch(dia){
	  case (1):printf("domingo");      break;
	  case (2):printf("segunda-feira");break;
	  case (3):printf("ter�a-feira");  break; 
	  case (4):printf("quarta-feira"); break;
	  case (5):printf("quinta-feira"); break;
	  case (6):printf("sexta-feira");  break;
	  case (7):printf("sabado");       break;	
	  default: printf("Erro: Numero invalido");
	}
	
	return 0;
}

//Altere essa solu��o! 
//Crie uma solu��o usando if-else aninhados e 
//poste no coment�rios do v�deo para eu corrigir!
