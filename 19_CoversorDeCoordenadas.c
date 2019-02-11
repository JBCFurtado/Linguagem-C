/*
*5_Escreva um programa que converta coordenadas polares (raio r e ângulo a) 
*em coodernadas cartesianas (abscissa x e ordenada y), de acordo com as fórmulas:
*x = r cos(a)
*y = r sin(a)
*O programa deve capturar os valores em coordenadas polares e exibir
*as coordenadas cartesianas correspondentes. AS funções sin e cos estão 
*disponíveis na bilioteca matemática padrão (math.h).
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float r, a, x, y;
	printf("\nPOR FAVOR INSIRA O RAIO: ");
	scanf("%f", &r);
	printf("AGORA DIGITE O ÂNGULO: \n");
	scanf("%f", &a);
	x = r * cos(a);
	y = r * sin(a);
	printf("\nO VALOR DE X É: %.3f", x);
	printf("\nO VALOR DE Y É: %.3f", y);
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA REINICIAR O PROCESSO NOVAMENTE!");
}





