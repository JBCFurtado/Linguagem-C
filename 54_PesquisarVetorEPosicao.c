/**
 *4_Preencher um vetor com 8 números inteiros; solicitar um número a ser
 *pesquisado. Pesquisar se esse número existe no vetor. Se existir,
 *imprimir em qual posição do vetor ele está. Se não existir, imprimir
 *MSG que não existe.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	int vet[8], x,numero, posicao=0;
	for (x=0; x<8; x++){
		printf("Insira um numero no Vetor %d: ", x);
		scanf("%d", &vet[x]);
	}
	printf("\n\n");
	printf("Pesquise um numero no Vetor: ", x);
	scanf("%d", &numero);
	
	for (x=0;x<8;x++)
	if(vet[x]==numero){
	printf("\nO numero: %d \nEsta na posicao: %i", numero,x);
	posicao=1;
}
	if (posicao!=1)
	printf("\nEste numero nao exite!");	
	return 0;
}
