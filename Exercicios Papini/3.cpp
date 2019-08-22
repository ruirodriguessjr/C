//3. Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe a quantidade de
//números ímpares e pares lidos. Calcule também a soma dos números pares e a média dos números ímpares.
#include<stdio.h>
int main(void){
	int num, cont, par=0, somapar=0, impar=0, media=0;
	for(cont=1;cont<11;cont++){
	do{
			printf("Digite o %d.o numero: ", cont);
			scanf("%d", &num);
				if(num%2==0){
					par = par + 1;
					somapar = somapar + num;
				}else if(num%2==1){
					media = ((media + num) / impar);
					impar = impar + 1;				
				}
	}while(num<=0);
	}
	printf("\nA quantidade de nmeros pares eh: %d", par);
	printf("\nA quantidade de numeros impares eh: %d", impar);
	printf("\nA soma dos numeros pares eh: %d", somapar);
	printf("\nA media de numero impar eh: %d", media);
	return(0);
}
