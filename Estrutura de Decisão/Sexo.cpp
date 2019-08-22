#include <stdio.h>


//Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

int main(void)
{  
	int opcao = 0;
	printf("Digite [1] Masculino,  [2] Feminino e [3]Inválido: ");
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
