/*
*1_Escreva um programa em C que receba tr�s n�meros inteiros como entrada e imprima, como sa�da, o maior n�mero recebido.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int N1, N2, N3, M;
	printf("\nPOR FAVOR INSIRA TR�S N�MEROS: \n");
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
	printf("\nO MAIOR N�MERO DIGITADO FOI: %d", M);
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA INSERIR NOVOS N�MEROS!");	
}





