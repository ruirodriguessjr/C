//22. Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
//uma sequˆencia arbitr ´ aria de notas (v ´ alidas no intervalo de 10 a 20) e que mostre na tela,
//como resultado, a correspondente m´edia aritm´ etica. O n´umero de notas com que o aluno
//pretenda efetuar o c´ alculo n˜ao ser´a fornecido ao programa, o qual terminar ´a quando for
//introduzido um valor que n˜ao seja v´ alido como nota de aprovac¸ ˜ao.
#include<stdio.h>
int main(void){
	int notas, qtd, cont;
	float s;
	float somamedia(float, int);
		printf("Digite a quantidade de notas que quer digitar: ");
		scanf("%d", &qtd);
		do{	
			for(cont=1;cont<=qtd;cont++){
				do{
					printf("Digite a %d.o nota dentro do intervalo de 10 a 20: ", cont);
					scanf("%d", &notas);
					if((notas<10) || (notas>20)){
						printf("O numero digitado esta fora do intervalo.\n");
					}
				}while((notas<10) || (notas>20));				
				s = somamedia(notas, qtd);
			}
		}while((notas<10) || (notas>20));

	return(0);
}
float somamedia(float notas, int qtd){
	float soma=0, media=0;
	if((notas>=10) && (notas<=20)){
		soma=soma+notas;
		media=soma/qtd;
		printf("\nA soma das notas eh: %.2f", soma);
		printf("\nA media das notas digitadas eh: %.2f", media);		
	}
}
