//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

#include <stdio.h>

int main(){
    int anos, meses, dias, idade_dias;

    printf("Digite sua idade completa em anos, meses e dias, respectivamente: \n");
    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    idade_dias = anos * 365 + meses * 30 + dias;

    printf("Voce tem %d dias de idade!", idade_dias);

}