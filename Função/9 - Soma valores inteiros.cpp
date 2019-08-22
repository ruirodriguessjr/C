//Escreva a função void somaInteiros(int a, int b, int c), que soma os três valores passados como argumento e imprime o resultado da soma na tela.
//Faça um programa que chame a função somaInteiros dentro da função principal.
#include<stdio.h>
int main(void){
	int a, b, c, s;
	int void_somainteiros(int, int, int);
	do{
		printf("Digite o valor de a: ");
		scanf("%D", &a);
		printf("Digite o valor de b: ");
		scanf("%D", &b);
		printf("Digite o valor de c: ");
		scanf("%D", &c);		
	}while((a<0) || (b<0) || (c<0));
	s = void_somainteiros(a, b, c);
	printf("A soma dos valores inteiros digitdos eh: %d", s);
	
	return(0);
}
int void_somainteiros(int a, int b, int c){
	int soma=0;
	soma = a + b + c;
	return(soma);
}
