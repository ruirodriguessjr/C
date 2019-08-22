#include<stdio.h>
int main(void){
	int soma=0,valor, contagem=1;
	while(contagem<=5){
		printf("Digite o %do. numero: ", contagem);
		scanf("%d", &valor);
		soma = soma + valor;
		contagem = contagem + 1;
	}
	printf("\nA soma dos valores eh: %d", soma);
	printf("\nO numero de vezes que a operacao foi realizada eh: %d", contagem-1);
	
	
	
}
