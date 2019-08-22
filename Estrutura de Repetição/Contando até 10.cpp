#include <stdio.h>
#include <stdlib.h>
int main(){
	int salto, valor, contador = 0;
	printf("Digite ate que valor quer contar: ");
	scanf("%d", &valor);
	printf("Digite qual eh o salto da contagem: ");
	scanf("%d", &salto);
	while(contador <= valor){
		printf("%d\n", contador);
		contador = contador + salto;
	}
	
	
	
	system("pause");
	return(0);
}

