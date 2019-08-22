#include<stdio.h>
int main(void){
	int hora, minut, segund, totseg;
	int conv_seg(int, int, int);
	do{
		printf("Digite o valor da hora desejada: ");
		scanf("%d", &hora);
	}while((hora<0) || (hora>23));
	
	do{
		printf("Digite os minutos: ");
		scanf("%d", &minut);
	}while((minut<0) || (minut>59));
	
	do{
		printf("Digite a quantidade de segundos: ");
		scanf("%d", &segund);
	}while((segund<0) || (segund>59));
	
	totseg = conv_seg(hora, minut, segund);
	printf("O valor em segundos da(s) hora(s), minutos(s) e segundo(s) fornecidos eh: %d", totseg);

	return(0);	
}
int conv_seg(int hora, int minut, int segund){
	int conv_hora, conv_minut, soma=0;
	conv_hora = (hora*60)*60;
	conv_minut = minut * 60;
	soma = conv_hora + conv_minut + segund;
	return(soma);
}
