/*4.7.Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que os usuário não informará valores iguais.*/

#include <stdio.h>

    int main(){
        float valor1, valor2, valor3, soma;
        printf("Escreva tres valores:\n Valor 1: ");
        scanf("%f", &valor1);
        printf("Valor 2: ");
        scanf("%f", &valor2);
        printf("Valor 3: ");
        scanf("%f", &valor3);

        if (valor1 < valor2 && valor1 < valor3){
            soma = valor2 + valor3;
            printf("A soma dos dois maiores valores e %.1f", soma);
        } else
            if (valor2 < valor1 && valor2 < valor3){
                soma = valor1 + valor3;
                printf("A soma dos dois maiores valores e %.1f", soma);
            } else {
                soma = valor2 + valor1;
                printf("A soma dos dois maiores valores e %.1f", soma);
            }
}