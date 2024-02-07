/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 32/170
    ==============
    if..else aninhados  
   
   A partir de um valor monetário, escreva um programa que calcule e imprima a quantidade de 
   cédulas que devem ser utilizadas para a composição deste valor. Por exemplo: R$1.188,00
   
   Cédulas válidas:
   
   R$200,00
   R$100,00
   R$50,00 
   R$20,00 
   R$10,00
   R$ 5,00
   R$ 2,00
   R$ 1,00    
   
*/


#include <stdio.h>
#include <math.h>

void DimDim(double *salario,int *qtdNotas,double valor){
        *qtdNotas = (int)*salario/valor; 
    	*salario = fmod(*salario,valor);
}

int main(void) { 
    double salario = 1190.0; // Você pode trocar por um scanf("%ld",&salario);
	int n200=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0; 	
	if (salario>=1.0) {
		DimDim(&salario,&n200,200.0);
		if (salario>=1.0) {
			DimDim(&salario,&n100,100.0);
			if (salario>=1.0) {
				DimDim(&salario,&n50,50.0);
				if (salario>=1.0) {
					DimDim(&salario,&n20,20.0);
					if (salario>=1.0) {
						DimDim(&salario,&n10,10.0);
						if (salario>=1.0) {
							DimDim(&salario,&n5,5.0);
							if (salario>=1.0) {
								DimDim(&salario,&n2,2.0);
								n1 = salario;
							}	
						}
					}
				}
			}
		}
	}
	    			
					                 	
    printf("\n %d x R$200,00 \n %d x R$100,00 \n %d x R$50,00 \n %d x R$20,00 \n %d x R$10,00  \n %d x R$5,00 \n %d x R$2,00 \n %d x R$1,00 ",n200,n100,n50,n20,n10,n5,n2,n1); 	
	return 0;
}



/************ PARTE 1 ************

    char vogal = 'a';
    
    if (vogal == 'a')
    	printf("Voce digitou a letra a.");
    else if (vogal == 'e')
    		printf("Voce digitou a letra e.");
    	 else if (vogal == 'i')
				  printf("Voce digitou a letra i.");
			  else if (vogal == 'o')
				       printf("Voce digitou a letra o.");
			  	   else if (vogal == 'u')
				           printf("Voce digitou a letra u."); 
						else
						   printf("Voce nao digitou uma vogal."); 
						   
//************* PARTE 2 *************

	
    if (salarioMAIOR_QUE=1.0){
    	n200 = (int)salario/200; 
    	salario = fmod(salario,200);
    	if (salarioMAIOR_QUE=1.0){
    	    n100 = (int)salario/100; 
    	    salario = fmod(salario,100);
	        if (salarioMAIOR_QUE=1.0){
    	          n50 = (int)salario/50; 
    	          salario = fmod(salario,50);
	              if (salarioMAIOR_QUE=1.0){
			    	   n20 = (int)salario/20; 
			    	   salario = fmod(salario,20);
				       if (salarioMAIOR_QUE=1.0){
				    	    n10 = (int)salario/10; 
				    	    salario = fmod(salario,10);
					        if (salarioMAIOR_QUE=1.0){
				    	         n5 = (int)salario/5; 
				    	         salario = fmod(salario,5);
					             if (salarioMAIOR_QUE=1.0){
				    	               n2 = (int)salario/2; 
				    	               n1 = fmod(salario,2);					                   
					             }
							}
						}
					}
				}
			}
		}  
		
*/ 
