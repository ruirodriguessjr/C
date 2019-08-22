/*
Faça um programa que calcule a média de números reais. 
O programa deverá solicitar ao usuário, na função principal, quantos números ele deseja informar para ser calculada a média. 
Então, ele deverá realizar a leitura dos valores na funcao "calcular_media".
A função "calcular_media" deverá receber a quantidade de valores a ser lidos.
ler os valores, calcular a media e retornar o valor da mesma.
Na funcao principal, com o retorno da funcao "calcular_media", imprima a média dos valores.
OBS: O programa deverá permitir a leitura de no mínimo 1 e no máximo 150 elementos, porém, todos os valores devem ser obrigatoriamente positivos (Maiores do que Zero).
	Exemplo:
			Informe a quantidade de valores para calcular a média (mín: 1 e máx: 150): 3
			1º. Valor: 10
			2º. Valor: 15
			3º. Valor: 2,3
			A média dos valores é: 9,1
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
