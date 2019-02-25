/**
 *01_Faça um programa para ler 5 números e mostrar a média entre eles.
 */

# include <stdio.h>
# include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float num = 0, media = 0; // num e media recebe 0 para inicializar as variáveis.
	//int i = 0; //eu poderia também fazer dessa forma, declarando antes.
	for (int i = 0; i <= 4 ; i++){
		printf("Digite cinco números: ");
		scanf("%f", &num);
		media += num;
	}
	printf("\nA média é = %.2f ", media/5.0);
}
