/*
*2_Escreva um programa em C que receba tr�s n�meros inteiros como entrada e imprima, como sa�da, os n�meros em ordem crescente.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int N1,N2,N3,PRIMEIRO,SEGUNDO, TERCEIRO;
	printf("\nPOR FAVOR INSIRA TR�S N�MEROS:\n");
	scanf("%d %d %d",&N1, &N2, &N3);
	if (N1 >= N2){
	TERCEIRO = N1;
	PRIMEIRO = N2;
	}
	else if (N1 <= N2){
		TERCEIRO = N2;
		PRIMEIRO = N1;
	}
	if (TERCEIRO <= N3){
		SEGUNDO = TERCEIRO;
		TERCEIRO = N3;
	}
	else if(PRIMEIRO >= N3){
		SEGUNDO = PRIMEIRO;
		PRIMEIRO = N3;
	}
	else if(N3 <= TERCEIRO && N3 >= PRIMEIRO){
		SEGUNDO = N3;
	}
	if ((N1 == N2) && (N1 == N3) && (N2 == N3)){
		printf("Usu�rio digitou numeros iguais!\n");
	}
	printf("\nVALORES DIGITADOS: %d %d %d", N1, N2, N3);
	printf("\n------------------------------------------------------------------");
	printf("\nORDEM CRESCENTE DOS N�MEROS DIGITADOS FORAM: %d, %d, %d", PRIMEIRO, SEGUNDO, TERCEIRO); 
	printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA INSERIR NOVOS N�MEROS!");	
}
