//Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
#include <stdio.h>
#include <stdlib.h>
int main(){
	int opcao;
	printf("====================\n");
	printf("===Dias da Semana===\n");
	printf("====================\n");
	printf("");
	printf("Digite [1] - Domingo\n");
	printf("Digite [2] - Segunda\n");
	printf("Digite [3] - Terca\n");
	printf("Digite [4] - Quarta\n");
	printf("Digite [5] - Quinta\n");
	printf("Digite [6] - Sexta\n");
	printf("Digite [7] - Sabado\n");
	printf("Qual é sua escolha: ");
	scanf("%d", &opcao);
	if(opcao == 1){
		printf("Um bom Domingo Pra voce!!!\n");
		}else if(opcao == 2){
			printf("Levanta preguica, Segunda vamos trabalhar!!!\n");
		}else if (opcao == 3){
			printf("Terca chegou, bora organizar melhor sua semana.\n");
		}else if(opcao == 4){
			printf("Bora fazer aquele happy hour de quarta pra assistir ao jogo!!!\n");
		}else if(opcao == 5){
			printf("Bora que a semana ta acabando, ja eh Quinta feira.\n");
		}else if(opcao == 6){
			printf("Hoje eh sexta feira!!!!!!!!!!!\n");
		}else if(opcao == 7){
			printf("Acordei tarde hoje, mais a noite sair com aquela gatinha porque hoje eh sabado e eu vou arrasar!!!\n");
	}else{
		printf("Opcao Invalida!!!\nn");
	}
	

	system("pause");
	return(0);
}

