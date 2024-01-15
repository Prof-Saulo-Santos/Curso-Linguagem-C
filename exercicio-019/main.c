#include <stdio.h>
#include <math.h>
#include <locale.h>


/* 
   Prof. Saulo Santos
   
   Ana tem em sua carteira 300 a��es PTR3 compradas a pre�o m�dio de R$ 24,54. No dia de hoje, Ana
   comprou mais 100 a��es PTR3 pelo pre�o de 30,51. Como o mercado est� em tendencia de alta, Ana pretende vender 
   todas as 400 a��es quando atingirem o valor de R$31,00. Escreva um programa (utilizando fun��es), que calcule e 
   escreva:
   
   		 - O pre�o m�dio de compra das 400 a��es
		 - O lucro obtido ap�s a venda das 400 a��es
		 - O imposto de renda a ser pago levando em considera��o a taxa de 15% 
   
   An�lise dos dados do problema:
   
		 - a��es em carteira: 300
   		 - pre�o m�dio de compra: R$24,54
   		 - a��es compradas:  100
   		 - pre�o de compra: R$30,51
   		 
   	F�rmula para resolver o problema:
   	
   		 pre�o m�dio de compra = [(a��es em carteira * pre�o medio de compra) + 
			                      (a��es compradas * pre�o de compra)] / total a��es  	

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
	
	//Sa�da de Dados
	printf("A��es em Carteira     = %d \n",acoesCarteira);
	printf("Pre�o M�dio de Compra = R$%8.2lf \n",prMedComp);
	printf("Lucro Bruto           = R$%8.2lf \n",lucroBru);
	printf("Lucro L�quido         = R$%8.2lf \n",lucroLiq);
	printf("IR pago               = R$%8.2lf \n",ir);
	return 0;
}



















