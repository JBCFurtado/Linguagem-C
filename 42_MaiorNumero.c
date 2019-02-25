/**
 *1_Escreva um programa em C que receba três números inteiros como
 *entrada e imprima, como saída, o maior número.
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    float maior;
    float X, Y, Z;
    printf("Digite o primeiro valor:");
    scanf("%f", &X);
    maior = X;
    printf("Digite o segundo valor:");
    scanf("%f", &Y);
    if (Y > maior) maior = Y;
    printf("Digite o terceiro Valor:");
    scanf("%f", &Z);
    if (Z > maior) maior = Z;
    printf("O maior Valor e : %.2f\n", maior);
    return 0;
}
