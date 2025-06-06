/*12. Faça um algoritmo que calcule a seguinte série S = 1/1 + 3/2 + 5/3 + 7/4 + ⋯ + 99/50*/

#include <stdio.h>

int main() {
    float S=0, n=1;

    for (int x = 1; x <= 50; x++){
        S = S + n / x;
        n = n + 2;
    }

    printf("%f", S);
}