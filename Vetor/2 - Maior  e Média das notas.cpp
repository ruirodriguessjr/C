
#include<stdio.h>
int main(void){
	int i;
	float soma=0;
	float notas[5], media=0, maior=0;
	for(i=0;i<5;i++){
		do{
			printf("Digite o %da. nota: ", i+1);
			scanf("%f", &notas[i]);
		}while((notas[i] < 0) || (notas[i] > 10));
		soma = soma + notas[i];
		if(notas[i]>maior){
			maior=notas[i]; 
		}
	}
	for(i=0;i<5;i++){
		printf("A sua %do. nota foi: %.2f\n", i+1, notas[i]);
	}
	media = soma/5;
	printf("A media das notas eh: %.2f\n", media);
	printf("A maior nota digitada foi: %.2f", maior);
	return(0);
}
