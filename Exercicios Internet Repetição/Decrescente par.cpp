//Fac¸a um programa que leia um n´umero inteiro positivo par N e imprima todos os n´umeros
//pares de 0 at ´e N em ordem decrescente.

#include<stdio.h> 
int main() 
{ 
	int i,n; 
	printf("Digite um numero: ");
	scanf("%d", &n);  	
	if(n%2==0){
		for(i=n;i>=0;i=i-2){
			printf(" %d ", i);
		}
	}else{
		printf("Tente de novo, o numero nao eh par.");
	}

	return (0); 
}
