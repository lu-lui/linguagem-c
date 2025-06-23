//O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.

#include <stdio.h>

int main() {
    float custoFabrica, distribuidor, impostos, custoConsumidor;

    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    distribuidor = custoFabrica * 0.28;
    impostos = custoFabrica * 0.45;

    custoConsumidor = custoFabrica + distribuidor + impostos;

    printf("Custo final ao consumidor: R$ %.2f\n", custoConsumidor);

}