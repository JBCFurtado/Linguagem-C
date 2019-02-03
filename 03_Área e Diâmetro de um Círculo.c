/*
*INSTITUTO FEDERAL DE EDUCAÇÃO, CIÊNCIA E TECNOLOGIA DO PARÁ
*Campus Altamira
*Tecnologia em Análise e Desenvolvimento de Sistemas
*Estrutura de Dados
*Autor: Jobs
*Área e Diâmetro de uma circunferência
*/
#include <stdio.h>
int main(){
	float area, raio;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	area = 3.14159265358993 * (raio * 2);
	printf("A Area e: %f", area);
	printf("\t\nDiametro da Circunferencia e: %f", raio*2);
	return 0;
}
