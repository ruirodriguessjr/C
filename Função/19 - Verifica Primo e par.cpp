#include <stdio.h>
int main(void)
{
 	int num, valor, primo, valor1, primo1;
 	int verifica_par (int); 
 	int verifica_primo(int);
 	do{
		printf("Digite um numero: ");
  		scanf("%d", &num);
 	}while(num == 0);
 		for (primo = 10; primo <= 200; primo++){
			valor1 = verifica_primo(num);	 
  			if(primo1 == 0){
  				printf("Nao eh primo!!!");
 			}
 			else{
  				printf("Eh primo!!!");
 			}
 			valor=verifica_par(num); 
 			if(valor==1){
 				printf("O numero eh par.");
 			}
 			else{
 				printf("O numero eh impar");
 			}
		}
}
int verifica_par(int num){ 
 	int resp, primo;
  	if(num%2==0){
 		resp=1;
 	}else{
  		resp=0; 
 	}
 	return(primo); 
}
int verifica_primo(int primo){
	int num, primo1, resp1;
	if(num % primo == 0){
    	primo = 0;
    }else{
    	primo = 1;
	}

	return(primo1);
}
