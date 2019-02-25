/**
 *4_Escreva um aplicativo em C que recebe inteiro e mostra os números pares e ímpares (separados, em duas
 *colunas), de 1 até esse inteiro. Como o primeiro número é ímpar (1), os ímpares serão exibidos primeiro. Após
 *cada ímpar damos o espaço de um TAB (\t), e na mesma linha imprimimos o par, e logo em seguinte o caractere
 *nova linha (\n).
 */

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int a, i = 1;
	printf("Digite o número:");
	scanf("%d", &a);
	for (i; i < a; i++){
		printf("%d\t  %d\n", i , i + 1 );
		i ++;
	}
}
