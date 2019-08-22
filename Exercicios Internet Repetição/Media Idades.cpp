//43. Fac¸a um programa que leia um n´umero indeterminado de idades de indiv´ýduos (pare
//quando for informada a idade 0), e calcule a idade m´edia desse grupo.
#include<stdio.h>
int main(void){
	float qtidade=0, media=0, idade=0, soma=0;
	do{
		printf("Digite sua idade: ");
		scanf("%f", &idade);
		if(idade<=0){
			printf("Idade inexistente, Fim de Programa.\n");
		}else{
			qtidade++;
			soma=soma+idade;
			media=soma/qtidade;
		}
	}while(idade>0);
	printf("A media das idades do grupo digitado eh: %.2f", media);
	
	
	
}
