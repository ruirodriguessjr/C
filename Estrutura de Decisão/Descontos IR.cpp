/*Fa�a um programa para o c�lculo de uma folha de pagamento, sabendo que os descontos s�o do Imposto de Renda.
Que depende do sal�rio bruto (conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do Sal�rio Bruto.
Mas n�o � descontado (� a empresa que deposita). O Sal�rio L�quido corresponde ao Sal�rio Bruto menos os descontos. 
O programa dever� pedir ao usu�rio o valor da sua hora e a quantidade de horas trabalhadas no m�s.
Desconto do IR:
Sal�rio Bruto at� 900 (inclusive) - isento
Sal�rio Bruto at� 1500 (inclusive) - desconto de 5%
Sal�rio Bruto at� 2500 (inclusive) - desconto de 10%
Sal�rio Bruto acima de 2500 - desconto de 20% Imprima na tela as informa��es, dispostas conforme o exemplo abaixo. 
No exemplo o valor da hora � 5 e a quantidade de hora � 220.
Sal�rio Bruto: (5 * 220)        : R$ 1100,00
        (-) IR (5%)                     : R$   55,00  
        (-) INSS ( 10%)                 : R$  110,00
        FGTS (11%)                      : R$  121,00
        Total de descontos              : R$  165,00
        Sal�rio Liquido                 : R$  935,00*/
#include <stdio.h>
#include <stdlib.h>
int main(){
		
	int hora, semana, mes, sindicato;
	float valorhora, salario_bruto, fgts, inss, ir, descontos, salarioLiq;
	hora = 8;
	semana = (hora * 6);
	mes = (semana * 4);
	printf("Qual o valor da sua hora: ");
	scanf("%f", &valorhora);
	salario_bruto = (valorhora * mes);
	printf("R$ %.2f\n\n", salario_bruto);
	sindicato = ((salario_bruto * 3) / 100);
	fgts = ((salario_bruto * 8) / 100);
	inss = ((salario_bruto * 11)/ 100);
	ir = 0;
	if(salario_bruto <= 900){
		printf("Isento de IR.\n");
	}else if((salario_bruto > 900) && (salario_bruto <= 1500)){
		ir = ((salario_bruto * 5) / 100);
   		descontos = (sindicato + fgts + inss + ir);
		salarioLiq = (salario_bruto - descontos);	
		printf("Salario Bruto: 						R$ %.2f\n", salario_bruto);
    	printf("(-) IR  				                R$ %.2f\n", ir); 
		printf("(-) INSS        					R$ %.2f\n", inss);
    	printf("(-) FGTS 				        	R$ %.2f\n", fgts);	                      
     	printf("(-) Total de descontos 		        		R$ %.2f\n", descontos);             
     	printf("(=) Salario Liquido	   				R$ %.2f\n", salarioLiq);
	   	}else if((salario_bruto > 1500) && (salario_bruto <= 2500)){
   		ir = ((salario_bruto * 10) / 100);
   		descontos = (sindicato + fgts + inss + ir);
		salarioLiq = (salario_bruto - descontos);	
		printf("Salario Bruto: 						R$ %.2f\n", salario_bruto);
    	printf("(-) IR  				                R$ %.2f\n", ir); 
		printf("(-) INSS        					R$ %.2f\n", inss);
    	printf("(-) FGTS 				        	R$ %.2f\n", fgts);	                      
     	printf("(-) Total de descontos 		        		R$ %.2f\n", descontos);             
     	printf("(=) Salario Liquido	   				R$ %.2f\n", salarioLiq);
		}else if(salario_bruto > 2500){
		ir = ((salario_bruto * 20) / 100);
		descontos = (sindicato + fgts + inss + ir);
		salarioLiq = (salario_bruto - descontos);	
		printf("Salario Bruto: 						R$ %.2f\n", salario_bruto);
    	printf("(-) IR  				                R$ %.2f\n", ir); 
		printf("(-) INSS        					R$ %.2f\n", inss);
    	printf("(-) FGTS 				        	R$ %.2f\n", fgts);	                      
     	printf("(-) Total de descontos 		        		R$ %.2f\n", descontos);             
     	printf("(=) Salario Liquido	   				R$ %.2f\n", salarioLiq);
	}
	system("pause");
	return(0);
}	

