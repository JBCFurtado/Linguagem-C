/*
*INSTITUTO FEDERAL DE EDUCAÇÃO, CIÊNCIA E TECNOLOGIA DO PARÁ
*Campus Altamira
*Tecnologia em Análise e Desenvolvimento de Sistemas
*Estrutura de Dados
*Autor: Jobs
*Área e Diâmetro de uma circunferência
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
