#include<stdio.h>
/*só verifica se o valor recebido é ou não primo*/
// Retorna 0 - Não é primo ou 1 - se eh primo.
int main(void){
	int qtd, inicio, soma;
	int primos(int, int);
	do{
		
		printf("Digite o inicio: ");
		scanf("%d", &inicio);

	}while(inicio<=0);
	
	do{
		printf("Informe a quantidade de valores primos desejada: ");
		scanf("%d", &qtd);
	}while(qtd<=0);
	soma = primos(inicio, qtd);
	
	printf("\nA soma dos valores impresos eh: %d", soma);
	
	return(0);
}

int eh_primo(int n){
	int cont;
	for(cont=2;cont<n;cont++){
		if(n%cont==0){
			return(0);// nao eh primo.
		}
	}
	if(n==1){
		return(0);// numero 1 não eh primo.
	}
	return(1);
}

int primos(int inicio, int qtd){
	int soma=0, cont=0, resp;
	int eh_primo(int);
	for(;cont<qtd;){
		resp = eh_primo(inicio);
		if(resp==1){
			printf("Numero Primo %d\n", inicio);
			soma = soma + inicio;
			cont++;		
		}
		inicio++;
	}
	return(soma);
}





