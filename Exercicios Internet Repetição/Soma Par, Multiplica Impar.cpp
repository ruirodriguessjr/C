//21. Fac�a um programa que receba dois n�umeros. Calcule e mostre:
// a soma dos n�umeros pares desse intervalo de n�umeros, incluindo os n�umeros digitados;
// a multiplicac� �ao dos n�umeros ��mpares desse intervalo, incluindo os digitados;
#include <stdio.h>

int main() {
    int X = 0, Y = 0, par = 0, impar = 1;
    printf("Insira o VALOR DE X: ");
    scanf("%d", &X);
    printf("Insira o VALOR DE Y: ");
    scanf("%d", &Y);
    if (Y <= X) {
        printf("X n�o pode ser maior que Y\n");
        return 0;
    }
    for (int cont = X; cont <= Y; cont++) {
        if (cont % 2 == 0) {
            par += cont;
        } else { 
            impar *= cont;
        }
    }
    printf("A soma dos n�meros pares nesse intervalo � %d\n", par);
    printf("A multiplica��o dos n�meros impares nesse intervalo � %d\n", impar);
}
