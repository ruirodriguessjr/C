//Escreva um programa que escreva na tela, de 1 at ´e 100, de 1 em 1, 3 vezes. A primeira
//vez deve usar a estrutura de repetic¸ ˜ao for, a segunda while, e a terceira do while.
#include<stdio.h>
int main(void){
	int i=0;
/*	while(i<100){
		i++;
		printf("%d\n", i);
	}*/
	do{
		printf("%d\n", i);
		i++;
	}while(i<=100);
/*	for(i=1;i<=100;i++){
		printf("%d\n", i);
	}
*/	
	
	
	return(0);
}
