/**
 *02_Fazer um algoritmo que imprima todos os números pares no intervalo 1 a 100.
 */
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	for (int i = 2; i <= 98; i += 2){
		printf("%d\n", i);
	}
}
