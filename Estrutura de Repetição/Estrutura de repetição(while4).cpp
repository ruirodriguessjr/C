#include<stdio.h>
int main(void){
	int a, b;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	while(a<b){
		a = a + 1;
		printf("%d\n", a);
	}
	
	
}
