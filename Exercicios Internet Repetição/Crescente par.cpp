//Fac¸a um programa que leia um n´umero inteiro positivo par N e imprima todos os n´umeros
//pares de 0 at ´e N em ordem crescente.

#include<stdio.h> 
int main() 
{ 
	int i,n; 
	printf("Digite um numero: ");
	scanf("%d", &n); // le o tal de n pode ser n=4; 	
	if(n%2==0){
		for(i=0;i<=n;i=i+2){
			printf(" %d ", i);
	}
	}else{
		printf("Tente de novo, o numero nao eh par.");
	}

	return (0); 
}
