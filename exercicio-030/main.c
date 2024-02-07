/*  youtube | instagram |facebook | twitter [profsaulosantos]
    
    Exercicio 30/170
    ==============
    Passagem de Parâmetros por Referência
*/

#include <stdio.h>

void teste(int *p, int *q){
	*p = *p + 1;
	*q = *q + 1;	
}
int main(void) {
    int a=1,b=2;
    int *p; //ponteiro
    
    p = &b;

    printf("\no numero %7d esta no endereco de memoria = %d",a,&a);
    printf("\no numero %7d esta no endereco de memoria = %d",b,&b);
    printf("\no numero %7d esta no endereco de memoria = %d",p,&p);
    printf("\n%d",*p);
    
    teste(&a,&b);
    printf("\no numero %7d esta no endereco de memoria = %d",a,&a);
    printf("\no numero %7d esta no endereco de memoria = %d",b,&b);

	return 0;
}

//void teste(int a, int b){
//	a = a + 1;
//	b = b + 1;
//}
//int main(void) {
//    int a=1,b=2;
//
//    printf("\n o numero %7d esta no endereco de memoria = %d",a,&a);
//    printf("\n o numero %7d esta no endereco de memoria = %d",b,&b);
//    
//    teste(a,b);
//    printf("\n o numero %7d esta no endereco de memoria = %d",a,&a);
//    printf("\n o numero %7d esta no endereco de memoria = %d",b,&b);
//
//	return 0;
//}


