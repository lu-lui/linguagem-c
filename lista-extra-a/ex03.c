/*8.3.Reescreva o algoritmo para o problema 8.1 utilizando a estrutura FAÇA/ENQUANTO na construção da repetição de validação. */

#include <stdio.h>

int main(){
    int v1, v2;
    float divisao;
    
    do {
        printf("Digite um dividendo: ");
        scanf("%d", &v1);
        printf("Digite um divisor: ");
        scanf("%d", &v2); 

        if(v2 == 0)
        printf("Valor invalido, tente novamente com um divisor diferente de 0!");

        divisao = v1 / v2;
    } while (v2 == 0);

    printf("O resultado da divisao de %d por %d e %.2f", v1, v2, divisao);
}