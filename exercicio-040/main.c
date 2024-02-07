/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 40/170
    ================

João deseja alugar um automóvel que possui as seguintes regras:

   1a.) O valor das três primeiras horas de aluguel é de R$10,00/hora.
   2a.) O valor da quarta hora de aluguel tem 10% de desconto sobre R$10,00.
   3a.) O valor das demais horas (5a. hora em diante) tem um desconto de 15% sobre R$10,00. 

Escreva um programa que leia (ou atribua):

   1o.) O valor da hora base (R$10,00)
   2o.) A quantidade de horas alugada

Defina variáveis para os descontos de 10% e 15%. 
Crie uma função que converta a porcentagem em número.

Este programa deve calcular e imprimir o valor total pago pelo aluguel do automóvel.

Eu estou propondo a solução usando switch-case e if-else, mas é possível otimizar a solução if-else 

Infelizmente não podemos fazer o mesmo com switch-case. Tente fazer essa otimização e se conseguir, 
coloque nos comentários. Se não conseguir, peça que eu publico essa modificação.

*/

#include <stdio.h>


double Porc(double x){
  return 1-x/100.0;  // Se você tem dúvidas sobre como criar funções com porcentagem, consulte as aulas #14 até #21
}

int main(void) {
    double valorHora=10.0;
    double valorPago;
    double desc1=10.0, desc2=15.0;
    int h =6;
    
    switch(h){
     case(1):valorPago = valorHora;break;
     case(2):valorPago = valorHora*2;break;
     case(3):valorPago = valorHora*3;break;
     case(4):valorPago = valorHora*3 + valorHora*Porc(desc1);break;
     default:valorPago = valorHora*3 + valorHora*Porc(desc1) + valorHora*(h-4)*Porc(desc2);break;
	}
    
    if (h == 1) valorPago = valorHora;
    else if (h == 2) valorPago = valorHora*2;
         else if (h == 3) valorPago = valorHora*3;
			  else if (h == 4) valorPago = valorHora*3 + valorHora*Porc(10);
					else  valorPago = valorHora*3 + valorHora*Porc(10) + valorHora*(h-4)*Porc(15);	
					   
         if (h==1) valorPago=valorHora;
    else if (h==2) valorPago=valorHora * 2;
    else if (h==3) valorPago=valorHora * 3;
	else if (h==4) valorPago=valorHora * 3 + valorHora*Porc(10);
	else           valorPago=valorHora * 3 + valorHora*Porc(10) + valorHora*(h-4)*Porc(15);
	                                         
	printf("\nValor pago por %d horas de aluguel: R$%.2lf", h, valorPago);
	return 0;
}

