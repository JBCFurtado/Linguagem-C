/**
 *2_Fazer um programa para calcular a i-ésimo termo série de
 *Fibonacci: 0, 1, 2, 3, 5, 8, 13, 21...Nesta série, o primeiro
 *número é 0, o segundo é 1 e os demais são a soma dos
 *dois números anteriores.
 */
#include <stdio.h>
// Inclui o arquivo <"stdio.h">
// stdio.h é responsável pelas funções de entrada e saída

// A função main() é obrigatória em todo programa C.
void main()
{
  // Declaração de variáveis.
  int a, b, auxiliar, i, n;

  // Aqui foi necessário atribuir valores as variáveis a e b.
  a = 0;
  b = 1;

  // A função printf() escreve na tela.
  printf("Digite um número: ");
  // A função scanf obtém um valor digitado.
  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);

  // Com a estrutura de controle for() gero a sequência.
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;

    // Imprimo o número na tela.
    printf("%d\n", auxiliar);
  }
}
