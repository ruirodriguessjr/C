//33. Dados n e dois n´umeros inteiros positivos, i e j, diferentes de 0, imprimir em ordem
//crescente os n primeiros naturais que s˜ao m´ ultiplos de i ou de j e ou de ambos. Exemplo:
//Para n = 6, i = 2 e j = 3 a sa´ýda dever ´a ser: 0,2,3,4,6,8.
#include<stdio.h>
int main(void){
	int n, cont, i=0, j=0;
	do{
		printf("Digite o valor de i: ");
		scanf("%d", &i);	
		printf("Digite o valor de j: ");
		scanf("%d", &j);
		printf("Digite um numero: ");
		scanf("%d", &n);
		for(cont=0;cont<=n;cont++){
			if(cont%i==0){
				printf(" %d\n ", cont);
			}if(cont%j==0){
				printf(" %d \n", cont);
			}
		}
	}while(n<0);
}
	
