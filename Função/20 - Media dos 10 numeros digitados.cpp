//6. Fac¸a um programa que leia 10 inteiros e imprima sua m´ edia.
#include<stdio.h>
int main(void){
	int num;	
	float m;
	float media(int);
	m = media(num);
	printf("A media dos numeros digitdos eh: %.2f", m);
	return(0);
}
float media(int num){
	int cont, n;
	float soma=0;
	float media=0;
	for(cont=0;cont<2;cont++){
		printf("Digite o %d.o numero: ", cont+1);
		scanf("%d", &n);
		soma = soma + n;
	}
	media = soma / cont;
	return(media);
}

