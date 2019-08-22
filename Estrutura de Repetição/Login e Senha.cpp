//Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário.
//mostrando uma mensagem de erro e voltando a pedir as informações. 
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
