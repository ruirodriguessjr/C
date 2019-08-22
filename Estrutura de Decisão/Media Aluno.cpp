#include <stdio.h>

//Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
//A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
//A mensagem "Reprovado", se a média for menor do que sete;
//A mensagem "Aprovado com Distinção", se a média for igual a dez

int main(void)
{
	float n1, n2, m;
	printf("Primeira Nota: ");
	scanf("%2f", &n1);
	printf("Segunda Nota: ");
	scanf("%2f", &n2);
	m = ((n1 + n2) / 2);
	printf("%.2f", m);
	if(m==10)
	
		printf("\nAluno Aporvado com Louvor!!!");
	
	else if((m<10) && (m>=7))

		printf("\nAluno Aprovado!!!");
	
	else if((m>=5) && (m<7))
		printf("\nAluno em Recuperacao!!!");
	
	else
	{
		printf("\nAluno Reprovado!!!");
	}
	return(0);
}

