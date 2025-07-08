/*15.13 Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 a 9. O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele tem uma tabela que indica para cada mercadoria o preço de venda. Escreva um algoritmo que leia a quantidade vendida de cada produto no final do mês (armazenando-os em um vetor Q) e o preço de venda de cada um (armazenado-os em um vetor P). Logo após calcular e escrever o faturamento mensal do armazém.*/

#include <stdio.h>

int main(){
    int Q[10];
    float P[10], faturamento=0;

    for (int i = 0; i < 10; i++){
        printf("Quantidade de vendas do produto %d: ", i);
        scanf("%d", &Q[i]);

        printf("Preco de venda do produto %d: ", i);
        scanf("%f", &P[i]);

        faturamento += Q[i] * P[i];
    }

    printf("Faturamento mensal do armazem: R$%.2f", faturamento);
}