//Fac¸a um programa que leia 10 inteiros positivos, ignorando n˜ao positivos, e imprima sua media.
#include<stdio.h>
int main(void){
	int i, num, media=0;
	for(i=1; i<=10; i++){
		printf("Digite um numero: ");
		scanf("%d", num);
		if(num>0){
			media=(media+num)/i;			
		}
	}
	printf("A media dos numeros digitados eh: %d", media);
	
	
	
	
	return(0);
}
