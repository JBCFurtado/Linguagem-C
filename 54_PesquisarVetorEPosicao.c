/**
 *4_Preencher um vetor com 8 números inteiros; solicitar um número a ser
 *pesquisado. Pesquisar se esse número existe no vetor. Se existir,
 *imprimir em qual posição do vetor ele está. Se não existir, imprimir
 *MSG que não existe.
 */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int x, vet[8], num, y=0;
for(int x=0;x<8;x++)
{
printf("\n[%d] Digite um numero: ",x);
scanf("%d",&vet[x]);
}
printf("\n\n");
printf("Digite um valor a ser pesquisado: ");
scanf("%d",&num);
for(int x=0;x<8;x++)
if(vet[x]==num)
{
printf("\n O numero %d esta na posicao %d: ",num,x);
y=1;
}
if(y!=1)
printf("\n Este numero nao existe");
printf("\n\n");
system("pause");
return(0);
}
