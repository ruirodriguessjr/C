//3. Fa�a um programa que solicite ao usu�rio 10 n�meros inteiros e, ao final, informe a quantidade de
//n�meros �mpares e pares lidos. Calcule tamb�m a soma dos n�meros pares e a m�dia dos n�meros �mpares.
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
