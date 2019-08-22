//10 - Escreva um programa na linguagem C para receber um n�mero N, inteiro, digitado pelo usu�rio. 
//Caso o n�mero digitado seja �mpar e menor que 10, imprimir o fatorial desse n�mero. 
//O c�lculo do fatorial deve ser feito por uma fun��o, que recebe o valor digitado por par�metro e retorna o valor do fatorial calculado. 
//Caso N seja par e maior ou igual a dez, passar esse valor para outra fun��o por par�metro e calcular e retornar a soma dos inteiros de 1 a N. 
//Imprimir o valor retornado pela fun��o.
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
