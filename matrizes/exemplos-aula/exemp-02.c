/*Escrever uma matriz de 5x5 que lê os valores e faz a soma */

#include <stdio.h>

int main(){

    int n, soma=0;
    int m[5][5];

    printf("Digite os valores da matriz: \n");

    for (int l = 0; l < 5; l++){
        for (int c = 0; c < 5; c++){
            scanf("%d", &n);
            
            m[l][c] = n; 
            soma += n;
        }
    }

    // Impressão da matriz
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            printf("%d ", m[l][c]);
        }
        printf("\n");
    }
     printf("Soma da matriz: %d", soma);
}