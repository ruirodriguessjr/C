//Fa�a um programa que leia um nome de usu�rio e a sua senha e n�o aceite a senha igual ao nome do usu�rio.
//mostrando uma mensagem de erro e voltando a pedir as informa��es. 
#include<stdio.h>
int main(void)
{
  int login = 0, senha = 0;
 
  while(senha != login){

    printf("Digite seu Login: ");
    scanf("%d", &login);
    printf("%d", login);
    printf("Digite sua senha: ");
    scanf("%d", &senha);
    printf("%d", senha);
   
	}
  return 0;
}
