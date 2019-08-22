//8 - Crie uma função que converta graus para radianos e outra função que converta radianos para graus. Fazer um aplicativo para testar as funções.
#include<stdio.h>
int main(void){
	int g, p, pi, graus;
	int radianos(int, int);
	int celsius(int, int);
	printf("Digite o valor de pi: ");
	scanf("%d", &pi);	
	printf("Digite o valor de graus: ");
	scanf("%d", &graus);
	p = radianos(pi);
	printf("O valor de radianos eh: ");
	g = celsius (graus);
	printf("O valor de graus eh: ");
		
	
	return(0);
}
int radianos(int pi, int graus){
	int result;
	result = (pi * graus);
	return(0);

	
}
int celsius(int graus, int pi){
	int result;
	result = (graus / pi);
	return(0);
}
