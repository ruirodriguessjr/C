//Fac¸a um programa que leia um n´umero inteiro positivo ´ýmpar N e imprima todos os
//n´umeros ´ýmpares de 1 at ´e N em ordem crescente.

#include<stdio.h> 
int main() 
{ 
	int i, n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	if(n%2==1){
		for(i=1;i<=n;i=i+2){
			printf(" %d ", i);
		}
	}else{
		printf("O numero que voce digitou nao eh impar, tente de novo...");
	}
	return(0);
}
