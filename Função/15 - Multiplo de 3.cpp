//1. Fac¸a um programa que determine o mostre os cinco primeiros m´ ultiplos de 3, considerando
//n´umeros maiores que 0.
#include<stdio.h>
int main(void){
	int cont, cont1, m, mu;
	int multiplo(int);
	int multiplos(int);
	for(cont=1;cont<=10;cont++){
		m = multiplo(cont);
	}
	for(cont1=1;cont1<=10;cont1++){
		mu = multiplos(cont1);
	}
	return(0);
}
int multiplo(int cont){
	if(cont%3==0){
		printf("\nO Numero %d eh multiplo de 3.", cont);
	}else{
		printf("\nO Numero %d nao eh multiplo de 3.", cont);
	}
}
int multiplos(int cont1){
	if(cont1%5==0){
		printf("\nO Numero %d eh multiplo de 5.", cont1);
	}else{
		printf("\nO Numero %d nao eh multiplo de 5.", cont1);
	}
	return(0);
}
