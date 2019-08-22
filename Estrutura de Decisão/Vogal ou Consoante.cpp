#include <ctype.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
	char letra;
	int laco;

	// laco para 5 interaçoes com o usuario
	for (laco = 0; laco < 5; laco++)
	{
		printf("\n\ndigite uma letra:\n");
		scanf("%c", &letra);
		// limpa o buffer do teclado evitando que a rotina trate o ENTER
		fflush(stdin);

		// a funcao isalpha <ctype.h> testa se o caracter informado é uma
		// letra entre 'A' e 'Z' e 'a' e 'z'.
		// ela retorna um valor maior que 0 (zero) se realmente for uma letra
		if (isalpha(letra) > 0)
		{
			// a funcao toupper <ctype.h> converte uma letra para maiusculo.
			// isso é feito apenas pra facilitar o teste sem ter que comparar
			// letras maiusculas e minusculas
			letra = toupper(letra);
			switch(letra)
			{
				// caso seja uma das letras abaixo exibe a mensagem de que
				// é uma vogal.
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					printf("\n\n<%c> é uma vogal\n", letra);
					break;
				default:
					// se não passou nos cases acima e com certeza é uma letra
					// então so pode ser uma consoante
					printf("\n\n<%c> é uma consoante\n", letra);
			}
		}
		else
		{
			// se chegou aqui é porque a funcao isalpha já identificou que não
			// é uma letra
			printf("\n\n<%c> não é uma letra\n", letra);
		}
	}
}
