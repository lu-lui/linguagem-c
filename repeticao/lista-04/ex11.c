/*11. Faça um algoritmo que lê um valor x e calcula e mostra os 20 primeiros termos da série: S = 1 + 1/x² + 1/x³ + ⋯*/

#include <stdio.h>
#include <math.h>

int main() {
    double x, Termo=1, S=0;
    int i;

    printf("Digite x:\n");
    scanf("%lf", &x);

    printf("%.10lf\n", Termo);
    S = S + Termo;

    for (i = 2; i <= 20; i++) {
        Termo = 1.0 / pow(x, i);
        printf("%.10f\n", Termo);
        S = S + Termo;
    }
}
