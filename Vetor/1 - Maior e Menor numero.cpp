//8. Escreva um programa que leia 10 n´umeros e escreva o menor valor lido e o maior valor lido.
#include<stdio.h>
int main(void){
	int cont, num[5], maior=0, menor=0;
	do{
		for(cont=1;cont<=5;cont++){
		printf("Digite o %d.o numero: ", cont);	
		scanf("%d", &num[cont]);	
		}
	}while(num[cont]<=0);
		if(num[cont] > maior){
			maior = num[cont];
		}
		if(num[cont] < menor){
			menor = num[cont];
		}
	
	printf("\nA menor nota digitada eh: %d", menor);
	printf("\nA maior nota digitada eh: %d", maior);

	return(0);
}
