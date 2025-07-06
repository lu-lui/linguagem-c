/*13. Faça um algoritmo que gere os N primeiros termos da série a seguir. Considere que será lido um valor inteiro e positivo. S = 1 + (8-4)/3 + (12-3)/5 + (16-4)/7 + (20-3)/9 + ⋯ */

#include <stdio.h>

int main() {
    int N;
    float T;
    printf("Numero de termos a gerar: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            T = (double)((4 * i) - 4) / (2 * i - 1);  
        } else {
            T = (double)((4 * i) - 3) / (2 * i - 1);  
        }
        printf("Termo %d: %.2lf\n", i, T);
    }
}