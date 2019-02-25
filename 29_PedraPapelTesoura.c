/*
*7_Escreva um programa que implemente o jogo conhecido como pedra, papel, tesoura. Neste
*jogo, o usu�rio e o computador escolhem entre pedra, papel ou tesoura. Sabendo que pedra
*ganha tesoura, papel ganha pedra e tesoura ganha de papel, exiba na tela o ganhador: usu�rio
*ou computador. Para esta implementa��o, assuma que o n�mero 0 representa pedra, 1
*representa papel e 2 representa tesoura. Dica: utilize a fun��o rand / srand da biblioteca
*(stdlib.h).
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int usuario;
	char OPCAO_0 [6] = "PEDRA";
	char OPCAO_1 [6] = "PAPEL";
	char OPCAO_2 [10] = "TESOURA";
	srand(time(0));
	int computador = rand() % 3;
	printf("-------------------------------------------------");
	printf("\n\t\t#FA�A SUA ESCOLHA#");
	printf("\n# [0]PEDRA ||| [1]PAPEL ||| [2]TESOURA #");
	printf("\n-------------------------------------------------");
	printf("\nDIGITE AQUI SUA OP��O: ");
	scanf("%d", &usuario);
	computador = 1;
	if (usuario == 0 && computador == 0){
	printf("\nVOC� DIGITOU: %s", OPCAO_0);
	printf("\nO COMPUTADOR ESCOLHEU: %s", OPCAO_0);
	printf("\nSHIT!!! CHUTES IGUAIS, TENTE NOVAMETE.");
	printf("\n------------------------------------------------------");
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
	}
	else if (usuario == 1 && computador == 1){
		printf("\nVOC� DIGITOU: %s", OPCAO_1);
		printf("\nO COMPUTADOR ESCOLHEU: %s", OPCAO_1);
		printf("\nSHIT!!! CHUTES IGUAIS, TENTE NOVAMETE."); 
		printf("\n------------------------------------------------------");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
	}
	else if (usuario == 2 && computador == 2){
		printf("\nVOC� DIGITOU = %s", OPCAO_2);
		printf("\nComputador = %s", OPCAO_2);
		printf("\nSHIT!!! CHUTES IGUAIS, TENTE NOVAMETE.");
		printf("\n------------------------------------------------------");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
		} 
	else if (usuario == 0 && computador == 1){
		printf("\nVOC� DIGITOU: %s", OPCAO_0);
		printf("\nO COMPUTADOR ESCOLHEU: %s", OPCAO_1);
		printf("\nOH MY GOD! O COMPUTADOR GANHOU");
		printf("\n------------------------------------------------------");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
	}
	else if (usuario == 1 && computador == 0){
		printf("\nVOC� DIGITOU: %s", OPCAO_1);
		printf("\nO COMPUTADOR ESCOLHEU = %s", OPCAO_0);
		printf("\nHEHEHEHE!!!VOC� GANHOU!");
		printf("\n------------------------------------------------------");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
	}
	else if (usuario == 0 && computador == 2){
		printf("\nVOC� DIGITOU: %s", OPCAO_0);
		printf("\nO COMPUTADOR ESCOLHEU: %s", OPCAO_2);
	printf("\nHEHEHEHE!!!VOC� GANHOU!"); 
	printf("\n------------------------------------------------------");
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
	}
	else if (usuario == 2 && computador == 0){
		printf("\nVOC� DIGITOU: %s", OPCAO_2);
		printf("\nCOMPUTADOR ESCOLHEU: %s", OPCAO_0);
		printf("\nOH MY GOD! O COMPUTADOR GANHOU"); 
		printf("\n------------------------------------------------------");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
	}
	else if (usuario == 1 && computador == 2){
		printf("\nVOC� DIGITOU: %s", OPCAO_0);
		printf("\nO COMPUTADOR ESCOLHEU = %s", OPCAO_2);
		printf("\nOH MY GOD! O COMPUTADOR GANHOU"); 
		printf("\n------------------------------------------------------");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
	}
	else if (usuario == 2 && computador == 1){
		printf("\nVOC� DIGITOU: %s", OPCAO_2);
		printf("\nO COMPUTADOR ESCOLHEU: %s", OPCAO_1);
		printf("\nHEHEHEHE!!!VOC� GANHOU!");
		printf("\n------------------------------------------------------");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA JOGAR NOVAMENTE");
		}
	else{
		printf("\nOPS!!! OP��O INVALIDA.");
		printf("\nPOR FAVOR TENTE NOVAMENTE!");
		printf("\n------------------------------------------------------");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA COME�AR.");
	} 
}
