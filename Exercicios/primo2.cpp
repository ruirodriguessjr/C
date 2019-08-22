#include <stdio.h>

int main (void)
{
	int N;
	int eh_primo; /* Variavel que sinaliza se o valor é ou não primo*/
	/* 1 = é primo  ou 0 = não é primo */
	int verificar_primo(int);
	
	do
	{
		printf("Informe um valor inteiro maior que zero:");
		scanf ("%d", &N);
	}while(N<=0);
	
	eh_primo = verificar_primo(N);

	if ((eh_primo==1) && (N!=1))
	{
		printf("O valor %d eh primo!", N);
	}
	else
	{
		printf("O valor %d NAO eh primo!", N);
	}
}



int verificar_primo (int N)
{
	for(int i=2; i<N ; i++)
	{
		if (N%i==0)
		{
			return (0); /* Retorna 0 pois nao eh primo */
		}
	}
	return(1); /* Retorna 1 pois eh primo */
}
