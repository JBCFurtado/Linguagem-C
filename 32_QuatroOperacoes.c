#include <stdio.h>

int main()
{
    float num1, num2, sum, sub, mult, div;
    printf("Digite o primeiro numero: " );
    scanf("%f", &num1);
    printf("Digite o segundo numero: " );
    scanf("%f", &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1/num2;

    printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
    printf("%.2f - %.2f = %.2f\n", num1, num2, sub);
    printf("%.2f * %.2f = %.2f\n", num1, num2, mult);
    printf("%.2f / %.2f = %.2f\n", num1, num2, div);
}
