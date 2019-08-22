/*As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo salário, após o aumento.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	float salario;
	printf("=====================\n");
	printf("Reajustes de Salarial\n");	
	printf("=====================\n");
	printf("Digite o valor do seu salario: R$ ");
	scanf("%f", &salario);
	if((salario > 0) && (salario <= 280.00)){
		salario =salario + ((salario * 20) / 100);
		printf("R$ %.2f\n", salario);
	}else if((salario > 280.00) && (salario <= 700)){
		salario =salario + ((salario * 15) / 100);
		printf("R$ %.2f\n", salario);
	}else if((salario > 700) && (salario <= 1500)) {
		salario =salario + ((salario * 10) / 100);
		printf("R$ %.2f\n", salario);
	}else if(salario >1500){
		salario =salario + ((salario * 5) / 100);
		printf("R$ %.2f\n", salario);
	}
	else{
		printf("Comando Invalido!!!\n");
	}
	system("pause");
	return(0);
}











