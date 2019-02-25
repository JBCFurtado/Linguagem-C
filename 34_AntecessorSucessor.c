/**
 *4_Peça para o usuário entrar com um número inteiro, mostre seu antecessor e seu
 *sucessor.
 */
#include <stdio.h>

int main()
{
    int i;
    printf("Digite um numero inteiro: ");
    scanf("%d", &i);
    printf("\nAntecessor de %d :",i-1);
    printf("\nSucessor   de %d :\n\n",i+1);
    return(0);
}
