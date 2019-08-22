//7. Fac¸a um programa que leia 10 inteiros positivos, ignorando n˜ao positivos, e imprima sua m´ edia.

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
	int cont, n, inteiro=0;
	float soma=0;
	float media=0;
	for(cont=1;cont<=10;cont++){
		printf("Digite o %d.o numero: ", cont);
		scanf("%d", &n);
		if(n>0){
			inteiro++;
			soma = soma + n;
	}

	}
	media = soma / inteiro;
	return(media);
}
