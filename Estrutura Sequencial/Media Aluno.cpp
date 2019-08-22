# include <stdio.h>

//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

int main(void)
{
	float n1, n2, n3, n4, media;
	printf("Digite a Primeira nota: ");
	scanf("%d", n1);
	printf("Digite a Segunda nota: ");
	scanf("%d", n2);
	printf("Digite a Terceira nota: ");
	scanf("%d", n3);
	printf("Digite a Quarta nota: ");
	scanf("%d", n4);
	media = (n1 + n2 + n3 + n4) / 4;
	printf("Primeira nota: %d", n1);
	printf("Segundaa nota: %d", n2);
	printf("Terceira nota: %d", n3);
	printf("Quarta nota: %d", n4);
	printf("Sua Media: %d", media);
	return(0);
	
}
