#include <stdio.h>


//Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.


int main(void)
{  

  float pi=3.141592, raio;
  printf("digite o valor do raio: ");
  scanf("%f",&raio);
  printf("a area do circulo e: %.2f\n",(pi*(raio*raio)));
  return 0;
}
