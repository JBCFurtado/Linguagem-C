/*
*6_Considere as equa��es de movimento para calcular a posi��o (s) e a velocidade (s) de uma
*part�cula em determinado instante t, dada sua acelera��o a, posi��o inicial s0 e velocidade
*inicial v0, de acordo com a as f�rmulas:
*s = s0 + v0t + at2/2
*v = v0 + at
*Escreva um programa C completo que capture os valores s0, v0, a e t, fornecidos pelo usu�rio via
*teclado, e calcule e exiba os valores de s e v. Todos os valores tratados no programa devem ser
*n�meros reais (float ou double).
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float Esp_Inicial, Val_Inicial, Tempo, Aceleracao, Espaco, Velocidade;
	printf("\nDIGITE O VALOR DO ESPA�O INICIAL: ");
	scanf("%f", &Esp_Inicial);
	printf("DIGITE O VALOR DA VELOCIDADE INICIAL: ");
	scanf("%f", &Val_Inicial);
	printf("DIGITE O VALOR DO TEMPO: ");
	scanf("%f", &Tempo);
	printf("DIGITE O VALOR DA ACELERA��O: ");
	scanf("%f", &Aceleracao);
	
	Espaco = (Esp_Inicial + (Val_Inicial*Tempo) + ((Aceleracao * pow(Tempo,2))/2.0));
	Velocidade = Val_Inicial +(Aceleracao *Tempo);
	
	printf("\nVALOR DO ESPA�O: %.2f.", Espaco);
	printf("\nVALOR DA VELOCIDADE: %.2f.", Velocidade);
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA REINICIAR O PROGRAMA!");
}
