//Faça um Programa que leia três números e mostre-os em ordem decrescente.
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1, n2, n3;
	printf("Primeiro numero: ");
	scanf("%d", &n1);
	printf("Primeiro numero: ");
	scanf("%d", &n2);
	printf("Primeiro numero: ");
	scanf("%d", &n3);
	if ((n1 > n2) && (n1 >n3)){
	    printf("%d\n", n1);
	}else if ((n2 > n3) && (n2 > n1)){
		printf("%d\n", n2);
	}else if ((n3 > n1) && (n3 > n2)){
		printf("%d\n", n3);
	//Agora o numero do meio
	}
	if ((n1 > n3) && (n1 < n2)){
		printf("%d\n", n1);
	}else if((n2 > n1) && (n2 < n3)){
		printf("%d\n", n2);
	}else if ((n3 > n2) && (n3 > n1)){
		printf("%d\n", n3);
	}else if ((n2 < n1) && (n2 > n3)){
		printf("%d", n2);
	}if ((n1 < n2) && (n1 < n3)){
		printf("%d\n", n1);
	}else if ((n2 < n3) && (n2 < n1)){
		printf("%d\n", n2);
	}else if ((n3 < n1) && (n3 < n2)){
		printf("%d\n", n3);
	}
	
	system("pause");
	return(0);
}
