/*
*5_Escreva um programa que converta coordenadas polares (raio r e �ngulo a) 
*em coodernadas cartesianas (abscissa x e ordenada y), de acordo com as f�rmulas:
*x = r cos(a)
*y = r sin(a)
*O programa deve capturar os valores em coordenadas polares e exibir
*as coordenadas cartesianas correspondentes. AS fun��es sin e cos est�o 
*dispon�veis na bilioteca matem�tica padr�o (math.h).
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float r, a, x, y;
	printf("\nPOR FAVOR INSIRA O RAIO: ");
	scanf("%f", &r);
	printf("AGORA DIGITE O �NGULO: \n");
	scanf("%f", &a);
	x = r * cos(a);
	y = r * sin(a);
	printf("\nO VALOR DE X �: %.3f", x);
	printf("\nO VALOR DE Y �: %.3f", y);
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA REINICIAR O PROCESSO NOVAMENTE!");
}





