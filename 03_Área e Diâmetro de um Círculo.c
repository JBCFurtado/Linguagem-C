/*
*Área e Diâmetro de uma circunferência
*Autor: Jobs
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
