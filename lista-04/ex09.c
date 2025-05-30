/*9. Faça um algoritmo que calcule a seguinte série: 
S = 1/1 + 1/2 + 1/3 + 1/4 + ⋯ + 1/100*/

#include <stdio.h>
#include <math.h>

int main() {
    int i = 0;
    double Termo;

    do {
        Termo = pow(3, i);
        printf("%.0lf\n", Termo);
        i++;
    } while (i <= 29);

    return 0;
}
