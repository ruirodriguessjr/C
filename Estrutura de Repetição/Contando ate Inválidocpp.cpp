#include <stdio.h>

//Faça um programa que peça uma nota, entre zero e dez. 
//Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.


int main(void)
{  
	int contador;
	//for(contador = 0;contador <=10;contador++);
	do
	{
	printf("Digite uma nota entre 0 e 10: ");
	scanf("%d", &contador);
	}while(contador<=10);
	printf("%d", contador);

}

