//27.Em Matem´ atica, o n´umero harmˆonico designado por H(n) define-se como sendo a soma
//da s´ erie harm´ onica:
//H(n) = 1 + 1=2 + 1=3 + 1=4 + ::: + 1=n
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, auxiliar;
    float soma;
    soma =0;
    while( auxiliar ) {
    	printf("Digite um número qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        printf("Usuário digitou %d \n",auxiliar);
        soma=0;
        if (auxiliar) {
        	for (i=1;i<=auxiliar;i++){
            	soma += (1.0/i);  // 1.0 irá forçar um cálculo float
           	}
            printf("O resultado da série é %f \n\n",soma);
		}else{
			printf("entrada terminada pelo usuário \n");
   		    }
    }

}

