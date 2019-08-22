//36. Fac¸a um programa que calcule a diferenc¸a entre a soma dos quadrados dos primeiros
//100 n´umeros naturais e o quadrado da soma. Ex: A soma dos quadrados dos dez primeiros
//n´umeros naturais ´ e,
//12 + 22 + ::: + 102 = 385
//O quadrado da soma dos dez primeiros n´umeros naturais ´
#include<stdio.h>
int main(void){
	int quadsoma=0, cont=0, soma=0, quadrado=0, somaquad=0, result=0;
	for(cont=1;cont<=10;cont++){
		soma=(soma+cont);
		quadsoma=soma*soma;
		quadrado=cont*cont;
		somaquad=somaquad+quadrado;
		result=quadsoma-somaquad;
				
		printf("O quadrado de %d eh %d \n", cont, quadrado);
	}
	printf("A soma dos quadrados eh: %d\n", somaquad);
	printf("O quadrado da soma eh %d\n", quadsoma);
	printf("O resultado da diferenca entre os quadrados eh: %d", result);
	
	return(0);
}
