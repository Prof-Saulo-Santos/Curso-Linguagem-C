/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 34/170
    ==============

    Hadouken

*/

#include <stdio.h>
#define SENHA 123
#define LOGIN 456
#define SALDO 1000.0


char* comHadouken(int login, int senha, double valor){
	
	if (login==LOGIN)
	
	  	if (senha==SENHA)  
	  	
	 		if (valor<=SALDO) 
	 		
	 			return "Transferencia concluida";
	 			
	 		else return "Saldo insuficiente";
	 		
		else return "Senha incorreta";
		
	else return "Login incorreto";
		
}

char* semHadouken(int login, int senha, double valor){

	if (login==LOGIN)return "Login incorreto";
	
	if (senha==SENHA)return "Senha incorreta";  
	
	if (valor>SALDO)return "Saldo insuficiente"; 
	
	return "Transferencia concluida";
}


void main(void) {	

	printf("%s",comHadouken(456,123,1500.0)); 
	    
	printf("%s",semHadouken(456,123,500.0));
	
	getchar();
	
	printf("Fim do Programa.");
}











/* Prof.Saulo - Hadouken
Escreva um programa que simule a transferência financeira em uma transação eletrônica de acordo com:
1o. O cliente digita o seu login
2o. O cliente digita a sua senha
3o. O cliente digita o valor que deseja transferir

Essas três informações devem ser validadas. Havendo um problema com:
- o login, o sistema deve imprimir a mensagem "Login incorreto".
- a senha, o sistema deve imprimir a mensagem "Senha incorreta".
- se o valor do saque for inferior ao saldo em conta, o sistema deve imprimir a mensagem "Saldo insuficiente".

Suponha os seguintes dados:
Login correto: 123
Senha correta: 456
Saldo em conta: R$ 1000,00

Sua função como programador é apenas validar esses três dados, usando para isso uma função com uma estrutura de decisão aninnhada. 
 */


























