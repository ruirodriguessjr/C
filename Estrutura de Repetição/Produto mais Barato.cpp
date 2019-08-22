//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
#include <stdio.h>
#include <stdlib.h>
int main(){
	float p1, p2, p3;
	printf("Preco produto 1: ");
	scanf("%f", &p1);
	printf("Preco produto 2: ");
	scanf("%f", &p2);
	printf("Preco produto 3: ");
	scanf("%f", &p3);
	if((p1 < p2) && (p1 < p3)){	
		printf("Compre p1, eh o mais barato e custa R$ %.2f\n", p1);
	}else if((p2 < p1) && (p2 < p3)){
		printf("Compre p2, eh o mais barato e custa R$ %.2f\n", p2);
	}else if((p3 < p1) && (p3 < p2)){
		printf("Compre p3, eh o mais barato e custa R$ %.2f\n", p3);
	}else{
		printf("Os valores são iguais compre qualquer um!!!\n");
	}
	system("pause");
	return(0);
}

