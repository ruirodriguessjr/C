#include <stdio.h>

//Fa�a um programa que pe�a uma nota, entre zero e dez. 
//Mostre uma mensagem caso o valor seja inv�lido e continue pedindo at� que o usu�rio informe um valor v�lido.


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

