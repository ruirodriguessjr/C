#include <stdio.h>


//Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.



int main(void)
{  

  float l1, l2, area;
  printf("Digite primeiro lado: ");
  scanf("%f", &l1);
  printf("Digite segundo lado: ");
  scanf("%f", l2);
  area = l1 * l2;
  printf("A area entre %.2f e %.2f eh: %.2f", l1, l2, area);
  
  return 0;
}
