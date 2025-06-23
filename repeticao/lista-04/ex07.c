/*7. Faça um programa que leia 10 números, considere que serão lidos números inteiros e positivos. Se o número lido for menor que 7, calcule o seu fatorial. Se for maior ou igual a 7, calcule a soma de 1 até o número lido.*/

#include <stdio.h>

int main() {
    int numero, soma=0, fatorial=1;

    for (int x = 1; x <= 10; x++){

        printf("Informe o numero:\n");
        scanf("%d", &numero);

        if (numero < 7) {
            for (int i = 1; i <= numero; i++){
                fatorial = fatorial * i;
            }
            printf("Fatorial: %d\n", fatorial);
        } else {
            for (int i = 1; i <= numero; i++){
                soma = soma + i;
            }
            printf("Soma: %d\n", soma);
        }
    }
}
