#include <stdio.h>

//Fa�a um Programa que converta metros para cent�metros.

int main(void)
{
	
	float m, cm;
	printf("Digite um valor em metros: ");
	scanf("%f", &m);
	cm = m * 100;
	printf("O valor de %.2fm, agora eh: %.2fcm", m, cm);
	return(0);
	
}
