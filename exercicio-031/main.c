/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 31/170
    ==============    
*/

#include <stdio.h>

char* MelhorCombustivel(double rendEtanol, double rendGasoli, 
                        double precEtanol, double precGasoli){     

 	if (precEtanol/precGasoli > rendEtanol/rendGasoli)
 	   return "gasolina";
 	else
 	   return "etanol";
 }
 
int main(void) {
    double rendEtanol =  7.50;
	double rendGasoli = 10.00;
	double precEtanol =  3.60;
	double precGasoli =  5.00;
		
	printf("%s",MelhorCombustivel(rendEtanol,rendGasoli,
	                              precEtanol,precGasoli)); 
	
	return 0;
}
