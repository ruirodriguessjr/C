#include<stdio.h>
int main(void){
	int qtde;
	float calculo(int);
	float resp;
	do{	
		printf("Digite a quantidade de elementos da sequencia: ");
		scanf("%d", &qtde);
	}while(qtde<=0);
	resp = calculo(qtde);
	printf("A soma eh: %f", resp);
	return(0);
	
	
}
float calculo(int qtde){
	float i, j, soma=0;
	for(i=1,j=1;j<=qtde;i=i+2,j++){
		soma = soma + (i/j);
			
	}
	return(soma);
}
