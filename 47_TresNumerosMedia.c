/**
 *5_Peça para o usuário entrar com três números e mostre a média aritmética entre eles.
 */
# include <stdio.h>
# include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float num = 0, media = 0; // num e media recebe 0 para inicializar as variáveis.
	//int i = 0; //eu poderia também fazer dessa forma, declarando antes.
	for (float i = 0; i <= 2 ; i++){
		printf("Digite tres números: ");
		scanf("%f", &num);
		media += num;
	}
	printf("\nA média é = %.2f ", media/3.0);
}
