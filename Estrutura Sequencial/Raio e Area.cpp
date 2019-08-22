#include <stdio.h>


//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.


int main(void)
{  

  float pi=3.141592, raio;
  printf("digite o valor do raio: ");
  scanf("%f",&raio);
  printf("a area do circulo e: %.2f\n",(pi*(raio*raio)));
  return 0;
}
