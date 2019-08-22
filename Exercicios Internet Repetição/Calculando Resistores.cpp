//41. Fac¸a um programa que calcula a associac¸ ˜ao em paralelo de dois resistores R1 e R2
//fornecidos pelo usu´ ario via teclado. O programa fica pedindo estes valores e calculando
//at ´e que o usu´ ario entre com um valor para resist ˆencia igual a zero.
//R =
//R1  R2
//R1 + R2
#include<stdio.h>
int main(void){
	int cont, r, r1, r2, qtvezes;
	int resistor(int, int);
		printf("Digite a quantidade de vezes da inserssao de dados: ");
		scanf("%d", &qtvezes);
		for(cont=1;cont<=qtvezes;cont++){
			do{
				printf("Digite o valor de R1: ");
				scanf("%d", &r1);
				printf("Digite o valor de R2: ");
				scanf("%d", &r2);	
			}while((r1<0) || (r2<0));
		r = resistor(r1, r2);
		return(0);
			
		}
}
int resistor(int r1, int r2){
	int result;
	if((r1==0) || (r2==0)){
			printf("\nFim de Programa.");
	}else{
		result=((r1*r2)/(r1+r2));
		printf("O resultado do paralelo dos resistores eh: %d\n\n", result);
	}
	return(0);
}

