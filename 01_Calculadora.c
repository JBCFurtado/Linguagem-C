#include <stdio.h>

int main(){

    printf("\t\t\t\t*******\n");
    printf("\t\t\t\t*CALCULADORA*\n");
    printf("\t\t\t\t*******\n");

int resp;
float a, b;
int loop=0;

while(!loop){

    printf("\n\n\t\t\t Escolha 1 para SOMAR!\n");
    printf("\t\t\t Escolha 2 para SUBTRAIR!\n");
    printf("\t\t\t Escolha 3 para MULTIPLICAR!\n");
    printf("\t\t\t Escolha 4 para DIVIDIR!\n");
    printf("\t\t\t\tEscolha:");
scanf("%d", &resp);

if(resp==1){

    printf("\n\t\t\tEscolha o valor de A:");
    scanf("%f", &a);
    printf("\n\t\t\tEscolha o valor de B:");
    scanf("%f", &b);
    printf("\nO VALOR DA SOMA E %.1f!", a+b);

} else if(resp==2){

    printf("\n\t\t\tEscolha o valor de A:");
    scanf("%f", &a);
    printf("\n\t\t\tEscolha o valor de B:");
    scanf("%f", &b);
    printf("\nO VALOR DA SUBTRACAO E %.1f!", a-b);

} else if(resp==3){

    printf("\n\t\t\tEscolha o valor de A:");
    scanf("%f", &a);
    printf("\n\t\t\tEscolha o valor de B:");
    scanf("%f", &b);
    printf("\nO VALOR DA MULTIPLICACAO E %.1f!", a*b);
}
else if(resp==4){

    printf("\n\t\t\tEscolha o valor de A:");
    scanf("%f", &a);
    printf("\n\t\t\tEscolha o valor de B:");
    scanf("%f", &b);
    printf("\nO VALOR DA DIVISAO E %.1f!", a/b);
} else{

    printf("OPCAO NAO DISPONIVEL");

}
}
}
