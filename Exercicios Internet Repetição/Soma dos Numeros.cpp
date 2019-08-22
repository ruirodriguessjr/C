//Fac¸a um programa que leia um n´umero inteiro positivo n e calcule a soma dos n primeiros
//n´umeros naturais.

#include<stdio.h>
int main(void){
	
	int n, soma=0;
	while(n>0){
		printf("Digite um numero positivo, se digitado negatico ele encerra o programa: ");
		scanf("%d", &n);
		if(n>=0){
		soma = soma + n;
		}else{
			printf("");
		}
	}
	printf("A soma dos numeros digitados eh: %d", soma);
	
	
	
	
	
	return(0);
}
