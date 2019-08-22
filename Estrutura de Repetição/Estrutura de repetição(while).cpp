#include<stdio.h>
int main(void){
	int n1=0, n, media=0, x;
	printf("Digite um numero: ");
	scanf("%d", &n);
	while(n1<n){
		printf("contador");
		scanf("%d", &x);
		media = media + x;
		n1 = n1 + 1;
		
	}
	printf("A media do numero eh: %d", media/n);
	
	
	
}
