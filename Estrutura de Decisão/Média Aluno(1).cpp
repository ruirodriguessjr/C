//Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre.
//E calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
#include <stdio.h>
#include <stdlib.h>
int main(){
	float n1, n2, m;
	printf("Primeira nota: ");
	scanf("%f", &n1);
	printf("Segunda nota: ");
	scanf("%f", &n2);
	m = ((n1 + n2) / 2);
	if((m > 9) && (m <= 10)){
		printf("Sua media foi %.2f e sua nota e A.\n", m);
	}else if((m >7.5) && (m <= 9)){
		printf("Sua media foi %.2f e sua nota e B.\n", m);
	}else if((m > 6) && (m <= 7.5)){
		printf("Sua media foi %.2f e sua nota e C.\n", m);
	}else if((m > 4) && (m <= 6)){
		printf("Sua media foi %.2f e sua nota e D.\n", m);
	}else if ((m >= 0) && (m <= 4)){
		printf("Sua media foi %.2f e sua nota e E.\n", m);
	}else{
		printf("Notas digitadas ERRADAS, tente de novo!\n");
	}

	system("pause");
	return(0);
}


