//37. Escreve um programa que verifique quais n´umeros entre 1000 e 9999 (inclusive) possuem
//a propriedade seguinte: a soma dos dois d´ýgitos de mais baixa ordem com os dois
//d´ýgitos de mais alta ordem elevada ao quadrado ´e igual ao pr´oprio numero. Por exemplo,
//para o inteiro 3025, temos que:
//30 + 25 = 55
//552 = 3025
#include<stdio.h>
int main(void){
	int i, j, k, l, n1, n2;
	for(i=0;i<=9;i++);
	for(j=0;j<=9;j++);
	for(k=0;k<=9;k++);
	for(l=0;l<=9;l++);
	n1=(i*10)+j;
	n2=(k*10)+l;
		if((n1+n2)*(n1+n2)){
			i*1000+j*100+k*10+l;
			printf("%d %d %d %d", i*1000+j*100+k*10+l); 
		}
		
	
	return(0);
}
