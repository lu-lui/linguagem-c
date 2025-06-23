/*1. Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve ser encerrada sem imprimir mensagem alguma.*/

#include <stdio.h>

int main(){

    float numero;

    do {
        printf("Digite um numero:");
        scanf("%f", &numero);
        
        if (numero > 0)
            printf("POSITIVO\n");
        else 
            if (numero < 0)
                printf("NEGATIVO\n");
    } while(numero != 0);
}