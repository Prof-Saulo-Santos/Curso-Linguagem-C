#include <stdio.h>
#include <math.h>
#include <locale.h>

/* 
   Prof. Saulo Santos
   
   Um carro sai da cidade de Uberl�ndia/MG em dire��o a cidade de S�o Jos� dos Campos/SP com velocidade m�dia de 
   85km/h. 
   Sabe-se que a dist�ncia entre estas duas cidades � 649km e que o motorista saiu �s 13:00h. 
   Calcule e escreva a hora em que o motorista ir� chegar em S�o Jos� dos Campos.
   
   An�lise dos dados do problema:
   
		 - dist�ncia: 649km
   		 - hor�rio de sa�da: 13 horas
   		 - velocidade m�dia: 85km/h
   		 
   	F�rmula para resolver o problema:
   	
   		 tempo gasto = dist�ncia / velocidade m�dia
   		 
   	Observe caro aluno: 
   	
   		Voc� deseja calcular o 'tempo gasto' para depois acrescent�-lo ao valor inicial de 13 horas.   		  		
   	  

*/

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	double velocidadeMedia, horarioSaida, distancia, tempoGasto, minuto;		
	
	//Entrada de Dados
	velocidadeMedia = 85.0;
	distancia = 649.0;
	horarioSaida = 13.0;
	
	//Processamento de Dados
	tempoGasto = distancia/velocidadeMedia;
	minuto = tempoGasto - trunc(tempoGasto);
	tempoGasto = tempoGasto - minuto + horarioSaida;
	minuto = 60 * minuto;			
	
	//Sa�da de Dados
	printf("Resposta = %0.0f horas e %0.0lf minutos\n",tempoGasto,minuto);
	return 0;
}
