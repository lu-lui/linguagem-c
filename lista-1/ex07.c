/*Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.*/

#include <stdio.h>

int main(){
    int valor1, valor2;

    printf("Digite dois valores diferentes: ");
    scanf("%d%d", &valor1, &valor2);

    if (valor1 == valor2)
        printf("Voce digitou dois valores iguais :(");
    else
        if (valor1 < valor2)
            printf("%d%d", valor1, valor2);
        else
            printf("%d e %d", valor2, valor1);
}