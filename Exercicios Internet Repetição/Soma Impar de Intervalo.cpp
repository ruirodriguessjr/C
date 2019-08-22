//35. Fac¸a um programa que some os n´umeros impares contidos em um intervalo definido
//pelo usu´ ario. O usu´ ario define o valor inicial do intervalo e o valor final deste intervalo
//e o programa deve somar todos os n´umeros ´ýmpares contidos neste intervalo. Caso o
//usu´ ario digite um intervalo inv´ alido (comec¸ando por um valor maior que o valor final) deve
//ser escrito uma mensagem de erro na tela, “Intervalo de valores inv´ alido” e o programa
//termina. Exemplo de tela de sa´ýda: Digite o valor inicial e valor final: 5
//10. Soma dos mpares neste intervalo: 21.
#include<stdio.h>
int main(void){
	int i, f, cont, somaimp=0;
	printf("Digite o inicio do intervalo: ");
	scanf("%d", &i);
	printf("Digite o final do intervalo: ");
	scanf("%d", &f);
	if(i>f){
		printf("Intervalo Invalido, Tente novamente.");
	}		
	for(cont=i;cont<=f;cont++){
		if(cont%2==1){
			somaimp=somaimp+cont;
		}
	}
	printf("A soma dos numeros impares digitdos eh: %d", somaimp);
	
	return(0);
}
