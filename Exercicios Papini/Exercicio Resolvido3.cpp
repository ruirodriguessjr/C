/*
Uma ag�ncia banc�ria possui v�rios clientes que podem fazer investimentos 
com rendimentos mensais conforme as informa��es a seguir. 
Fa�a um programa que na fun��o principal, declare vari�veis e atribua valores para: 
c�digo do cliente, tipo de conta de investimento e, o valor a ser investido.  
Ap�s isso, calcule o rendimento mensal do investimento definido pelo cliente atraves
da funcao "calcular_rendimento".
A fun��o "calcular_rendimento" dever� retornar o valor do rendimento,
de acordo com o tipo de investimento escolhido.
Na funcao principal, O resultado do rendimento obtido dever� ser impresso.

TIPO CONTA INVESTIMENTO		DESCRI��O		RENDIMENTO MENSAL
		1					Poupan�a			1,5%
		2					Poupan�a++			2,0%	
		3					Capitaliza��o		4,0%

			PROGRAMA - INVESTIMENTOS
			Cliente = 10
			Tipo de Conta = 2
			Investimento = 1.000,00
		O rendimento da Capitaliza��o �: 20,00
*/


#include <stdio.h>

int main (void)
{
	int cod_cliente, tipo_invest;
	float valor_investido, rendimento;
	float calcular_rendimento(int, float);
	
	printf("\nPROGRAMA - INVESTIMENTOS\n\n");	
	printf("\nInforme o codigo do cliente: ");
	scanf("%d",&cod_cliente);
	
	printf("\nQual o valor do investimento: ");
	scanf("%f", &valor_investido);
	
	printf("\nEscolha o tipo do investimento:");
	printf("\nTIPO CONTA \t DESCRICAO \t RENDIMENTO MENSAL\n");
	printf("\t 1 \t Poupanca \t 1,5%\n");
	printf("\t 2 \t Poupanca++ \t 2,0%\n");
	printf("\t 3 \t Capitalizacao \t 4,0%\n");
	do
	{
		printf("\nQual o tipo desejado (1-3):");
		scanf("%d", &tipo_invest);
	}while ((tipo_invest<1) || (tipo_invest>3));
	
	rendimento = calcular_rendimento(tipo_invest, valor_investido);
	
	printf("\n\nO rendimento da aplicacao eh: %0.2f", rendimento);
	
	return(0);
}

float calcular_rendimento (int tipo_invest, float valor_investido)
{
	float resultado=0;
	switch(tipo_invest)
	{
		case 1:	resultado = valor_investido * 0.015;
				break;
		case 2: resultado = valor_investido * 0.02;
				break;
		case 3: resultado = valor_investido * 0.04;
				break;
	}
	return(resultado);
}
