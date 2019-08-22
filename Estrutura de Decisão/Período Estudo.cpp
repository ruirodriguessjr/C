//Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. 
//Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

#include <stdio.h>
#include <stdlib.h>
int main(){
	int opcao;	
	printf("Em que turno voce estuda?\n");
	printf("Digite [1] - Matutino, [2] - Vespertino e [3] - Noturno\n");
	scanf("%d", &opcao);
	if (opcao == 1){
		printf("Voce estuda no periodo Matutino!!!\n");
	}else if(opcao == 2){
		printf("Voce estuda no periodo Vespertino!!!\n");
	}else if(opcao == 3){
		printf("Voce estuda no periodo Noturno!!!\n");	
	}else{
		printf("Voce nao estuda seu vagabundo!!!\n");
	}
	system("pause");
	return(0);
}
