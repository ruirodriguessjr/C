// Escreva um programa que leia 10 n´umeros e escreva o menor valor lido e o maior valor lido.
#include<stdio.h>
int main(void){
	int num, r;
	int result(int);
	printf("Digite 1.o numero: ");
	scanf("%d", &num);	
	r = result(num);
	return(0);
}
int result(int num){
	int maior=0, menor=0, i=0;
		maior=num;
		menor=num;	
		for(i=1+1; i<4; i++){
			printf("Digite %d.o numero: ", i);
			scanf("%d", &num);
			if(num>maior) maior=num;
			if(num<menor) menor=num;
		}
		printf("\nO maior valor digitado eh: %d", maior);
		printf("\nO menor valor digitado eh: %d", menor);
		
	
	return(0);
}
