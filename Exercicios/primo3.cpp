#include <stdio.h>

int main (void)
{
	int inicio, final;
	int eh_primo; /* Variavel que sinaliza se o valor é ou não primo*/
	/* 1 = é primo  ou 0 = não é primo */
	int verificar_primo(int);
	
	do
	{
		printf("Informe o inicio da sequencia (maior que 0):");
		scanf ("%d", &inicio);
	}while(inicio<=0);
	
	do
	{
		printf("Informe o final da sequencia (maior que %d):", inicio);
		scanf ("%d", &final);
	}while(final<=inicio);
	
	printf("\nOs valores primos sao:\n");
	
	for (int N=inicio; N<=final ;N++)
	{
		eh_primo = verificar_primo(N);

		if ((eh_primo==1) && (N!=1))
		{
			printf("\t%d", N);
		}
	}
}



int verificar_primo (int N)
{
	int i;
	for(i=2; i<N ; i++)
	{
		if (N%i==0)
		{
			return (0); /* Retorna 0 pois nao eh primo */
		}
	}
	return(1); /* Retorna 1 pois eh primo */
}
