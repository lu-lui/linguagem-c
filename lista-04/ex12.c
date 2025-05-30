/*12. Faça um algoritmo que calcule a seguinte série
S = 1/1 + 3/2 + 5/3 + 7/4 + ⋯ + 99/50*/

#include <stdio.h>
#include <math.h> // Para usar pow()

int main() {
    double x, S = 0.0;
    printf("Digite x: ");
    scanf("%lf", &x);

    S += 1.0;
    printf("Termo 1: 1\n");

    for (int i = 2; i <= 20; i++) {
        double termo = 1.0 / pow(x, i);
        printf("Termo %d: %lf\n", i, termo);
        S += termo;
    }

    printf("O resultado da série é: %lf\n", S);
    return 0;
}