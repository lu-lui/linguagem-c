/*8. Faça um algoritmo que escreva os 30 primeiros termos da série 1,3,9,27... */

#include <stdio.h>
#include <math.h>

int main() {
  
    double termo;  

    for (int i = 0; i <= 29; i++) {
        termo = pow(3, i);  
        printf("%.0lf\n", termo);
    }
}
