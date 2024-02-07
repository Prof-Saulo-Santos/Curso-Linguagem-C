/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 40/170
    ================

Jo�o deseja alugar um autom�vel que possui as seguintes regras:

   1a.) O valor das tr�s primeiras horas de aluguel � de R$10,00/hora.
   2a.) O valor da quarta hora de aluguel tem 10% de desconto sobre R$10,00.
   3a.) O valor das demais horas (5a. hora em diante) tem um desconto de 15% sobre R$10,00. 

Escreva um programa que leia (ou atribua):

   1o.) O valor da hora base (R$10,00)
   2o.) A quantidade de horas alugada

Defina vari�veis para os descontos de 10% e 15%. 
Crie uma fun��o que converta a porcentagem em n�mero.

Este programa deve calcular e imprimir o valor total pago pelo aluguel do autom�vel.

Eu estou propondo a solu��o usando switch-case e if-else, mas � poss�vel otimizar a solu��o if-else 

Infelizmente n�o podemos fazer o mesmo com switch-case. Tente fazer essa otimiza��o e se conseguir, 
coloque nos coment�rios. Se n�o conseguir, pe�a que eu publico essa modifica��o.

*/

#include <stdio.h>


double Porc(double x){
  return 1-x/100.0;  // Se voc� tem d�vidas sobre como criar fun��es com porcentagem, consulte as aulas #14 at� #21
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

