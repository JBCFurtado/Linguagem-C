#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int n1, n2, n3;
	printf("Digite TRÊS numeros: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2, n1 > n3){
	printf("Maior número: %d", n1);
	}
	else if (n2 > n1, n2 > n3){
	printf("Maior número: %d", n2);
	}
	else if (n3 > n1, n3 > n2){
	printf("Maior número: %d", n3);
	}
}

