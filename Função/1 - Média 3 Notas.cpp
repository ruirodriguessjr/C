#include<stdio.h>

int main(void){
	int cont;
	float nota, total=0, result;
	float media(float);
	do{
		for(cont=1;cont<4;cont++){
		printf("Digite a %do. nota: ", cont);
		scanf("%d", &nota);
		}
	}while((nota<0) || (nota>10));
	total = total + nota;
	result = media(total);
	printf("A media das notas sao: %d", result);
}
float media(float total){
	float media;
	media = total / 3;
	
	return(0);
}
