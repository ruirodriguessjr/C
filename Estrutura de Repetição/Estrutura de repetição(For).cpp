#include<stdio.h>
int main(void){
	int cont, num, somaimp=0;
	for(cont=1;cont<=15;cont++){
		printf("Digite um numero: ");
		scanf("%d", &num);
			if(num%2!=0){
				somaimp = somaimp + num;
				printf("O numero eh impar!!!\n");
			}
	}
	printf("\nA soma dos numeros impares digitados eh: %d", somaimp);
	
	
	
	
	
	
	
	
	
	
	return(0);
}
