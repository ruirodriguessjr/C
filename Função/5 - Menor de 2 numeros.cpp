//5. Crie uma função em linguagem C que receba 2 números e retorne o menor valor.
#include<stdio.h>
int main(void){
	int n1, n2, m;
	int menor2(int, int);
	printf("Digite primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite segundo numero: ");
	scanf("%d", &n2);
	m = menor2(n1, n2);
	printf("O menor numero eh: %d", m);
}
int menor2(int num1, int num2){
	if(num1<=num2){
		return(num1);
	}else{
		return(num2);
	}
}
