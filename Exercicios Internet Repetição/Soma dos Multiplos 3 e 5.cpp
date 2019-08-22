//25. Fac¸a um programa que some todos os n´umeros naturais abaixo de 1000 que s˜ao m´ ultiplos
//de 3 ou 5.
#include<stdio.h>
int main(void){
	int cont, soma=0;
	for(cont=1;cont<1000;cont++){
		if((cont%3==0) || (cont%5==0)){
			soma=soma+cont;
			printf("Divisiveis por 3 da sequencia sao: %d\n", cont);
			printf("Divisiveis por 5 da sequencia sao: %d\n", cont);
		}
	}
	printf("A soma dos multiplos de 3 e 5 eh: %d", soma);
	
	
	return(0);
}
