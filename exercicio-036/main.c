/*  youtube | instagram |facebook | twitter [profsaulosantos]

    Prof. Saulo Santos  
    
    Exercicio 36/170
    ==============

    Uma empresa possui vendedores que comercializam seus produtos. 
    Escrever um programa que:

    leia (ou atribua):
    - o salário fixo (R$3000,00) do funcionário e 
    - o valor total das vendas em R$, efetuadas em um mês
    - São fornecidos também dois limites que, se alcançados resultam em uma comissão:
    - limite 1 = R$100.000,00 e limite 2 = R$ 200.000,00

    Se as vendas ficam acima do limite 1 e abaixo do limite 2, então a comissão é de 
    0.25% sobre o total da venda menos o limite 1. 

    Se a venda for maior ou igual ao limite 2 a comissão é de 0.25% sobre limite2-limite1 acrescida de
    mais 0.3% sobre o total da venda menos o limite 2.

    Exemplo: Se vendeu R$150.000,00 o salário total será:
    Fixo: R$3000.00 + 0.25% sobre R$50.000,00 (total da venda - limite1).

    Exemplo 2: Se vendeu R$300.000,00 o salário total será:
    Fixo: R$3000,00 + 0.25% sobre (limite2-limite1) + 0.3% sobre (total da venda - limite2).
*/


#include <stdio.h>
#include <stdlib.h>


double convertePorc(double x){
	return x/100.0;
}

double addComissao(double salFixo,double totalVendas,double limite1,double limite2,double comissao1, double comissao2){
	
	if (totalVendas > limite1)
	
        if (totalVendas<limite2)
	    
	        salFixo = salFixo + (totalVendas-limite1) * convertePorc(comissao1);			
	//                  3000  +          50000        *         0.0025  
	//                  3000  +                      125.0         		
	
	if (totalVendas >= limite2) 
	
	    salFixo = salFixo + (limite2-limite1) * convertePorc(comissao1) + (totalVendas-limite2) * convertePorc(comissao2);
	//     	        3k    +         100k      *         0.0025          +           100K        *            0.003
	//              3k    +                  250                        +                       300                       
	return salFixo;    
}

int main(void) {

	double salFixo     =   3000.00, 
	       totalVendas =  50000.00, 
		   limite1     = 100000.00, 
		   limite2     = 200000.00, 
		   comissao1   =      0.25, 
		   comissao2   =      0.30;
		   
	printf("Salario final: R$%.2lf",addComissao(salFixo,totalVendas,limite1,limite2,comissao1,comissao2));
	
	return 0;
}
