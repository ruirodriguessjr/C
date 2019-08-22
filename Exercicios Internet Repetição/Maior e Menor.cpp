//Escreva um programa que leia 10 n´umeros e escreva o menor 
//valor lido e o maior valor lido.
#include<stdio.h>
int main(void)
{
	int i=0, num, maior=0, menor=0;

	printf("Digite um numero: ");
	scanf("%d", &num);
	
	maior=num;
	menor=num;
	
	for(i=1; i<3; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		if(num>maior) maior=num;
		if(num<menor) menor=num;
		}
	
	printf("\nO maior valor digitado eh: %d", maior);
	printf("\nO menor valor digitado eh: %d", menor);
		
	
	return(0);
}
