//20. Ler uma sequˆencia de n´umeros inteiros e determinar se eles s˜ao pares ou n˜ao. Dever ´a
//ser informado o n´umero de dados lidos e n´umero de valores pares. O processo termina
//quando for digitado o n´umero 1000.
#include<stdio.h>

int main(void){
	
	int c, n, i, f, par=0, totn;
	printf("Digite o inicio da sequencia: ");
	scanf("%d", &i);
	printf("Digite o final da sequencia: ");
	scanf("%d", &f);
		for(c=i;c<=f;c++){
			printf("\nDigite um numero: ");
			scanf("%d", &n);
			totn=n;
			if(n%2==0){
				par=par+1;
				printf("O numero eh par!");
			}else{
				printf("O numero eh impar!");
			}
		}
	printf("\nO total de numeros informados foram: %d", totn);
	printf("\nOs numeros pares informados foram: %d", par);
	
	
	
	
	return(0);
}
