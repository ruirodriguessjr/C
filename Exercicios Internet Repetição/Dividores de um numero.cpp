//23. Faca um algoritmo que leia um n´umero positivo e imprima seus divisores.
#include<stdio.h>
int main(void){
	int n, cont;
	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
	}while(n<=0);
	for(cont=1;cont<n;cont++){
		if(n%cont==0){
			printf("Divisivel por: %d\n", cont);
		}
	}
	
	
	return(0);
}
