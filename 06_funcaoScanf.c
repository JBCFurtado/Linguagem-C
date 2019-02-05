#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int nota, nota2;
	printf("Digite uma 2 notas: ");
	scanf("%d" "%d", &nota, &nota2);
	/*printf("Digite a segunda nota: ");
	scanf("%d", &nota2);*/
	printf("A notas digitadas foram: %d e %d", nota, nota2);
	
}
