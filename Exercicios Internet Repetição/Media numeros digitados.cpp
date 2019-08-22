//6. Fac¸a um programa que leia 10 inteiros e imprima sua m´ edia.
#include<stdio.h>
int main(void){
	int i, num, media=0;
	for(i=1; i<=10; i++){
		printf("Digite um numero: ");
		scanf("%d", num);
		media=(media+num)/i;
	}
	printf("A media dos numeros digitados eh: %d", media);
	
	
	
	
	return(0);
}
