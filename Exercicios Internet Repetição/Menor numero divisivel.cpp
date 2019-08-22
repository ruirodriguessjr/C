//34. Fac¸a um programa que calcule o menor n´umero divis´ývel por cada um dos n´umeros de 1
//a 20? Ex: 2520 ´e o menor n´umero que pode ser dividido por cada um dos n´umeros de 1
//a 10, sem sobrar resto.
#include<stdio.h>
int main(void){
	int cont, menor=0, n;
	do{
		printf("Digite um numero entre 1 e 20: ");
		scanf("%d", &n);
	}while((n<1) || (n>20));
	for(cont=1;cont<=20;cont++){
		if(n%cont==0){
			menor=cont;
			printf(" %d ", menor);
			break;//coloquei o break para mostrar o menor numero divisivel, se eu tirar o break, ele mostra todos os numeros divisiveis.
		}
	}
	
	
	
	
	return(0);
}
