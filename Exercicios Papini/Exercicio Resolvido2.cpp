
/*
Elabore um programa que fa�a a leitura de 15 n�meros. 
Toda vez, ap�s ser realizada a leitura de um n�mero, verifique se o mesmo � �mpar. 
Somente se o n�mero fornecido for �mpar imprima uma mensagem dizendo que
 "o n�mero X � �mpar.". 
Imprima no final, a somat�ria dos valores �mpares impressos.

Exemplo para apenas 3 valores:
Informe o 1�. n�mero: 4
Informe o 2�. n�mero: 7
   	O n�mero 7 � impar.
Informe o 3�. n�mero: 8
A soma dos n�meros impares informados �: 7.

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
