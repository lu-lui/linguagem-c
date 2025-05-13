/*Construir um algoritmo que dados dois números escreva o maior.*/

#include <stdio.h>

int main(){
    float numero1, numero2;

    printf("Digite dois numeros: ");
    scanf("%f%f", &numero1, &numero2);

    if (numero1 > numero2)
        printf("O numero maior e: %.1f", numero1);
    else
        if (numero2 > numero1)
            printf("O numero maior e: %.1f", numero2);
        else
            printf("Os dois numeros sao iguais");
}