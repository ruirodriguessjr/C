#include <stdio.h>

int main (void)
{
	int N;
	int eh_primo=1; /* Variavel que sinaliza se o valor é ou não primo*/
	/* 1 = é primo  ou 0 = não é primo */
	do
	{
		printf("Informe um valor inteiro maior que zero:");
		scanf ("%d", &N);
	}while(N<=0);
	
	for(int i=2; i<N ; i++)
	{
		if (N%i==0)
		{
			eh_primo = 0; /* Passa a nao ser primo */
			break;
		}
	}
	if ((eh_primo==1) && (N!=1))
	{
		printf("O valor %d eh primo!", N);
	}
	else
	{
		printf("O valor %d NAO eh primo!", N);
	}
}
