#include <stdio.h>
#include <stdlib.h>
int main(){
	int contador = 0, num, soma = 0, maior = 0, menor = 0; 
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num == 1){
			maior = num;
			menor = num;
		}
		else if (num > maior){
			maior = num;
		}else{
		    (num < menor);
			menor = num;
		}
		
		soma = soma + num;
		contador++;
		
	}while(contador < 4);
	printf("A soma dos valores digitados eh: %d\n", soma);
	printf("O maior numero digitado eh: %d\n", maior);
	printf("O menor numero digitado eh: %d\n", menor);


	
	
	system("pause");
	return(0);
}

