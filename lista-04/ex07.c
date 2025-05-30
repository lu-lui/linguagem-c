/*7. Faça um programa que leia 10 números, considere que serão lidos números inteiros e positivos. Se o número lido for menor que 7, calcule o seu fatorial. Se for maior ou igual a 7, calcule a soma de 1 até o número lido.*/

#include <stdio.h>

int main() {
    int i, Num, Contador, soma, fatorial;

    for (Contador = 1; Contador <= 10; Contador++) {
        soma = 0;
        fatorial = 1;

        printf("Informe o numero:\n");
        scanf("%d", &Num);

        if (Num < 7) {
            for (i = 1; i <= Num; i++) {
                fatorial = fatorial * i;
            }
            printf("Fatorial: %d\n", fatorial);
        } else {
            for (i = 1; i <= Num; i++) {
                soma = soma + i;
            }
            printf("Soma: %d\n", soma);
        }
    }
}
