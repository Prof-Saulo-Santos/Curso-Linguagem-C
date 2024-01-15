#include <stdio.h>
#include <locale.h>

/* 
   Prof. Saulo Santos
   
   Um ovinocultor (produtor de ovelhas) do Rio Grande do Sul, deseja vender sua produ��o de l� no mercado externo. 
   Sabe-se que:
   
    - O produtor possui 4500 ovelhas.
    - Cada ovelha fornece, em m�dia, 4kg de l�.
    - O mercado externo paga US$3,00 por kg de l�.
    - Os impostos sobre a venda s�o de 15%.
    
	Quanto este produtor ir� lucrar em R$ (reais), sabendo-se que a cota��o da moeda � de R$5,00 por d�lar?
*/
double impostoRenda(double resposta, double taxaIR){
	return resposta * (1 - taxaIR / 100.0);
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");	
	double kg, dolar, real, taxaIR, resposta;
	int qtd;	
	
	//Entrada de Dados
	qtd = 4500.0;
	kg = 4.0;
	dolar = 3.0;
	real = 5.0;
	taxaIR = 15.0;	
	
	//Processamento de Dados
	
	resposta = qtd * kg; // 4500 * 4
	resposta = resposta * dolar; // dolar
	resposta = resposta * real; // real;
	resposta = impostoRenda(resposta, taxaIR);
	
	
	//Sa�da de Dados
	printf("Resposta = R$ %.2lf\n",resposta);
	return 0;
}
