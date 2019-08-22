//Elabore um programa em Linguagem C onde, o usuário informe dois valores, o início e o final de uma
//seqüência numérica. Após os dois números obtidos, o programa deverá calcular e imprimir o valor da soma dos
//elementos ímpares desta série. Para calcular a somatória, uma função SOMAIMP deverá ser criada, receber da
//função principal os valores lidos, calcular a somatória e retornar para a função main onde então esse valor deverá
//ser impresso.
//Exemplo:
//PROGRAMA – SOMATÓRIA DE NÚMEROS ÍMPARES DE UMA SÉRIE DE NÚMEROS
//Informe o início da série: 10
//Informe o final da série: 15
//A somatória dos números (inteiros) ímpares existentes entre 10 e 15 é: 39
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
