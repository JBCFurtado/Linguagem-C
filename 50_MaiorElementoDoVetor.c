/**
 *1_Para um vetor vet com 5 números inteiros, formular um algoritmo
 *determine o maior elemento deste vetor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, vet [5] = {8, 7, 10, 2, 11};
    int maior = vet[0];
    for (i = 1; i < 5; i++){
        if (maior < vet[i]){
            maior = vet[i];
        }
    }
    printf("Maior: %d", maior);
    return 0;
}
