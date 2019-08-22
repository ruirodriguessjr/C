//Fac¸a um programa que leia um n´umero inteiro N e depois imprima os N primeiros
//n´umeros naturais ´ýmpares.
#include<stdio.h> 
int main() 
{ 
	int i,n, soma=0; 
	printf("Digite um numero: ");
	scanf("%d", &n); // le o tal de n pode ser n=4; 
	for(i=0;i<n;i++){
		printf(" %d ", i*2+1);
	}
	return 1; 
}		
