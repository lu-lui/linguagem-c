/*8.2.Altere a solução do exercício 8.1 para que seja impressa a mensagem Valor inválido caso o segundo valor informado seja ZERO.*/

#include <stdio.h>

int main(){
    int v1, v2;
    float divisao;
    
    printf("Digite um dividendo: ");
    scanf("%d", &v1);
    printf("Digite um divisor: ");
    scanf("%d", &v2);

    while (v2 == 0){
        printf("Valor invalido, digite um numero diferente de 0: ");
        scanf("%d", &v2);
    }
    
    divisao = v1 / v2;
    printf("O resultado da divisao de %d por %d e %.2f", v1, v2, divisao);
} // ja tinha feito isso no 1 :)