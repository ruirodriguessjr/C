//10 - Escreva um programa na linguagem C para receber um número N, inteiro, digitado pelo usuário. 
//Caso o número digitado seja ímpar e menor que 10, imprimir o fatorial desse número. 
//O cálculo do fatorial deve ser feito por uma função, que recebe o valor digitado por parâmetro e retorna o valor do fatorial calculado. 
//Caso N seja par e maior ou igual a dez, passar esse valor para outra função por parâmetro e calcular e retornar a soma dos inteiros de 1 a N. 
//Imprimir o valor retornado pela função.
#include <stdio.h>

int fatorial (int a) {
	int i, valor=1;
	for(i=1;i<=a;i++) {
		valor=valor*i;
	}
	return valor;
}

int somatoria (int a) {
	int i, soma=0;
	for (i=1;i<=a;i++){ 
		soma=soma+i;
	}
	return soma;
}

int main() {
	int num;
	do{
		printf("Digite um numero para calcular seu fatorial: ");
		scanf("%d", &num);
	}while(num<0);
	if ((num%2!=0) && (num<10)) 
		printf("%d", fatorial(num));
	else if ((num%2==0) && (num>=10))
			printf("%d", somatoria(num));
	return 0;
}
