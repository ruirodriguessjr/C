//Fac¸a um algoritmo utilizando o comando while que mostra uma contagem regressiva
//na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” ap´os a
//contagem.
#include<stdio.h>
int main(void){
	int i;
	i=11;
	while(i>0){
		i--;
		printf("%d\n", i);
	}
	printf("\nFim.");
	
	
	return(0);
}
