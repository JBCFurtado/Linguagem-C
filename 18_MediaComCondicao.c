/*
*4_Considere uma disciplina que adota o seguinte critério de aprovação: 
*os alunos fazem duas provas (P1 e P2) iniciais, se a média nas duas provas for maior ou igual a 5.0, 
*e se nenhuma das duas notas for inferior a 3.0, o aluno passa direto. Caso contrário, o aluno faz a (P3) 
*e a média é calculada considerando-se a terceira nota e a maior nota entre P1 e P2. Neste caso, 
*o aluno é aprovado se a média final for maior ou igual a 5.0. Escreva o programa completo que leia inicialmente as duas notas de um aluno, 
*fornecidas pelo usuário via teclado. Se as notas não forem suficientes para o aluno passar direto, 
*o programa deve capturar a nota da terceira prova, também fornecida via teclado. 
*Como saída, o programa deve imprimir a média final do aluno, seguida da mensagem “Aprovado” ou “Reprovado”, conforme o critério descrito acima.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float P1, P2 , P3, MEDIA, MAIOR;
	printf("\nPOR FAVOR ALUNO, INSIRA SUA DUAS NOTAS: \n");
	scanf("%f %f", &P1 ,&P2);
	MEDIA = (P1 + P2)/2.0;
	if (MEDIA >= 5.0 && (P1 > 3.0&& P2 > 3.0)){
		printf("\n------------------------------------------------------------------------------------------------------------");
		printf("\nNOTAS DIGITADAS: %.2f %.2f", P1, P2);
		printf("\n------------------------------------------------------------------------------------------------------------");
		printf("\nSUA MÉDIA FOI: %.2f", MEDIA);
		printf("\nVOCÊ FOI APROVADO, PARABÉNS!");
		printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA INSERIR NOVOS NÚMEROS!");
		printf("\n------------------------------------------------------------------------------------------------------------");
		}
	else{
		printf("\nVOCÊ FOI REPROVADO, POR FAVOR DIGITE NOTA DE RECUPERAÇÃO: ");
		scanf("%f", &P3);
				if (P1 > P2){
				MAIOR = P1;
		}
		else{
				MAIOR = P2;
		}
		MEDIA = (P3 + MAIOR)/2.0;
		if(MEDIA >= 5.0){
			printf("\nNOTAS DIGITADAS: %.2f %.2f %.2f", P1, P2, P3);
			printf("\n-----------------------------------------------------------------------------------------------------------------");
			printf("\nSUA MÉDIA OBTIDA FOI: %.2f \nPARABÉNS ALUNO, VOCÊ FOI APROVADO!", MEDIA);
			printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA FAZER NOVO TESTE!");
			printf("\n-----------------------------------------------------------------------------------------------------------------");
		}
		else{
				printf("\nNOTAS DIGITADAS: %.2f %.2f %2.f", P1, P2, P3);
				printf("\n-----------------------------------------------------------------------------------------------------------------");
				printf("\nINFELIZMENTE SUA MÉDIA OBTIDA FOI: %2.f.0 \nVOCÊ FOI REPROVADO NESSA MATÉRIA.", MEDIA);
				printf("\nAPERTE A TECLA ENTER E DEPOIS F11 PARA FAZER NOVO TESTE!");
		}
	}
}

