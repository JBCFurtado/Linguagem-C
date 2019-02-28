/**
 *3_Faça um algoritmo que peça ao usuário para entrar com 6 números
 *inteiros e mostre o menor e a posição dele.
 */

#include <stdio.h>

int main() {
    int vet[6], i, menor, posMenor;
    for (i = 0; i < 6; i++) {
        scanf("%i", &vet[i]);
    }
    menor    = vet[0];
    posMenor = 0;
    for (i = 1; i < 6; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
            posMenor = i;
        }
    }
    printf("Vetor: ");
    for (i = 0; i < 6; i++) {
        printf("%i ", vet[i]);
    
    printf("\nMenor valor: %i - posicao: %i", menor, posMenor+1);
    return 0;
}
