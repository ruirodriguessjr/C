/*Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginasio de uma determinada escola.
Cada aluno fornecia a sua serie (primeira-1, segunda-2, terceira-3 ou quarta-4), quantos livros liam por mes e se
gostavam de fazer redacao (Sim-1 ou Nao-0). Fazer um programa que leia os dados, calcule e imprima:
„h A quantidade de alunos que esta na terceira serie;
„h A maior quantidade de livros lidos por um aluno que esta na quarta serie;
„h A porcentagem de alunos que nao gostam de fazer redacao e que estao na terceira serie.
OBS: A condicao de parada (flag) e que seja digitado 0 (zero) para idade.*/
#include<stdio.h>
int main(void){
	int cont, serie, ler, livro, qtalunos, totaluno3=0, redacao;
		printf("======================================\n");
		printf("Qual a quantidade de alunos na sala: ");
		scanf("%d", qtalunos);
		for(cont=1;cont<=qtalunos;cont++){
			printf("=============================");
			printf("=============================");
			printf("\n[1] - PRIMEIRA\n[2] - SEGUNDA\n[3] - TERCEIRA\n[4] - QUARTA\n[5] - INEXISTENTE.");
			printf("\n=============================");
			do{
				printf("\nDigite a sua serie desejada:  ");
				scanf("%d", &serie);
				if(serie==3){
					totaluno3 = totaluno3 + serie;
					printf("O total de alunos na terceira serie eh: %d", totaluno3);
				}
			}while((serie<1) || (serie>5));

			printf("Quantos livros voce le por mes: ");
			scanf("%d", &ler);
			printf("Gostavam de fazer redacao: [1] Sim e [2] Nao.");
			scanf("%d", redacao);
			do{
				printf("Gostava de ler livros: \n[1] - SIM \n[2] - NAO: ");
				scanf("%d", &livro);	
			}while((livro!=0) || (livro!=1));
		}
	return(0);
}
