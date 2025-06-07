/*5. A série de Fibonacci é uma sequência de números em que os dois primeiros são 0 e 1 e a partir daí cada número é a soma dos anteriores, ou seja Tn = Tn-1 + Tn-2. Faça um algoritmo que escreve os x primeiros termos da série e a soma destes termos.*/

#include <stdio.h>

int main() {
    int Soma=0, t1=0, t2=1, t3, x;

    printf("Número de termos a calcular:\n");
    scanf("%d", &x);

    if (x >= 1) {
        printf("%d\n", t1); 
        Soma = Soma + t1;
    }

    if (x >= 2) {
        printf("%d\n", t2); 
        Soma = Soma + t2;
    }

    for (int i = 3; i <= x; i++) { 
        t3 = t1 + t2;
        printf("%d\n", t3);
        Soma = Soma + t3;
        t1 = t2;
        t2 = t3;
    }

    printf("Soma dos %d termos: %d\n", x, Soma);

}

