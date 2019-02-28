/**
 *5_Criar um vetor de 8 elementos inteiros. Mostrar o vetor e informar
 *quantos números são maiores que 10 e mostrar a soma deles.
 */

#include <stdio.h>
#include <conio.h>
 
int main ()
 {
     int vetor[8],cont,cont2=0;
     float soma=0,soma2=0;
 
     for(cont=0;cont<8;cont++)
     {
       printf("Insira um numero para o Vetor: ");
       scanf("%d",&vetor[cont]);
     }
     printf("\n\nVetor formado :\n");
     for(cont=0;cont<8;cont++)
     {
       soma2+=vetor[cont];
       printf("%d = [%d] \n",cont,vetor[cont]);
       if (vetor[cont]>10)
       {
          soma+=vetor[cont];
          cont2++;
       }
    }
    printf("\nSoma dos Vetores >10 = %.0f\nSoma de todos vetores = %.0f",soma,soma2);
    return 0;
 }
