/*
Fa�a um programa que calcule a m�dia de n�meros reais. 
O programa dever� solicitar ao usu�rio, na fun��o principal, quantos n�meros ele deseja informar para ser calculada a m�dia. 
Ent�o, ele dever� realizar a leitura dos valores na funcao "calcular_media".
A fun��o "calcular_media" dever� receber a quantidade de valores a ser lidos.
ler os valores, calcular a media e retornar o valor da mesma.
Na funcao principal, com o retorno da funcao "calcular_media", imprima a m�dia dos valores.
OBS: O programa dever� permitir a leitura de no m�nimo 1 e no m�ximo 150 elementos, por�m, todos os valores devem ser obrigatoriamente positivos (Maiores do que Zero).
	Exemplo:
			Informe a quantidade de valores para calcular a m�dia (m�n: 1 e m�x: 150): 3
			1�. Valor: 10
			2�. Valor: 15
			3�. Valor: 2,3
			A m�dia dos valores �: 9,1
*/

#include <stdio.h>

int main(void)
{
	int qtd;
	float media=0;
	float calcular_media(int);
	
	do
	{
		printf("Informe a quantidade de valores que deseja ler (1-150):");
		scanf("%d",&qtd);
	}while ((qtd<1)||(qtd>150));
	
	media = calcular_media(qtd);
	
	printf("\n\nA media dos valores eh:%0.2f", media);
	
	return(0);
}

float calcular_media(int qtd)
{
	float valor, soma=0;
	for(int i=1; i<=qtd; i++)
	{
		printf("\nInforme um valor:");
		scanf("%f",&valor);
		soma = soma + valor;
	}
	return(soma/qtd);
}
