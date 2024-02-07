/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 35/170
    ==============

   Escreva um programa que simule o cadastro/valida��o de uma senha num aplicativo.
   A senha deve obedecer as seguintes regras:
   
	   1a) Ser um n�mero inteiro de exatamente 3 d�gitos. (apena n�meros naturais: 0,1,2,3...)
	   2a) N�o possuir n�meros sequenciais (exemplo: 123, 124, 134)
	   Obrigatoriamente, utilize fun��es para validar as regras 1 e 2.
	   
   Dica:     
     
       1a) Declare 2 vari�veis: "senha1 e senha2" ambas do tipo int.   
       2a) Digite valores para as duas. Por exemplo: senha1=123, senha2=123.
       3a) Envie senha1 para fun��o checaQtdNumeros(int x):
	- se ela tiver exatamente 3 d�gitos (ex. 145, 567, 803),
	      ent�o: ela passou nesse teste
	      sen�o: ela foi reprovada nesse teste e o programa deve informar: "Senha deve ter 3 digitos"

       4a) Passando pelo primeiro teste, envie senha1 para a fun��o seqNumeros(int x):
	- se ela n�o possuir d�gitos sequenciais (ex. 102, 584, 915),
	      ent�o: ela passou nesse teste
	      sen�o: ela foi reprovada nesse teste e o programa deve informar: "Numeros sequenciais"
       5a) Passando pelo segundo teste, compare o conte�do de senha1 com senha2,
	- se forem iguais,
                    ent�o: imprimir a mensagem "Senha passou pela validacao"	     
	       sen�o: imprimir a mensagem "Senhas diferentes"
   
   Voc� n�o pode usar nessa solu��o:   
	   - recursividade 
	   - estruturas de repeti��o 
	   - string de caracteres
 
   O objetivo � justamente exercitar seu c�rebro com estruturas de decis�o.   
   
   Voc� pode propor a solu��o com:
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
