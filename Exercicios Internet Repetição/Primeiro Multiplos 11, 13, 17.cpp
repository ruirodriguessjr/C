//26. Faca um algoritmo que encontre o primeiro m´ ultiplo de 11, 13 ou 17 ap´os um n´umero dado.
#include<stdio.h>
int main(void){
	int cont, n1, n2, n3;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	for(cont=0;cont<=100;cont++){
		if(cont%11==0){
			printf("Divisiveis por %d da sequencia sao: %d\n", n1, cont);
		}
	}
	printf("Digite um numero: ");
	scanf("%d", &n1);
	for(cont=0;cont<=100;cont++){
		if(cont%13==0){
			printf("Divisiveis por %d da sequencia sao: %d\n", n2, cont);
		}
	}
	printf("Digite um numero: ");
	scanf("%d", &n1);
	for(cont=0;cont<=100;cont++){
		if(cont%17==0){
			printf("Divisiveis por %d da sequencia sao: %d\n", n3, cont);
		}
	}
	
	return(0);
}
