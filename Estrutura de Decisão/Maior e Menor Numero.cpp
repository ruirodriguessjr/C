#include <stdio.h>

//Faça um Programa que peça dois números e imprima o maior deles.

int main(void)
{  
	int n1, n2, maior, menor;
	printf("Primeiro numero: ");
	scanf("%d", &n1);
	printf("Segundo numero: ");
	scanf("%d", &n2);
	if(n1 > n2)
	{
		((maior = n1) && (menor = n2));
		printf("O maior numero eh: %d", n1);
		printf("\nO menor numero eh: %d", n2);
	}
	else
	{	printf("O maior numero eh: %d", n2);
		printf("\nO menor numero eh: %d", n1);
	}

  return 0;
}
