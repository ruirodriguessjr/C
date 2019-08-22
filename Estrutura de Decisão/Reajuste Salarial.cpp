/*As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe contraram para desenvolver o programa que calcular� os reajustes.
Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
sal�rios de R$ 1500,00 em diante : aumento de 5% Ap�s o aumento ser realizado, informe na tela:
o sal�rio antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo sal�rio, ap�s o aumento.*/
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











