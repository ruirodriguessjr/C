//Escreva um algoritmo que leia um n´umero inteiro entre 100 e 999 e imprima na sa´ýda
//cada um dos algarismos que comp˜oem o n´umero

#include<stdio.h>

int main(void){
	
	int i, n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	if((n>=100) && (n <= 999)){
		for(i=0;i<999;i++){
			printf(" %d ", i);
		}
	}else{
		printf("Numero digitado fora da serie.");
	}
		
	
	
	return(0);
}
