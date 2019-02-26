/**
 *3_Faça um algoritmo que peça ao usuário para entrar com 6 números
 *inteiros e mostre o menor e a posição dele.
 */

#include <stdio.h>
#define TAM 5

int main() {
    int vet[TAM], i, maior, posMaior, menor, posMenor;
    for (i = 0; i < TAM; i++) {
        scanf("%i", &vet[i]);
    }
    menor    = vet[0];
    posMenor = 0;
    for (i = 1; i < TAM; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
            posMenor = i;
        }
    }
    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%i ", vet[i]);
    }
    printf("\nMenor valor: %i - posicao: %i", menor, posMenor+1);
    return 0;
}
