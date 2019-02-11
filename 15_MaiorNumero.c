/*
*1_Escreva um programa em C que receba três números inteiros como entrada e imprima, como saída, o maior número recebido.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int N1, N2, N3, M;
	printf("\nPOR FAVOR INSIRA TRÊS NÚMEROS: \n");
	scanf("%d %d %d",&N1, &N2, &N3);
	if (N1 > N2){
	M = N1;
	}
	else if (N1 < N2){
	M = N2;
	}
	if (M < N3){
	M = N3;
	}
	printf("\nVALORES DIGITADOS: %d %d %d", N1, N2, N3);
	printf("\n------------------------------------------------------------------");
	printf("\nO MAIOR NÚMERO DIGITADO FOI: %d", M);
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA INSERIR NOVOS NÚMEROS!");	
}





