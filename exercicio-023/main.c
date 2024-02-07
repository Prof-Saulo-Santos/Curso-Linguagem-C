/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 23/170
    ==============
   Escreva uma função que calcule a área de uma circunferência. 
   Essa função deve receber o valor do raio por meio de um argumento e retornar o valor da área.
   Utilize o tipo double para o argumento e para o raio. 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415

double AreaCircunferencia(double raio){
	//const double PI = 3.1415;
	return raio * raio * PI;
}

void main() {
	printf("%lf",fmod(23,3));
	printf("%lf",trunc(23.987));
	printf("%lf",pow(2.1,3));
	printf("%lf",AreaCircunferencia(3.0));
}
