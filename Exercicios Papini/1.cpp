/*1. Escrever um programa em C que leia três números inteiros (n1, n2 e n3) na função principal. Após isso,
chame a função maior passado os números como parâmetros. A função maior deverá verificar qual é o maior valor
e retorná-lo para a função principal. Após esse retorno, chame a função menor passado os números como
parâmetros. A função menor deverá verificar qual é o menor valor e retorná-lo para a função principal. Na função
principal com os retornos imprima: o menor valor multiplicado pelo maior, e o maior valor dividido pelo menor.
Ex: Informe N1: 3
Informe N2: -1
Informe N3: 100
-1 x 100 = -100
100 / -1 = -100*/
#include<stdio.h>
int main(void){
	int n1, n2, n3, maior, menor, vezes, div;
	int maior_passado(int, int, int);
	int menor_passado(int, int, int);
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &n1);
		printf("Digite um numero: ");
		scanf("%d", &n2);
		printf("Digite um numero: ");
		scanf("%d", &n3);	
	}while((n1<0) && (n2<0) && (n3<	0));	
		maior = maior_passado(n1, n2, n3);
			if (maior==n1){
				printf("\nO numero maior eh %d", n1);
			}
			else if (maior==n2){
				printf("\nO numero maior eh %d", n2);
			}
			else{
				(maior==n3);
				printf("\nO numero maior eh %d", n3);
			}
		menor = menor_passado(n1, n2, n3);
			if (menor==n1){
				printf("\nO numero menor eh %d", n1);
				}
			else if (menor==n2){
				printf("\nO numero menor eh %d", n2);
			}
			else{
				(menor==n3);
				printf("\nO numero menor eh %d", n3);
			}
		vezes=(maior*menor);
		div=(maior/menor);

	printf("\nO Resultado do produto entre os valores eh %d", vezes);
	printf("\nO Resultado da divisao entre os valores eh %d", div);
	
}
int maior_passado(int n1, int n2, int n3){
		if((n1>n2) && (n1>n3)){
			return(n1);
		}else if((n2>n1) && (n2>n3)){
			return(n2);
		}else if((n3>n1) && (n3>n2)){
			return(n3);
		}
}
int menor_passado(int n1, int n2, int n3){
		if((n1<n2) && (n1<n3)){
			return(n1);
		}else if((n2<n1) && (n2<n3)){
			return(n2);
		}else if((n3<n1) && (n3<n2)){
			return(n3);
		}

}



