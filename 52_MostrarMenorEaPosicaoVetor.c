/**
 *3_Faça um algoritmo que peça ao usuário para entrar com 6 números
 *inteiros e mostre o menor e a posição dele.
 */

#include <stdio.h>
#define t 6

int main() {
    int vet[t], i, menor, posMenor;
    for (i = 0; i < t; i++) {
        scanf("%i", &vet[i]);
    }
    menor    = vet[0];
    posMenor = 0;
    for (i = 1; i < t; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
            posMenor = i;
        }
    }
    printf("Vetor: ");
    for (i = 0; i < t; i++) {
        printf("%i ", vet[i]);
    }
    printf("\nMenor valor: %i - posicao: %i", menor, posMenor+1);
    return 0;
}
