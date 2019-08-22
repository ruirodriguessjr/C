//39. Fac¸a um programa que calcule a ´area de um tri ˆangulo, cuja base e altura s˜ao fornecidas
//pelo usu´ ario. Esse programa n˜ao pode permitir a entrada de dados inv´ alidos, ou seja,
//medidas menores ou iguais a 0.
#include<stdio.h>
int main(void){
	int a, b, h;
	do{
		
		printf("Digite o valor da base: ");
		scanf("%d", &b);
		printf("Digite o valor da altura: ");
		scanf("%d", &h);
	}while((b<0) || (h<0));
	
	printf("A area do triangulo eh: %d", a);
	
	
	
	return(0);
}
