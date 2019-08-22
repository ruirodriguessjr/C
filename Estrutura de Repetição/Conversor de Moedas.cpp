#include <stdio.h>
#include <stdlib.h>
int main(){
	float real, dolar, euro;
	int contador = 1, qte;
	printf("Quantidade de vezes que quer converter cada moeda: ");
	scanf("%d", &qte);
	do{
		printf("Qual  valor que quer converter: R$ ");
		scanf("%f", &real);
		dolar = (real / 3.29);
		euro = (real / 4.05);
		printf("O valor convertido em dollar eh: US$ %.2f\n", dolar);
		printf("O valor convertido em Euro eh: EUR %.2f\n", euro);

		contador++;
	}while(contador <= qte);
	
	
	

	system("pause");
	return(0);
}

