//Fac¸a um programa que leia um n´umero inteiro positivo N e imprima todos os n´umeros
//naturais de 0 at ´e N em ordem crescente.
#include<stdio.h> 
int main() 
{ 
	int i,n, soma=0; 
	printf("Digite um numero: ");
	scanf("%d", &n); // le o tal de n pode ser n=4; 
	for(i=0;i<n;i++){
		printf(" %d ", i+1);
	}
	return 1; 
}
