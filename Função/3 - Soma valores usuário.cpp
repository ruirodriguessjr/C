// Fac¸a um programa que pec¸a ao usu´ ario para digitar 10 valores e some-os.
#include<stdio.h>
int main(void){
	int v, cont, valor=0;
	int soma(int);
	v = soma(valor);
	printf("A soma dos valores digitados eh: %d", v);
	return(0);
}
int soma(int valor){
	int soma=0, cont, num;
	for(cont=1;cont<=10;cont++){
		printf("Digite o %d.o valor: ", cont);
		scanf("%d", &num);
		soma = soma + num;
	}
	return(soma);
}

