/*10. Faça um algoritmo que leia um valor N e calcule a seguinte série. Considere que será lido um valor inteiro e positivo.
S = 1/1 + 1/2 + 1/3 + 1/4 + ⋯ + 1/N*/

#include <stdio.h>

int main() {
    int Denominador, N;
    double Divisao, S;

    printf("Número de termos da série a gerar:\n");
    scanf("%d", &N);

    S = 0;
    Denominador = 1;

    while (Denominador <= N) {
        Divisao = 1.0 / Denominador;  // Forçar divisão real
        S = S + Divisao;
        Denominador = Denominador + 1;
    }

    printf("O resultado da série é: %.6lf\n", S);

    return 0;
}
