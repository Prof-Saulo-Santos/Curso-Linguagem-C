#include <stdio.h>
#include <math.h>
#include <locale.h>

/* 
   Prof. Saulo Santos
   
   Escrever um programa que:
   
   - Calcule e escreva as raízes x' e x'' de uma equação do segundo grau que tem os seguintes coeficientes: 
   
   		- a =   2 
		- b =  12
		- c = -14   
   
*/

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	double a,b,c,delta,x1,x2;		
	
	//Entrada de Dados
	a = 2;
	b = 12;
	c = -14;
	
	//Processamento de Dados	
	delta = pow(b,2) - 4 * a * c;
	x1 = (-b + sqrt(delta) )/ (2 * a);
	x2 = (-b - sqrt(delta) )/ (2 * a);
	
	//Saída de Dados
	printf("x1 = %4.1lf \nx2 = %4.1lf \n",x1,x2);
	return 0;
}
