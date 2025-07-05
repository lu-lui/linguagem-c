/*Exercícios 08 – Algoritmos com repetição II
8.1.Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo. Escreva um algoritmo para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O algoritmo deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um valor nulo a leitura deve ser repetida. Utilize a estrutura ENQUANTO na construção da repetição de validação.*/

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
}