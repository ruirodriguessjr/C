
/*
Elabore um programa que faça a leitura de 15 números. 
Toda vez, após ser realizada a leitura de um número, verifique se o mesmo é ímpar. 
Somente se o número fornecido for ímpar imprima uma mensagem dizendo que
 "o número X é ímpar.". 
Imprima no final, a somatória dos valores ímpares impressos.

Exemplo para apenas 3 valores:
Informe o 1º. número: 4
Informe o 2º. número: 7
   	O número 7 é impar.
Informe o 3º. número: 8
A soma dos números impares informados é: 7.

*/


#include <stdio.h>

int main (void)
{
	int soma_impar=0, i, valor;
	printf("Infome 15 valores inteiros:\n");
	for (i=1; i<=15; i++)
	{
		do
		{
			printf("\n%do.valor: ", i);
			scanf("%d",&valor);  
		}while(valor<0);
		if (valor % 2 != 0)  // Se for impar
		{
			printf("\n>>>>O numero %d eh impar.<<<<<", valor);
			soma_impar=soma_impar+valor;
		}
	}
	printf("\n\nA soma dos numeros impares informados eh: %d", soma_impar);
	return (0);
}
