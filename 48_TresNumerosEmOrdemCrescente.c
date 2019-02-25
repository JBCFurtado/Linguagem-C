/**
 *2_Escreva um programa em C que receba três números inteiros como
 *entrada e imprima, como saída, os números em ordem crescente.
 */
#include <stdio.h>

int main()
{
  int n1, n2, n3;
  printf("Digite tres numeros: \n");
  scanf("%d %d %d", &n1, &n2, &n3);
   if (n1 <= n2)
    {
      if (n2 <= n3)
	{
	  printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
	}
      else
	{
          if (n1 <= n3)
	    {
	      printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
	    }
	  else
	    {
	      printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
	    }
	}
    }
  else
    {
      if (n1 <= n3)
	{
	  printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
	}
      else
        {
	  if (n2 <= n3)
	    {
	      printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
	    }
	  else
	    {
	      printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
	    }
	}
    }

  return 0;
}
