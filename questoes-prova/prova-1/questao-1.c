/*1. Escreva um algoritmo que leia 50 valores (preços de produtos). Escreva o valor do produto mais caro e dê um desconto de 12% para o produto mais barato.*/

#include <stdio.h>

int main(){
    float preco, barato, caro, desconto;

    printf("Digite o preco do produto: ");
    scanf("%f", &caro);
    barato = caro;

    for (int x=1; x <= 49; x++){
       printf("Digite o preco do produto: ");
        scanf("%f", &preco);
        
        if (preco > caro)
            caro = preco;

        if (preco < barato)
            barato = preco;
    }

    desconto = barato * 0.88;

    printf("O preco do produto mais caro e R$%.2f. \nO preco do produto mais barato com desconto e R$%.2f.", caro, desconto);
}