#include <stdio.h>
#include <math.h>
#include <locale.h>


/* 
   Prof. Saulo Santos
   
   Ana tem em sua carteira 300 ações PTR3 compradas a preço médio de R$ 24,54. No dia de hoje, Ana
   comprou mais 100 ações PTR3 pelo preço de 30,51. Como o mercado está em tendencia de alta, Ana pretende vender 
   todas as 400 ações quando atingirem o valor de R$31,00. Escreva um programa (utilizando funções), que calcule e 
   escreva:
   
   		 - O preço médio de compra das 400 ações
		 - O lucro obtido após a venda das 400 ações
		 - O imposto de renda a ser pago levando em consideração a taxa de 15% 
   
   Análise dos dados do problema:
   
		 - ações em carteira: 300
   		 - preço médio de compra: R$24,54
   		 - ações compradas:  100
   		 - preço de compra: R$30,51
   		 
   	Fórmula para resolver o problema:
   	
   		 preço médio de compra = [(ações em carteira * preço medio de compra) + 
			                      (ações compradas * preço de compra)] / total ações  	

*/
double atualizaPrecoMedioCompra(double acoesCarteira, double prMedComp, double acoesComp, double prComp){
	return (acoesCarteira*prMedComp + acoesComp*prComp)/(acoesCarteira+acoesComp);
}
int atualizaQuantidade(int acoesCarteira, int acoesCompr){
	return acoesCarteira + acoesCompr;
}	
double calculaLucroBru(double acoesVend, double prVend, double prComp){
	return (prVend - prComp) * acoesVend;
}
double calculaLucroLiq(double lucroBru,double taxa){	
return lucroBru * (1-taxa/100.0);
}
double calculaIR(double lucro, double taxa){
	return lucro * taxa/100.0;
}
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	double prMedComp,  prComp, prVend,  lucroBru, ir ,taxa, lucroLiq;		
	int acoesCarteira, acoesComp, acoesVend;
	//Entrada de Dados
	acoesCarteira = 300;
	prMedComp = 24.54;
	acoesComp = 100;
	prComp = 30.51;
	taxa = 15.0;
	prVend = 31.0;
	acoesVend = 400;
	
	//Processamento de Dados
	prMedComp        = atualizaPrecoMedioCompra(acoesCarteira, prMedComp, acoesComp, prComp);
	acoesCarteira    = atualizaQuantidade(acoesCarteira,acoesComp);
	lucroBru         = calculaLucroBru(acoesVend, prVend, prMedComp);
	lucroLiq         = calculaLucroLiq(lucroBru,taxa);
	ir               = calculaIR(lucroBru,taxa);	
	acoesCarteira    = atualizaQuantidade(acoesCarteira,-acoesVend);
	
	//Saída de Dados
	printf("Ações em Carteira     = %d \n",acoesCarteira);
	printf("Preço Médio de Compra = R$%8.2lf \n",prMedComp);
	printf("Lucro Bruto           = R$%8.2lf \n",lucroBru);
	printf("Lucro Líquido         = R$%8.2lf \n",lucroLiq);
	printf("IR pago               = R$%8.2lf \n",ir);
	return 0;
}



















