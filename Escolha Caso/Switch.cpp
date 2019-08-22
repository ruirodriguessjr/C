#include<stdio.h>
int main(void){
	int cc, tci, vi;
	float rend;
	printf("Digite o codigo do cliente: ");
	scanf("%d", &cc);
	printf("Digite o valor do investimento: ");
	scanf("%d", &vi);
	switch(tci){
		case 1:
			printf("[1] Poupança = Rendimento 1,5%. ");
			rend = ((vi * 1.5)/100);
			printf("O rendimento da poupanca eh: %d", rend);
			break;
		case 2:
			printf("[2] Poupança = Rendimento 1,5%. ");
			rend = ((vi * 2)/100);
			printf("O rendimento da poupanca ++ eh: %d", rend);
			break;
		case 3:
			printf("[3] Poupança = Rendimento 1,5%. ");
			rend = ((vi * 4)/100);
			printf("O rendimento da capitalizacao eh: %d", rend);
			break;
		
	}
	
}
