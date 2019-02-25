/**
 *Crie um programa que calcule o volume de cilindro.
 */
#include <stdio.h>
#define pi 3.14159
float volume_cilindro (float r, float h){
float v;
v = pi * r * r * h;
return v;
}

int main(void)
{
float raio, altura, volume;
printf("Entre com o valor do raio e da altura: \n");
scanf("%f %f", &raio, &altura);
volume = volume_cilindro(raio, altura);
printf("Volume do cilindro = %f\n", volume);

    return 0;
}
