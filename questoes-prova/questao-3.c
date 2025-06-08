/*3. Um pesquisador está investigando sobre mudanças climáticas e precisa calcular a média de temperatura e pressão atmosférica de um mês de dados. Escreva um programa que leia 30 valores que representem dados de temperatura e pressão atmosférica diários medidos. Escreva as médias de temperatura e pressão atmosférica deste mês e temperatura do dia mais quente.*/

#include <stdio.h>

int main(){

    float temperatura, somaTemp = 0, pressao, somaPressao = 0, mediaPressao, mediaTemp, quente;
    int dia = 1;

    printf("Temperatura do dia %d: ", dia);
    scanf("%f", &temperatura);
    quente = temperatura;
    somaTemp = somaTemp + temperatura;

    printf("Pressao atmosferica do dia %d: ", dia);
    scanf("%f", &pressao);
    mediaPressao = pressao;
    somaPressao = somaPressao + pressao;

    for (int x = 1; x <= 29; x++){
        dia++;

        printf("Temperatura do dia %d: ", dia);
        scanf("%f", &temperatura);

        if(temperatura > quente)
            quente = temperatura;

        somaTemp = somaTemp + temperatura;

        printf("Pressao atmosferica do dia %d: ", dia);
        scanf("%f", &pressao);

        somaPressao = somaPressao + pressao;
    }

    mediaTemp = somaTemp / 30;
    mediaPressao = somaPressao / 30;

    printf("Media de temperatura do mes: %.1f \nMedia de pressao atmosferica do mes: %.1f \nTemperatura do dia mais quente: %.1f.", mediaTemp, mediaPressao, quente);
}