// Fa�a um programa que calcule a m�dia de numeros inteiros pares. O programa dever� solicitar ao usu�rio, 
// quantos numeros pares ele deseja informar para ser calculado a m�dia.
// Ap�s isso dever� ler a quantidade de numeros pares desejada e, no final imprimir a m�dia apenas dos numeros pares.

// Na fun��o principal pedir a quantidade de numeros pares que o usuario deseja informar �ra calcular a m�dia.
// Chamar a fun��o media, passando a quantidade de numeros como par�metro

// Na fun��o media, receber a quantidade de numeros pares informada na fun��o Principal.
//Fazer a leitura desta quantidade de numeros pares.
// Calcular a media apenas dos pares.
// Imprimir a media.
//Retornar a fun��o Principal. 
#include<stdio.h> 
int main() 
{ 
	int qtd, m;
	float media(int);
	printf("Digite a quantidade de numeros que quer verificar: "); 
	scanf("%d", &qtd); // le o tal de n pode ser n=4; 
	m = media(qtd);
	return (0); 
}	
float media(int qtd){
	int cont;
	float media=0, par=0, soma=0;
	for(cont=2;cont<=qtd;cont++){
		if(cont%2==0){
			par++;
			soma=soma+cont;
			printf("%d ", cont);
		}
	}
	media = soma / par;
	printf("\nA media dos valores pares digitados eh: %.2f", media);
}
