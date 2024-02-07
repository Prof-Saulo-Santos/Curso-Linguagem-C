/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 35/170
    ==============

   Escreva um programa que simule o cadastro/validação de uma senha num aplicativo.
   A senha deve obedecer as seguintes regras:
   
	   1a) Ser um número inteiro de exatamente 3 dígitos. (apena números naturais: 0,1,2,3...)
	   2a) Não possuir números sequenciais (exemplo: 123, 124, 134)
	   Obrigatoriamente, utilize funções para validar as regras 1 e 2.
	   
   Dica:     
     
       1a) Declare 2 variáveis: "senha1 e senha2" ambas do tipo int.   
       2a) Digite valores para as duas. Por exemplo: senha1=123, senha2=123.
       3a) Envie senha1 para função checaQtdNumeros(int x):
	- se ela tiver exatamente 3 dígitos (ex. 145, 567, 803),
	      então: ela passou nesse teste
	      senão: ela foi reprovada nesse teste e o programa deve informar: "Senha deve ter 3 digitos"

       4a) Passando pelo primeiro teste, envie senha1 para a função seqNumeros(int x):
	- se ela não possuir dígitos sequenciais (ex. 102, 584, 915),
	      então: ela passou nesse teste
	      senão: ela foi reprovada nesse teste e o programa deve informar: "Numeros sequenciais"
       5a) Passando pelo segundo teste, compare o conteúdo de senha1 com senha2,
	- se forem iguais,
                    então: imprimir a mensagem "Senha passou pela validacao"	     
	       senão: imprimir a mensagem "Senhas diferentes"
   
   Você não pode usar nessa solução:   
	   - recursividade 
	   - estruturas de repetição 
	   - string de caracteres
 
   O objetivo é justamente exercitar seu cérebro com estruturas de decisão.   
   
   Você pode propor a solução com:
   1) if-else-aninhados.    2) if's aninhados (hadouken).   3) Somente com if's (sem else).
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


 
bool qtdNumeros(int x){
	x = x / 10;
	if (x == 0) return 0;
	x = x / 10;
	if (x == 0) return 0;
   	x = x / 10;
	if (x == 0) return 1;
	return 0;	
}
bool seqNumeros(int x){
     int dig1, dig2, dig3, resto;
	      
     dig1 = x / 100;
     x    = x % 100;
     
     dig2 = x / 10;
     dig3 = x % 10;   
     
	 if (dig1+1==dig2)return 0;
	 else if (dig2+1==dig3)return 0;
	      else return 1; 
}

int main(void) {
    int senha1=154,senha2=154;
    
    if (qtdNumeros(senha1))
        if (seqNumeros(senha1))
            if (senha1==senha2)
                printf("Senha passou pela validacao");
            else printf("Senhas diferentes");
        else printf("Numeros sequenciais");
    else printf("Senha deve ter 3 numeros");

	return 0;
}
