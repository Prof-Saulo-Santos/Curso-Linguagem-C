#include <stdio.h>
#include <math.h>

/* 
Funções Matemáticas:

	1) Raiz Quadrada:
	
		-       double sqrt(double) 
		-       float  sqrtf(float)
		- long double  sqrtl(long double)		
	
	2) Potência:
	
		-       double pow(double, double) 
		-       float  powf(float, float)
		- long double  powl(long double, long double) 
	
	3) Truncagem:
	
		-       double trunc(double) 
		-       float  truncf(float)
		- long double  truncl(long double)
	
	4) Resto divisão decimal:
	
		-       double fmod(double, double) 
		-       float  fmodf(float, float)
		- long double  fmodl(long double, long double)

*/

int main() {
	double raiz;
	double potencia;
	double truncagem;
	double resto;

	
	raiz = sqrt(25.0);
	potencia = pow(2,3);
	truncagem = trunc(34.999);
	resto = fmod(5.0,2.0);
	
	printf("Raiz: %lf\n",raiz);
	printf("Potencia: %lf\n",potencia);
	printf("Truncagem: %lf\n",truncagem);
	printf("Resto: %lf\n",resto);	
	
	return 0;
}
