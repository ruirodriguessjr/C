#include <stdio.h>


//Fa�a um Programa que verifique se uma letra digitada � "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inv�lido.

int main(void)
{  
	int opcao = 0;
	printf("Digite [1] Masculino,  [2] Feminino e [3]Inv�lido: ");
	scanf("%d", opcao);
	if(opcao==1)
	{
		printf("Masculino!!!");
	}
	
	if(opcao==2)
	{
		printf("Feminino!!!");
	}	
	else{
		printf("Opcao Invalida!!!");
		}
	

  return 0;
}
