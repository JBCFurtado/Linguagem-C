/**
 *3_Fazer um algoritmo que imprima todos os números de 100 até 1, usando os 3 laços de repetição.
 */
#include <stdio.h>
#include <locale.h>

int main(){
	int l = 100;
	setlocale(LC_ALL, "portuguese_Brazil");
	printf("Exemplo - FOR\n");
	for (int i = 100; i >= 1; i--){
		printf("%d\n", i);
	}
	printf("Exemplo - WHILE\n");
	while (l >= 1){
		printf("%d\n", l);
		l --;
	}

	l = 100;
	printf("Exemplo - DO WHILE\n");
	do {
		printf("%d\n", l);
		l --;
	}while(l >= 1);
}
