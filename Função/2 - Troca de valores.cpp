#include<stdio.h>
int main(void){
	int a, b, troca;
	int valores (int, int);
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);	
	printf("Os valores respectivos sao: %d, %d\n", a, b);
	troca = valores(a, b);
	
	return(0);
}
int valores (int a, int b){
	int aux;
	aux = a;
	a = b;
	b = aux;
	printf("O valor trocado eh: %d, %d", a, b);
	
}
