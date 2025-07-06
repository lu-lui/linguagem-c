/*10. Faça um algoritmo que leia um valor N e calcule a seguinte série. Considere que será lido um valor inteiro e positivo. S = 1/1 + 1/2 + 1/3 + 1/4 + ⋯ + 1/N*/

#include <stdio.h>

int main(){
    int N;
    float S=0;
    
    printf("Digite um numero: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        S += 1.00 / i;
    }
    
    printf("O resultado da serie e %.2f", S);
}
