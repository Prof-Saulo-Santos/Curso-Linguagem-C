/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 27/170 - parte 1
    ======================

   Estruturas de Decisão - Parte 1
   
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	double a = 25.0;
	double b = 2.0;	

	if (a>=0.0) 
             {
	    printf("%.3lf\n",sqrt(a));
	    printf("=>%.3lf\n",sqrt(a/2.0));
	}
             else 
                 printf("erro1\n");
	
	printf("erro2\n");
	printf("erro3\n");	
		
	if (b!=0.0)	
                 printf("%.3lf\n",a/b);
	else
              {
	   printf("erro4\n");
	   printf("erro5\n");
	   printf("erro6\n");
	} 		
	
	return 0;
}
