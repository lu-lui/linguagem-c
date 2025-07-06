/*12. Faça um algoritmo que calcule a seguinte série S = 1/1 + 3/2 + 5/3 + 7/4 + ⋯ + 99/50*/

#include <stdio.h>

int main(){
    float S, x=1;

    S = x / 1;

    for (int i = 2; i <= 50; i++){
        x += 2;
        S += x / i;
    }

    printf("Resultado da serie: %f", S);
}