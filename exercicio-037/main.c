/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 37/170
    ================

   Escreva um programa que leia (ou atribua) um caractere tipo char; em seguida, 
   analise se o caractere lido é uma vogal, imprimindo uma mensagem que identifique a vogal lida.
   No caso da leitura de um outro caractere que não seja uma vogal, imprimir uma mensagem correspondente.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
    char vogal = 'a';
    
    switch(vogal){
	 case ('a'):printf("voce digitou a vogal a");break;
	 case ('e'):printf("voce digitou a vogal e");break;
	 case ('i'):printf("voce digitou a vogal i");break; 
	 case ('o'):printf("voce digitou a vogal o");break;
	 case ('u'):printf("voce digitou a vogal u");break;
	 default:   printf("voce nao digitou uma vogal."); 
	}
	
	
         if (vogal == 'a') printf("\nVoce digitou a letra a.");
    else if (vogal == 'e') printf("\nVoce digitou a letra e.");
    else if (vogal == 'i') printf("\nVoce digitou a letra i.");
	else if (vogal == 'o') printf("\nVoce digitou a letra o.");
	else if (vogal == 'u') printf("\nVoce digitou a letra u."); 
	else                   printf("\nVoce nao digitou uma vogal."); 
						
							
         if (vogal == 'a') printf("\nVoce digitou a letra a.");
    else if (vogal == 'e') printf("\nVoce digitou a letra e.");
    else if (vogal == 'i') printf("\nVoce digitou a letra i.");
	else if (vogal == 'o') printf("\nVoce digitou a letra o.");
	else if (vogal == 'u') printf("\nVoce digitou a letra u."); 
	else                   printf("\nVoce nao digitou uma vogal."); 	
	
		
	//Vantagens:      Estrutura simples, fácil manutenção e legibilidade
	//Limitação 1:    Só aceita os tipos bool, char, int (e suas variações)
	//Limitação 2:    Não aceita o uso de operadores relacionais
	//Utilidade:      Elaboração de Menus
	//Característica: default é opcional
    
   
	return 0;
}
