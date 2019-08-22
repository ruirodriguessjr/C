//Escreva um algoritmo que leia certa quantidade de n´umeros e imprima o maior deles e
//quantas vezes o maior n´umero foi lido. A quantidade de n´umeros a serem lidos deve ser
//fornecida pelo usu´ ario.

#include<stdio.h>

int main(void){
	
	int qtn, i=0, n, maior=0;
	
	printf("Digite a quantidade de numeros que quer ler: ");
	scanf("%d", &qtn);
	for(i=1;i<=qtn;i++){
		printf("Digite o %d.o numero: ", i);
		scanf("%d", &n);
		if(n>maior){
			maior=n;
		}	
	}
	printf("O maior numero digitado eh: %d", maior);	

	
	return(0);
}
