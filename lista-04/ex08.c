/*8. Faça um algoritmo que escreva os 30 primeiros termos da série 1,3,9,27... */

#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double Termo;  

    for (i = 0; i <= 29; i++) {
        Termo = pow(3, i);  
        printf("%.0lf\n", Termo);
    }

    return 0;
}
