#include <stdio.h>
#include <conio.h>
int main(void)
{
    int contador = 1; //declarando e inicializando a vari�vel de controle
     
    while (contador <= 10) // Testando a condi��o
    {
          printf("%d ", contador); //Executando um comando dentro do la�o 
           
          contador++; //atualizando a vari�vel de controle
    }
     
    getch(); 
    return 0; 
}
