//24. Escreva um programa que leia um n´umero inteiro e calcule a soma de todos os divisores
//desse n´umero, com excec¸ ˜ao dele pr ´oprio. Ex: a soma dos divisores do n´umero 66 ´e
//1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
#include<stdio.h>
int main(void){
	int n, cont, soma=0;
	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
	}while(n<=0);
	for(cont=1;cont<n;cont++){
		if(n%cont==0){
			soma=soma+cont;
			printf("Divisivel por: %d\n", cont);
		}
	}
	printf("A soma dos divisores eh: %d", soma);
	
	
	return(0);
}
