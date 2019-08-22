// Fac¸a um programa que leia um n´umero inteiro N e depois imprima os N primeiros n´umeros naturais ´ýmpares.
#include<stdio.h>
int main(void){
	int num, qtd, i;
	int impares(int, int);
	printf("Digite a quantidade de vezes que quer verificar: ");
	scanf("%d", &qtd);
	printf("Os 5 primeiros numeros sao... ");
	i = impares(num, qtd);
	
}
int impares(int num, int qtd){
	int impar, cont;
	for(cont=1;cont<=qtd;cont++){
		printf("\nDigite %d.o numero: ", cont);
		scanf("%d", &num);
		if(num%2==1){
	}
	printf(" %d ", num);		


	
		return(impar);
	}
}
