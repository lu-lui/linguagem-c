/*Escreva um programa em C que leia 300 valores inteiros e armazene-os em um vetor, aceitar somente positivos. Uma mensagem de valor invalido deve ser mostrada se o valor digitado for menor que zero e solicitada uma nova leitura. Calcule a media aritmética destes valores e conte quantos valores armazenados no vetor estao acima desta media, escrevendo esses resultados. */

#include <stdio.h>

#define tam 300

#include <stdio.h>

int main(){
    int V[tam], X[tam], c=0, soma=0; 
    float media;

    for (int i = 0; i < tam; i++){
        printf("Digite valor %d: ", i+1);
        scanf("%d", &V[i]);

        while (V[i] < 0){
            printf("Valor invalido, digite novamente valor %d: ", i+1);
            scanf("%d", &V[i]);
        }

        soma += V[i];
    }

    media = (float) soma / tam;

    for (int i = 0; i < tam; i++){
        if (V[i] > media){
            X[c] = V[i];
            c++;
        } 
    }
    
    printf("A media e %.2f \nHa %d valores acima da media\n", media, c);

    if (c > 0){
        printf("Sao eles: ");
        for (int i = 0; i < c; i++){
            printf("%d ", X[i]);
        }
    }
}