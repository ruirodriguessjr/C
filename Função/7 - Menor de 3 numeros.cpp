//7. Crie uma fun��o em linguagem C que receba 3 n�meros e retorne o menor valor, use a fun��o da quest�o 5.
#include<stdio.h>
int main(void){
	int cont, n1, n2, n3, m;
	int menor(int, int, int);
	printf("Digite o 1.o numero: ");
	scanf("%d", &n1);
	printf("Digite o 2.o numero: ");
	scanf("%d", &n2);
	printf("Digite o 3.o numero: ");
	scanf("%d", &n3);
	m = menor(n1, n2, n3);			
	printf("O menor numero digitado eh: %d", m);
	
	
	return(0);
}
int menor(int n1, int n2, int n3){
	int menor;
	if((n1<n2) && (n1<n3)){
		menor = n1;
	}
	else if((n2<n1) && (n2<n3)){
		menor = n2;
	}
	else if((n3<n1) && (n3<n2)){
		menor = n3;
	}	
	return(menor);	
}
