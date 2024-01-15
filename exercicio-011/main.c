#include <stdio.h>
#include <math.h>
#include <locale.h>

/* 
   Prof. Saulo Santos
   
   Um carro sai da cidade de Uberlândia/MG em direção a cidade de São José dos Campos/SP com velocidade média de 
   85km/h. 
   Sabe-se que a distância entre estas duas cidades é 649km e que o motorista saiu às 13:00h. 
   Calcule e escreva a hora em que o motorista irá chegar em São José dos Campos.
   
   Análise dos dados do problema:
   
		 - distância: 649km
   		 - horário de saída: 13 horas
   		 - velocidade média: 85km/h
   		 
   	Fórmula para resolver o problema:
   	
   		 tempo gasto = distância / velocidade média
   		 
   	Observe caro aluno: 
   	
   		Você deseja calcular o 'tempo gasto' para depois acrescentá-lo ao valor inicial de 13 horas.   		  		
   	  

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
	
	//Saída de Dados
	printf("Resposta = %0.0f horas e %0.0lf minutos\n",tempoGasto,minuto);
	return 0;
}
