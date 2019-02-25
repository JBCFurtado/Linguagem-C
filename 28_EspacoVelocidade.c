/*
*6_Considere as equações de movimento para calcular a posição (s) e a velocidade (s) de uma
*partícula em determinado instante t, dada sua aceleração a, posição inicial s0 e velocidade
*inicial v0, de acordo com a as fórmulas:
*s = s0 + v0t + at2/2
*v = v0 + at
*Escreva um programa C completo que capture os valores s0, v0, a e t, fornecidos pelo usuário via
*teclado, e calcule e exiba os valores de s e v. Todos os valores tratados no programa devem ser
*números reais (float ou double).
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float Esp_Inicial, Val_Inicial, Tempo, Aceleracao, Espaco, Velocidade;
	printf("\nDIGITE O VALOR DO ESPAÇO INICIAL: ");
	scanf("%f", &Esp_Inicial);
	printf("DIGITE O VALOR DA VELOCIDADE INICIAL: ");
	scanf("%f", &Val_Inicial);
	printf("DIGITE O VALOR DO TEMPO: ");
	scanf("%f", &Tempo);
	printf("DIGITE O VALOR DA ACELERAÇÃO: ");
	scanf("%f", &Aceleracao);
	
	Espaco = (Esp_Inicial + (Val_Inicial*Tempo) + ((Aceleracao * pow(Tempo,2))/2.0));
	Velocidade = Val_Inicial +(Aceleracao *Tempo);
	
	printf("\nVALOR DO ESPAÇO: %.2f.", Espaco);
	printf("\nVALOR DA VELOCIDADE: %.2f.", Velocidade);
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA REINICIAR O PROGRAMA!");
}
