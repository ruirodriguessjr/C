//32. Fac¸a um programa que simula o lanc¸amento de dois dados, d1 e d2, n vezes, e tem como
//sa´ýda o n´umero de cada dado e a relac¸ ˜ao entre eles (>,<,=) de cada lanc¸amento.
#include<stdio.h>
int main(void){
	int d1, d2, n, i;
	printf("Digite o numero de vezes que deseja jogar os dados: ");
	scanf("%d", &n);
	for(i=1;i<n;i++){
		do{
			printf("Digite o valor do Dado1: ");
			scanf("%d", &d1);
		}while((d1<1) || (d1>6));
		do{
			printf("Digite o valor do Dado2: ");
			scanf("%d", d2);
		}while((d2<1) || (d2>6));
			if(d1>d2){
				printf("O valor do dado1 eh maior que o valor do dado2.");
			}
			else if (d2>d1){
				printf("O valor do dado2 eh maior que o valor do dado1.");
			}
			else{
				printf("Tato o valor do dado1 quanto o do dado2 sao iguais.");
			}
		}
	return(0);
}



