//42. Fac¸a um programa que leia um conjunto n˜ao determinado de valores, um de cada vez, e
//escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
//a entrada de dados com um valor negativo ou zero.
#include<stdio.h>
# include <math.h>  // necessária para pow() e sqrt()
int main(void){
	float n, quad=2, cubo=3;
	do{
		printf("Digite um numero inteiro, positivo acima de 0: ");
		scanf("%f", &n);
		if(n<=0){
			printf("Fim de Programa.\n-");
		}else{
				
			printf("o Numero %0.1f elevado ao %0.1f = %0.1f\n", n, cubo, pow(n, cubo));
   			printf("O numero %0.1f elevado a %0.1f = %0.1f\n", n, quad, pow(n, quad)); // pow(base, expoente)
  	 		printf("A raiz quadrada de %0.1f = %0.1f\n", n, sqrt(n));
  		}
	}while(n<1);
	
}

