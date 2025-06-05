/*8.4.Altere a solução do exercício 8.3 para que seja impressa a mensagem Valor inválido caso o segundo valor informado seja 0. */

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
} // Já tinha feito isso no exercício 3 :)