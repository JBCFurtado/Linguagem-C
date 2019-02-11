/*
*8_Escreva um programa para fazer convers�es entre diferentes unidades. As op��es do
*programa devem ser exibidas em forma de um menu apresentado na tela, em dois n�veis. No
*primeiro n�vel, o usu�rio escolhe a classe de unidade, no segundo n�vel, o usu�rio escolhe a
*convers�o que deseja, fornecendo ent�o o valor a ser convertido. Por fim, o programa exibe o
*valor resultante na tela. As pop��es apresentadas no menu podem ser:

*1. Peso
*	1. Libra Quilograma
*	2. Quilograma Libra
*	3. On�a Grama
*	4. Grama On�a

*2. Volume
*	1. Gal�o Litro
*	2. Litro Gal�o
*	3. On�a Mililitro
*	4. Mililitro On�a

*3. Comprimento
*	1. Milha Quil�metro
*	2. Quil�metro Milha
*	3. Jardas Metro
*	4. Metro Jardas

*Sabe-se que 1 libra equivale a 0.4536 kg, 1 on�a a 28.3495 g, 1 gal�o a 3.7854 l, 1 on�a fluido a 29.5735 ml, 1 milha a 1.6093 km e 1 jarda a 0.9144 m.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
int TIPO, CONVERSOR, X = 0;
	float SAIDA;
	printf("---------------------------------------------------------------------------");
	printf("\n||POR FAVOR FA�A SUA ESCOLHA ABAIXO||");
	printf("\n\t [0]PESO");
	printf("\n\t [1]VOLUME"); 
	printf("\n\t [2]COMPRIMENTO");
	printf("\n---------------------------------------------------------------------------");
	printf("\nDIGITE AQUI SUA OP��O: ");
	
	scanf("%d", &TIPO);
	switch(TIPO){
		case 0:
			printf("\n||VOC� ESCOLHEU PESO, VEJA A LISTA ABAIXO||"); 
			printf("\n---------------------------------------------------------------------------");
			printf("\n\n\t [0] LIBRA >> QUILOGRAMA");
			printf("\n\n\t [1] QUILOGRAMA >> LIBRA");
			printf("\n\n\t [2] ON�A >> GRAMA");
			printf("\n\n\t [3] GRAMA >> ON�A");
			printf("\n---------------------------------------------------------------------------");
			printf("\nQUAL CONVERS�O VOC� DESEJA FAZER AGORA, DIGITE AQUI: ");
			scanf("%d", &CONVERSOR);
			if (CONVERSOR > 3){
				default:
				printf("\n\t||OP��O INVALIDA, TENTE NOVAMENTE!||");
				X = 1;
				break;
			}
			printf("\nDIGITE O VALOR QUE VOC� DESEJA CONVERTER: ");
			scanf("%f", &SAIDA);
		break;
		case 1:
			printf("\n||VOC� ESCOLHEU VOLUME, VEJA A LISTA ABAIXO||");
			printf("\n---------------------------------------------------------------------------");
			printf("\n[4] GAL�O >> LITRO"); 
			printf("\n[5] LIBRA >> GAL�O");
			printf("\n[6] ON�A >> MILILITRO");
			printf("\n[7] MILILITRO >> ON�A");
			printf("\n---------------------------------------------------------------------------");
			printf("\nQUAL CONVERS�O VOC� DESEJA FAZER AGORA, DIGITE AQUI: ");
			scanf("%d", &CONVERSOR);
			if ((CONVERSOR < 4) && (CONVERSOR > 7)){
				printf("\n\t\tOP��O INVALIDA!");
				X = 1;
				break;
			}
			printf("\nDIGITE O VALOR QUE VOC� DESEJA CONVERTER: ");
			scanf("%f", &SAIDA);
		break;
		case 2:
			printf("\n||VOC� ESCOLHEU COMPRIMENTO, VEJA A LISTA ABAIXO||");
			printf("\n---------------------------------------------------------------------------");
			printf("\n[8]MILHA >> QUIL�METRO");
			printf("\n[9]QUIL�METRO >> MILHA");
			printf("\n[10] JARDAS >> METRO");
			printf("\n[11] METRO >> JARDAS");
			printf("\n---------------------------------------------------------------------------");
			printf("\nQUAL CONVERS�O VOC� DESEJA FAZER AGORA, DIGITE AQUI: ");
			scanf("%d", &CONVERSOR);
			if ((CONVERSOR < 8) && (CONVERSOR > 11)){
				printf("\n\t\tOP��O INVALIDA!");
				X = 1;
				break;
			}
			printf("\nDIGITE O VALOR QUE VOC� DESEJA CONVERTER: ");
			scanf("%f", &SAIDA);
		break;
			printf("\n\t\t||OPS!! VOC� ESCOLHEU OP��O INVALIDA, TENTE NOVAMENTE||");
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
				printf("\n\t\tON�A >> GRAMA: %.2f", SAIDA * 28.3495);
			break;
			case 3:
				if (X == 1){
				break;
				}
				printf("\nGRAMA >> ON�A: %.2f", SAIDA / 28.3495);
			break;
			case 4:
				if (X == 1){
				break;
				}
				printf("\nGAL�O >> LITRO: %.2f", SAIDA * 3.7854 );
			break;
			case 5:
				if (X == 1){
				break;
				}
				printf("\nLIBRA >> GAL�O: %.2f", SAIDA / 3.7854);
			break;
			case 6:
				if (X == 1){
				break;
				}
				printf("\nON�A >> MILILITRO: %.2f", SAIDA * 29.5735 );
			break;
			case 7:
				if (X == 1){
				break;
				}
				printf("\nMILILITRO >> ON�A: %.2f", SAIDA / 29.5735);
			break;
			case 8:
				if (X == 1){
				break;
				}
				printf("\n\t\tMILHA >> QUIL�METRO: %.2f", SAIDA * 1.6093);
			break;
			case 9:
				if (X == 1){
				break;
				}
				printf("\n\t\tQUIL�METRO >> MILHA: %.2f", SAIDA / 1.6093);
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
			printf("\n\t\t||OPS!! VOC� ESCOLHEU OP��O INVALIDA, TENTE NOVAMENTE JOBS||");
				break;
 		}
 		
}
