/*
*INSTITUTO FEDERAL DE EDUCA��O, CI�NCIA E TECNOLOGIA DO PAR�
*Campus Altamira
*Tecnologia em An�lise e Desenvolvimento de Sistemas
*Estrutura de Dados
*Autor: Jobs
*�rea e Di�metro de uma circunfer�ncia
*/
#include <stdio.h>
#include<math.h>

int main(){
  float pi = 3.14, raio;
  printf("Digite o Raio: ");
  scanf("%f",&raio);
  printf("Area: %.2f\n", 4.0*pi*pow(raio, 2));
  printf("Volume: %.2f\n", (4.0/3.0 *pi*(pow (raio, 3))));
  return 0;
}
