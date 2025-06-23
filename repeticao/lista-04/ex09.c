/*9. Faça um algoritmo que calcule a seguinte série: S = 1/1 + 1/2 + 1/3 + 1/4 + ⋯ + 1/100*/

#include <stdio.h>

int main() {
    
    float S=1;

    for(int x = 2; x <= 100; x++){
        S = S + 1.0 / x;
        printf("%f\n", S);
    }
}
