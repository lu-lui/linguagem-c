/*4.6.Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que os usuário não informará valores iguais.*/

#include <stdio.h>

    int main(){
        float valor1, valor2, valor3;
        printf("Escreva tres valores:\n Valor 1: ");
        scanf("%f", &valor1);
        printf("Valor 2: ");
        scanf("%f", &valor2);
        printf("Valor 3: ");
        scanf("%f", &valor3);

        if (valor1 > valor2 && valor1 > valor3)
            printf ("O maior valor e o %.1f", valor1);
        else
            if (valor2 > valor1 && valor2 > valor3)
                printf ("O maior valor e o %.1f", valor2);
            else
                printf ("O maior valor e o %.1f", valor3);
    }