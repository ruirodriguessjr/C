//Elabore um programa em Linguagem C onde, o usu�rio informe dois valores, o in�cio e o final de uma
//seq��ncia num�rica. Ap�s os dois n�meros obtidos, o programa dever� calcular e imprimir o valor da soma dos
//elementos �mpares desta s�rie. Para calcular a somat�ria, uma fun��o SOMAIMP dever� ser criada, receber da
//fun��o principal os valores lidos, calcular a somat�ria e retornar para a fun��o main onde ent�o esse valor dever�
//ser impresso.
//Exemplo:
//PROGRAMA � SOMAT�RIA DE N�MEROS �MPARES DE UMA S�RIE DE N�MEROS
//Informe o in�cio da s�rie: 10
//Informe o final da s�rie: 15
//A somat�ria dos n�meros (inteiros) �mpares existentes entre 10 e 15 �: 39
#include<stdio.h>
int main(void)
{
	int cont, inicio, final, impar;
	int somaimp(int);
	for(cont=inicio;cont<=final;cont++);{
		printf("Digite o inicio da sequencia: ");
		scanf("%d", &inicio);
		printf("Digite o final da sequencia: ");
		scanf("%d", &final);
		impar=somaimp(int cont);
	}
}
int somaimp(int cont, int media);
	if(cont%2==1){
		somaimp = somaimp + 1;
		media = media + cont;
	}
