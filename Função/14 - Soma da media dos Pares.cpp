// Faça um programa que calcule a média de numeros inteiros pares. O programa deverá solicitar ao usuário, 
// quantos numeros pares ele deseja informar para ser calculado a média.
// Após isso deverá ler a quantidade de numeros pares desejada e, no final imprimir a média apenas dos numeros pares.

// Na função principal pedir a quantidade de numeros pares que o usuario deseja informar ára calcular a média.
// Chamar a função media, passando a quantidade de numeros como parâmetro

// Na função media, receber a quantidade de numeros pares informada na função Principal.
//Fazer a leitura desta quantidade de numeros pares.
// Calcular a media apenas dos pares.
// Imprimir a media.
//Retornar a função Principal. 
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
