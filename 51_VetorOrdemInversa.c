/**
 *2_Faça um programa de um vetor com 10 posições, inicializadas pelo
 *usuário, depois escreva o mesmo vetor na ordem inversa de entrada.
 */

#include<stdio.h>
#include<stdlib.h>
main()
{
int x, vet[10];
for(x=1; x<=10; x++)
{
printf ("\tDigite um numero: ");
scanf("%d",&vet[x]);
printf ("\n");
}
for(x=10; x>=1; x--)
printf ("%d\t",vet[x]);
printf ("\n");
printf("\n");
system("pause");
}
