/*
 *5_Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
 *Em seguida, através de um laço while, pede ao usuário para que entre com as notas de todos os alunos da sala,
 *um por vez. Por fim, o programa deve mostrar a média, aritmética, da turma. Para resolver este exercício,
 *vamos precisar de várias variáveis de apoio. A variável 'total' vai receber o número total de alunos em uma sala. A
 *variável 'count' será a que vai mudar dentro do laço WHILE. E ela começa do primeiro aluno e termina no último.
 *A cada iteração do laço while, pedimos uma nota, que é somada a variável do tipo float 'soma'. A média
 *aritmética é dada por essa soma (de todas as notas), dividida pelo número de alunos na sala
 */
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int alunos, i = 1;
	float nota, media = 0;
	printf("Digite quantos alunos existe na sala: ");
	scanf ("%d", &alunos);
	printf("\n");
	while(i <= alunos){
		printf("Digite a nota do %dª aluno: ", i);
		scanf("%f", &nota);
		if (nota < 0 || nota > 10){
			printf("\n\t\tNota Inválida, digite a nota do aluno novamente!\n\n");
			continue;
		}
		media += nota;
		i++;
	}
	i--;
	printf("\nMédia da turma é = %.2f ", media/i);
}
