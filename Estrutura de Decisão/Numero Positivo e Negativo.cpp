#include <stdio.h>


//Fa�a um Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo.

int main(void)
{  
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num<0)
	{
		printf("O numero %d eh Negativo.", num);
		
	}
	else
	{
		printf("Numero %d eh Positivo.", num);
	}


  return 0;
}
