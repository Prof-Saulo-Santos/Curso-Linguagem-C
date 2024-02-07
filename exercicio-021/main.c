/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 21/170
    ==============
   
   Ana pagou R$500.000,00 por uma casa e a revendeu a João por R$ 600.000,00. 
   
   Escreva um programa (usando funções) que calcule e escreva:
   
   - Os juros que Ana aplicou nessa venda
   - O lucro em reais, sabendo-se que Ana pagou 22% ao IR a titulo de ganho de capital
   
*/

#include <stdio.h>

double aplicacao(double prCompra, double prVenda){
	return (prVenda / prCompra - 1) * 100.0;
}
double calculaLucro(double prCompra, double prVenda, double taxaIR){
	return (prVenda-prCompra)*(1-taxaIR/100.0);
}

int main(void) {

    double prCompra=500000.0, prVenda=600000.0, taxaIR=22.0, juros, lucro;
	
   //Processamento Dados		

    juros = aplicacao(prCompra,prVenda); 
    
    lucro = calculaLucro(prCompra,prVenda,taxaIR);
    
    //Saida Dados
    
    printf("Juros = %.2lf%%\n",juros);
    printf("Lucro = R$ %.2lf\n",lucro);	

	
   return 0;
}





















