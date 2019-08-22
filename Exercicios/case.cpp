#include <stdio.h>

int main(void)
{
	int valor;
	
	do
	{
		printf("Informe um valor (0-4   Obs: -1 Sai do Programa):");
		scanf("%d", &valor);
		
		switch(valor)
		{
			case 0:	printf("Digitou 0!");
					break;
					
			case 1:	printf("Digitou 1!");
					break;
					
			case 2:	printf("Digitou 2!");
				    break;
				    
			case 3:	printf("Digitou 3!");
					break;
					
			case 4:	printf("Digitou 4!");
					break;
			
			case -1:	printf("\n\nFIM");
						break;
					
			default: printf("Valor invalido!");
		}
	}while(valor!=-1);
}
