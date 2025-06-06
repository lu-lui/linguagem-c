/*6. Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe a quantidade de números ímpares e pares lidos. Calcule também a soma dos números pares e a média dos números ímpares.*/

#include <stdio.h>

int main() {
    int numero, par=0, impar=0, somapar=0, somaimpar=0;
    float mediaimpar;

    for (int x = 1; x <= 10; x++) {
        printf("Digite um valor inteiro:\n");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            par++;
            somapar = somapar + numero;
        } else { 
            impar++;
            somaimpar = somaimpar + numero;
        }
    }

    printf("Numero de pares: %d\n", par);
    printf("Soma dos pares: %d\n", somapar);
    printf("Numero de impares: %d\n", impar);

    if (impar > 0) {
        mediaimpar = (float)somaimpar / impar;
        printf("Media dos numeros impares: %.2f\n", mediaimpar);
    } else {
        printf("Media inexistente\n");
    }
}