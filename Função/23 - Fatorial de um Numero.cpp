// Calcule o Fatorial de um numero na função fatorial, e retorne e imprima na função principal.
#include<stdio.h>
int main(void){
	int num, f;
	int fatorial(int);
	printf("Digite um numero: ");
	scanf("%d", &num);
	f = fatorial(num);
	printf("O valor do Fatorial de %d, eh: %d", num, f);
}
int fatorial(int num){
	int cont, r=1;
	for(cont=1;cont<=num;cont++){
		r = r * cont;
		
	}
	return(r);
}
