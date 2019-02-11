/*
*8_Escreva um programa para fazer conversões entre diferentes unidades. As opções do
*programa devem ser exibidas em forma de um menu apresentado na tela, em dois níveis. No
*primeiro nível, o usuário escolhe a classe de unidade, no segundo nível, o usuário escolhe a
*conversão que deseja, fornecendo então o valor a ser convertido. Por fim, o programa exibe o
*valor resultante na tela. As popções apresentadas no menu podem ser:

*1. Peso
*	1. Libra Quilograma
*	2. Quilograma Libra
*	3. Onça Grama
*	4. Grama Onça

*2. Volume
*	1. Galão Litro
*	2. Litro Galão
*	3. Onça Mililitro
*	4. Mililitro Onça

*3. Comprimento
*	1. Milha Quilômetro
*	2. Quilômetro Milha
*	3. Jardas Metro
*	4. Metro Jardas

*Sabe-se que 1 libra equivale a 0.4536 kg, 1 onça a 28.3495 g, 1 galão a 3.7854 l, 1 onça fluido a 29.5735 ml, 1 milha a 1.6093 km e 1 jarda a 0.9144 m.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
int TIPO, CONVERSOR, X = 0;
	float SAIDA;
	printf("---------------------------------------------------------------------------");
	printf("\n||POR FAVOR FAÇA SUA ESCOLHA ABAIXO||");
	printf("\n\t [0]PESO");
	printf("\n\t [1]VOLUME"); 
	printf("\n\t [2]COMPRIMENTO");
	printf("\n---------------------------------------------------------------------------");
	printf("\nDIGITE AQUI SUA OPÇÃO: ");
	
	scanf("%d", &TIPO);
	switch(TIPO){
		case 0:
			printf("\n||VOCÊ ESCOLHEU PESO, VEJA A LISTA ABAIXO||"); 
			printf("\n---------------------------------------------------------------------------");
			printf("\n\n\t [0] LIBRA >> QUILOGRAMA");
			printf("\n\n\t [1] QUILOGRAMA >> LIBRA");
			printf("\n\n\t [2] ONÇA >> GRAMA");
			printf("\n\n\t [3] GRAMA >> ONÇA");
			printf("\n---------------------------------------------------------------------------");
			printf("\nQUAL CONVERSÃO VOCÊ DESEJA FAZER AGORA, DIGITE AQUI: ");
			scanf("%d", &CONVERSOR);
			if (CONVERSOR > 3){
				default:
				printf("\n\t||OPÇÂO INVALIDA, TENTE NOVAMENTE!||");
				X = 1;
				break;
			}
			printf("\nDIGITE O VALOR QUE VOCÊ DESEJA CONVERTER: ");
			scanf("%f", &SAIDA);
		break;
		case 1:
			printf("\n||VOCÊ ESCOLHEU VOLUME, VEJA A LISTA ABAIXO||");
			printf("\n---------------------------------------------------------------------------");
			printf("\n[4] GALÃO >> LITRO"); 
			printf("\n[5] LIBRA >> GALÃO");
			printf("\n[6] ONÇA >> MILILITRO");
			printf("\n[7] MILILITRO >> ONÇA");
			printf("\n---------------------------------------------------------------------------");
			printf("\nQUAL CONVERSÃO VOCÊ DESEJA FAZER AGORA, DIGITE AQUI: ");
			scanf("%d", &CONVERSOR);
			if ((CONVERSOR < 4) && (CONVERSOR > 7)){
				printf("\n\t\tOPÇÂO INVALIDA!");
				X = 1;
				break;
			}
			printf("\nDIGITE O VALOR QUE VOCÊ DESEJA CONVERTER: ");
			scanf("%f", &SAIDA);
		break;
		case 2:
			printf("\n||VOCÊ ESCOLHEU COMPRIMENTO, VEJA A LISTA ABAIXO||");
			printf("\n---------------------------------------------------------------------------");
			printf("\n[8]MILHA >> QUILÔMETRO");
			printf("\n[9]QUILÔMETRO >> MILHA");
			printf("\n[10] JARDAS >> METRO");
			printf("\n[11] METRO >> JARDAS");
			printf("\n---------------------------------------------------------------------------");
			printf("\nQUAL CONVERSÃO VOCÊ DESEJA FAZER AGORA, DIGITE AQUI: ");
			scanf("%d", &CONVERSOR);
			if ((CONVERSOR < 8) && (CONVERSOR > 11)){
				printf("\n\t\tOPÇÂO INVALIDA!");
				X = 1;
				break;
			}
			printf("\nDIGITE O VALOR QUE VOCÊ DESEJA CONVERTER: ");
			scanf("%f", &SAIDA);
		break;
			printf("\n\t\t||OPS!! VOCÊ ESCOLHEU OPÇÂO INVALIDA, TENTE NOVAMENTE||");
		break;
	}
			switch(CONVERSOR){
			case 0:
				if (X == 1){
				break;
				} 
				printf("\nLIBRA >> QUILOGRAMA: %.2f", SAIDA * 0.4536);
			break;
			case 1:
				if (X == 1){
				break;
				}
				printf("\n\t\tQUILOGRAMA >> LIBRA: %.2f", SAIDA / 0.4536);
			break;
			case 2:
				if (X == 1){
				break;
				}
				printf("\n\t\tONÇA >> GRAMA: %.2f", SAIDA * 28.3495);
			break;
			case 3:
				if (X == 1){
				break;
				}
				printf("\nGRAMA >> ONÇA: %.2f", SAIDA / 28.3495);
			break;
			case 4:
				if (X == 1){
				break;
				}
				printf("\nGALÃO >> LITRO: %.2f", SAIDA * 3.7854 );
			break;
			case 5:
				if (X == 1){
				break;
				}
				printf("\nLIBRA >> GALÃO: %.2f", SAIDA / 3.7854);
			break;
			case 6:
				if (X == 1){
				break;
				}
				printf("\nONÇA >> MILILITRO: %.2f", SAIDA * 29.5735 );
			break;
			case 7:
				if (X == 1){
				break;
				}
				printf("\nMILILITRO >> ONÇA: %.2f", SAIDA / 29.5735);
			break;
			case 8:
				if (X == 1){
				break;
				}
				printf("\n\t\tMILHA >> QUILÔMETRO: %.2f", SAIDA * 1.6093);
			break;
			case 9:
				if (X == 1){
				break;
				}
				printf("\n\t\tQUILÔMETRO >> MILHA: %.2f", SAIDA / 1.6093);
			break;
			case 10:
				if (X == 1){
				break;
				}
				printf("\n\t\tJARDAS >> METRO: %.2f", SAIDA * 0.9144);
			break;
			case 11:
				if (X == 1){
				break;
				}
				printf("\n\t\tMETRO >> JARDAS: %.2f", SAIDA / 0.9144);
			break;
			default:
			printf("\n\t\t||OPS!! VOCÊ ESCOLHEU OPÇÂO INVALIDA, TENTE NOVAMENTE JOBS||");
				break;
 		}
 		
}
