#include <stdio.h>
int main(void)
{
	int num, valor, primo;
	int verifica_par (int); 
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
	}while(num == 0);
	for (primo = 10; primo <= 200; primo++){
		if(num % primo == 0){
		primo = 0;
		break;
		}
	}
	if((primo == 0) || (num == 1)){
		printf("Nao eh primo!!!");
	}else{
		printf("Eh primo!!!");
	}
	valor=verifica_par(num); 
	if(valor==1){
		printf("O numero eh par.");
	}else{
 		printf("O numero eh impar");
	}
	
}
int verifica_par(int num){ 
	int resp;
	if(num%2==0){
		resp=1;
	}else{
		resp=0; 
	}
	return(resp); 
}
