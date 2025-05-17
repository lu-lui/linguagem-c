/*4.8.Escreva um algoritmo para ler 3 valores e escrevê-los em ordem crescente. Considere que os usuário não informará valores iguais.*/

#include <stdio.h>

    int main(){
        float valor1, valor2, valor3;
        printf("Escreva tres valores:\nValor 1: ");
        scanf("%f", &valor1);
        printf("Valor 2: ");
        scanf("%f", &valor2);
        printf("Valor 3: ");
        scanf("%f", &valor3);

        if (valor1 < valor2 && valor2 < valor3)
            printf ("Valores em ordem crescente: %.1f -> %.1f -> %.1f", valor1, valor2, valor3);
        else
            if (valor1 < valor3 && valor3 < valor2)
            printf ("Valores em ordem crescente: %.1f -> %.1f -> %.1f", valor1, valor3, valor2);
            else
                if (valor3 < valor2 && valor2 < valor1)
                printf ("Valores em ordem crescente: %.1f -> %.1f -> %.1f", valor3, valor2, valor1);
                else
                    if (valor3 < valor1 && valor1 < valor2)
                printf ("Valores em ordem crescente: %.1f -> %.1f -> %.1f", valor3, valor1, valor2);
                    else
                        if (valor2 < valor1 && valor1 < valor3)
                            printf ("Valores em ordem crescente: %.1f -> %.1f -> %.1f", valor2, valor1, valor3);
                        else
                            printf ("Valores em ordem crescente: %.1f -> %.1f -> %.1f", valor2, valor3, valor1);
    }