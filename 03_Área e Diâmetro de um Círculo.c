/*
*INSTITUTO FEDERAL DE EDUCA��O, CI�NCIA E TECNOLOGIA DO PAR�
*Campus Altamira
*Tecnologia em An�lise e Desenvolvimento de Sistemas
*Estrutura de Dados
*Autor: Jobs
*Area e Di�metro de uma circunfer�ncia
*/
#include<stdio.h>

int main(){
  float pi = 3.141592, raio;
  printf("Digite o Raio: ");
  scanf("%f",&raio);
  printf("Area: %.3f\n",pi*(raio*2));
  printf("Volume: %.3f\n",(((4/3)*pi)*(raio*3)));
  printf("Diametro: %.3f\n", raio*2);
  return 0;
}
