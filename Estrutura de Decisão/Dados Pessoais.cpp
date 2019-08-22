/*Faça um programa que leia e valide as seguintes informações:
Nome: maior que 3 caracteres;
Idade: entre 0 e 150;
Salário: maior que zero;
Sexo: 'f' ou 'm';
Estado Civil: 's', 'c', 'v', 'd';*/
#include <stdio.h>
int main()
{
	const char *nome[3];
	int idade=0, sexo, estado, m, f, s, c, v, d;
	float salario;
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if ((idade <= 0) && (idade <= 150));
	{
		printf("Error, Digite uma idade valida!!!");
	}
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	if (salario <= 0)
	{
		printf("Error, nao eh possivel trabalhar de graça aqui!!!");
	}
	printf("Digite seu sexo: ");
	scanf("%d", &sexo);
	if ((sexo == m) && (sexo == f))
	{
		printf("Erro, opcao Invalida!!!");
	}
	printf("Digite seu estsdo civil: ");
	scanf("%s", &estado);
	if ((estado != s) || (estado != c) || (estado != v) || (estado != d)) 
	{
		printf("Error, opcao invalida!!!");
	}
	printf("Seu nome eh: %s", nome);
	printf("Sua idade eh: %d", idade);
	printf("Seu salario eh: %.2f", salario);
	printf("Seu sexo eh: %s", sexo);
	printf("Seu estado civil é: %s", estado);
	
	return(0);

}

