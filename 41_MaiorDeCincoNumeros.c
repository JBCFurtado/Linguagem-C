/**
 *Escreva um programa em C que solicita 5 números ao usuário, através de um laço while, e ao final
 *mostre qual destes números é o maior.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int num, loop = 1, maior = 0;
	while (loop <= 5){
		printf("Digite o %d ª número: ", loop);
		scanf("%d", &num);
		if (num > maior){
			maior = num;
		}
		loop ++;
	}
	printf("\n\t\tO maior número é = %d", maior);
}
