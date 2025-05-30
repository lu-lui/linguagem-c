/*6. Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe a quantidade de números ímpares e pares lidos. Calcule também a soma dos números pares e a média dos números ímpares.*/

#include <stdio.h>

int main() {
    int cont, numero, par, impar, somapar, somaimpar;
    float mediaimpar;

    par = 0;
    impar = 0;
    somapar = 0;
    somaimpar = 0;

    for (cont = 1; cont <= 10; cont++) {
        printf("Digite um valor inteiro:\n");
        scanf("%d", &numero);

        if (numero % 2 == 0) {  // Se for par
            par++;
            somapar += numero;
        } else {  // Se for ímpar
            impar++;
            somaimpar += numero;
        }
    }

    printf("Numero de pares: %d\n", par);
    printf("Soma dos pares: %d\n", somapar);
    printf("Numero de impares: %d\n", impar);

    if (impar > 0) {
        mediaimpar = (float)somaimpar / impar;
        printf("Media dos números ímpares: %.2f\n", mediaimpar);
    } else {
        printf("Média inexistente\n");
    }
}