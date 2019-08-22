//Fac¸a um programa que determine o mostre os cinco primeiros m´ ultiplos de 3, considerando
//n´umeros maiores que 0.
#include<stdio.h>
int main(void){
	int cont, mult=0;
	printf("Multiplos!!");
	for(cont=1;cont<=15;cont++){
		if(cont%3==0){
			printf("\nO %d eh multiplo de 3.", cont);
			mult++;
			
		}	
	}
	
	return(0);
}

