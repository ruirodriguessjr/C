//2. Fa�a um programa que solicite ao usu�rio para digitar valores num�ricos inteiros positivos. Encerre a
//entrada de dados quando for digitado um n�mero negativo ou zero. Calcule a m�dia dos n�meros positivos
//digitados.
#include<stdio.h>
int main(void){
	int n, i, soma=0;
	float media;
	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
		i= i + 1;
			if(n<0){
				printf("Voce digitou um numero negativo.");
			}else{			
				soma = (soma + n);
				media = (soma/i);	
			}	
	}while(n>=0);
	
	printf("\nA quantidade de numeros digitados eh: %d", i);
	printf("\nA soma dos numeros digitados eh: %d", soma);
	printf("\nA media da soma dos valores digitados eh: %.2f", media);
	
}

