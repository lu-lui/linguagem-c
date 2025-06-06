/*11. Faça um algoritmo que lê um valor x e calcula e mostra os 20 primeiros termos da série: S = 1 + 1/x² + 1/x³ + ⋯*/

#include <stdio.h>
#include <math.h>

int main() {
    double x, Termo, S;
    int i;

    printf("Digite x:\n");
    scanf("%lf", &x);

    S = 0;
    Termo = 1;

    printf("%.6lf\n", Termo);
    S = S + Termo;

    for (i = 2; i <= 20; i++) {
        Termo = 1.0 / pow(x, i);
        printf("%.6lf\n", Termo);
        S = S + Termo;
    }

    printf("O resultado da série é: %.6lf\n", S);

    return 0;
}
