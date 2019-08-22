/*Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginasio de uma determinada escola.
Cada aluno fornecia a sua serie (primeira-1, segunda-2, terceira-3 ou quarta-4), quantos livros liam por mes e se
gostavam de fazer redacao (Sim-1 ou Nao-0). Fazer um programa que leia os dados, calcule e imprima:
„h A quantidade de alunos que esta na terceira serie;
„h A maior quantidade de livros lidos por um aluno que esta na quarta serie;
„h A porcentagem de alunos que nao gostam de fazer redacao e que estao na terceira serie.
OBS: A condicao de parada (flag) e que seja digitado 0 (zero) para idade.*/
#include<stdio.h>
int main(void){
	int cont, qtalunos, serie, qtlivros, qt3serie=0, maiorqtlivros=0, red;
	printf("Quantos alunos participaram da pesquisa: ");
	scanf("%d", &qtalunos);
	for(cont=1;cont<=qtalunos;cont++){
		do{
			printf("Digite a sua serie: [1]-Primeira [2]-Segunda [3]-Terceira [4]-Quarta: ");
			scanf("%d", &serie);
			printf("Quantos livros liam por mes: ");
			scanf("%d", &qtlivros);
			printf("Gostavam de fazer redacao, digite [1]Sim [2]Nao: ");
			scanf("%d", &red);
			if(serie==3){
				qt3serie++;
			}else if((serie==4) && (qtlivros>maiorqtlivros)){
				maiorqtlivros = qtlivros;				
			}
		}while((serie!=1) && (serie!=2) && (serie!=3) && (serie!=4));
	}
	printf("\nA quantidade de alunos que estao na terceira serie e de: %d alunos", qt3serie);
	printf("\nA quantidade de livros lidos por um aluno da Quarta serie e: %d", maiorqtlivros);
	
}
