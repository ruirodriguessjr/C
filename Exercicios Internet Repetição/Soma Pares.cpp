//Fac¸a um programa que calcule e mostre a soma dos 50 primeiros n´umeros pares.
#include<stdio.h> 
int main() 
{ 

	int i,n, soma=0;
	printf("Digite a quantidade de numeros que quer verificar: "); 
	scanf("%d", &n); // le o tal de n pode ser n=4; 
	for(i=0;i<=n;i++){
		if(i%2==0){	
			printf(" %d ", i); 
			soma=soma+i;
		}
	}
	printf("A soma dos valores pares digitados eh: %d", soma);
	
	return (0); 
}	
