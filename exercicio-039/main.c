/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 39/170
    ================
    
   Escreva um programa que leia (ou atribua):
   
   1) o valor de um produto comprado
   2) o número de parcelas que o cliente deseja parcelar essa compra.
   
   O número de parcelas digitada pode ser: 1 (pagamento a vista), 2, 3 ou 4.
   
   Calcule e imprima o valor da parcela.
   
   Escreva duas soluções: a primeira usando switch-case e a segunda usando if-else aninhados.
   
   Após a conclusão, deste exercício, faça a uma modificação:
   
   Se o cliente dividir o produto em 2 parcelas, o valor de cada parcela deve aumentar igualmente em 2%
   Se o cliente dividir o produto em 3 parcelas, o valor de cada parcela deve aumentar igualmente em 3%
   Se o cliente dividir o produto em 4 parcelas, o valor de cada parcela deve aumentar igualmente em 4%
   
*/   

#include <stdio.h>

int main() {
	
	int numeroParcelas=3;
	
	double valor=1000.0, valorParcela;
	
	switch(numeroParcelas){
	 case (1):valorParcela = valor;     break;
	 case (2):valorParcela = valor/2.0; break;
	 case (3):valorParcela = valor/3.0; break;
	 case (4):valorParcela = valor/4.0; break;
	 default: printf("Erro no numero de parcelas");
	}
	
	printf("Valor da parcela: R$ %.2lf ",valorParcela);
	
	return 0;
}


