/*Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo, negativo ou zero.*/

#include <stdio.h>

int main(){
    int numero, resto;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 0)
        printf("O numero e par.\n");
    else
        printf("O numero e impar.\n");

    if (numero > 0)
        printf("O numero e positivo.");
    else
        if (numero < 0)
            printf("O numero e negativo.");
        else
            printf("O numero e zero.");

    
    
    
    
}