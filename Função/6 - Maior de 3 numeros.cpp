//6. Crie uma função em linguagem C que receba 3 números e retorne o maior valor, use a função da questão 4.
#include<stdio.h>
int main(void){
	int cont, n1, n2, n3, m;
	int maior(int, int, int);
	printf("Digite o 1.o numero: ");
	scanf("%d", &n1);
	printf("Digite o 2.o numero: ");
	scanf("%d", &n2);
	printf("Digite o 3.o numero: ");
	scanf("%d", &n3);
	m = maior(n1, n2, n3);			
	printf("O maior numero digitado eh: %d", m);
	
	
	return(0);
}
int maior(int n1, int n2, int n3){
	int maior;
	if((n1>n2) && (n1 > n3)){
		maior = n1;
	}
	else if((n2>n1) && (n2 > n3)){
		maior = n2;
	}
	else if((n3>n1) && (n3 > n2)){
		maior = n3;
	}	
	return(maior);	
}
