/*Para testar as condições de saúde da população, uma pesquisa está avaliando o índice de massa corporal de 500 individuos. Escreva um programa em C que leia os dados de altura (metros) e peso (Kg) destes indivíduos e armazene-os em dois vetores, respectivamente. Calcule para cada um o índice de massa corpórea utilizando a formula IMC = peso / (altura * altura) e armazene num terceiro vetor. Conte quantos indivíduos têm IMC maior que 30 e mostre o resultado*/

#include <stdio.h>

#define tam 500

int main(){
    float A[tam], P[tam], IMC[tam], M30[tam];
    int c=0;

    printf("-----PESQUISA DE INDICE DE MASSA CORPORAL-----\n");
    
    for (int i = 0; i < tam; i++){
        printf("Altura Individuo %d em metros: ", i+1);
        scanf("%f", &A[i]);
        printf("Peso Individuo %d em Kg: ", i+1);
        scanf("%f", &P[i]);

        IMC[i] = P[i] / (A[i] * A[i]);

        if(IMC[i] > 30){
            M30[c] = IMC[i];
            c++;
        }
    }

    printf("Pessoas com IMC maior que 30: %d \n", c);

    if (c > 0){
        printf("Resultado: ");
        for (int i = 0; i < c; i++){
            printf("%.2f \n", M30[i]);
       }
    }
}