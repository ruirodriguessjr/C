# include <stdio.h>

//Fa�a um Programa que pe�a dois n�meros e imprima a soma.

int main(void)
{
	int n1, n2, soma;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	soma = n1 + n2;	
	printf("A soma entre %d e %d eh: %d", n1, n2, soma);
	
	return(0);
	
}
