/**
 *1_Escreva um programa que, dado o valor do raio via teclado, calcule e imprima o volume
 *da esfera correspondente. Sabe-se que o volume da esfera é dado por 4/3π r 3 , onde r
 *representa o raio da esfera. Note que a linguagem C não disponibiliza um operador de
 *exponenciação (potenciação). Para calcular o valor de r 3 podemos multiplicar o valor do
 *raio por si mesmo 3 vezes ou fazer uso da função pow da biblioteca matemática
 *(#include <math.h>).
 */
#include <stdio.h>
int main(){
float raio = 0, volume = 0;
printf("Digite o valor do raio: ");
scanf("%f",&raio);
volume = 4*3.14*raio*raio*raio/3;
printf("O calculo do volume é: %f",volume);


}
