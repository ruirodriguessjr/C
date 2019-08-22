//Fac¸a um programa que leia um n´umero inteiro positivo N e imprima todos os n´umeros
//naturais de 0 at ´e N em ordem decrescente.
#include<stdio.h> 
int main() 
{ 
	int i,n, soma=0; 
	printf("Digite um numero: ");
	scanf("%d", &n); // le o tal de n pode ser n=4; 
	for(i=n;i>=0;i--){
		printf(" %d ", i);
	}
	return (0); 
}
