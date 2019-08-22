
#include <stdio.h>
int main(void)
{
 int cont, idade, qtmaior=0 , qtmenor=0, media=0, qtpares=0;
 printf("Informe 15 idades");
 for(cont=0; cont<15;cont++)
 {
  do
  {
   printf("Informe a idade:");
   scanf("%d", &idade);
  }while(idade<=0);
  if(idade>=18)
  {
   qtmaior++;
  }
  if(idade<7)
  {
   qtmenor++;
  }
  if(idade%2==0)
  {
   media=media+idade;
   qtpares++;
   
  }
 }
  printf("\nQuantidade maiores de idade %d", qtmaior);
  printf("\nQuantidade menor de 7 anos %d", qtmenor);
  if(qtpares!=0)
  {
   media=media/qtpares;
   printf("\nA media de ´pares e: %d", media);
  }
  else{
   printf("\nNao contem numeros pares");
  }  
 
}
