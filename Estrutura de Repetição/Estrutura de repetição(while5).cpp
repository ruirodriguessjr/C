#include<stdio.h>
int main(void){
	int vezes, num, soma=0, cont=0;
	printf("Digite o numero de vezes que quer somar: ");
	scanf("%d", &vezes);
	while(cont<vezes){
		printf("Digite o numero que quer somar: ");
		scanf("%d", &num);
		cont = cont + 1;
		soma = soma + num;
	}
	printf("A soma dos numeros digitados eh: %d", soma);
	
	
	
	return(0);
}
