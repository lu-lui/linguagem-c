/*16.6.Ler uma matriz A 12 x 13 e divida todos os 13 elementos de cada uma das 12 linhas de A pelo valor do maior elemento daquela linha. Escrever a matriz A modificada.*/


/*16.6.Ler uma matriz A 2 x 3 e divida todos os 3 elementos de cada uma das 2 linhas de A pelo valor do maior elemento daquela linha. Escrever a matriz A modificada.*/

#include <stdio.h>

int main(){
    float A[12][13], X[2] = {-1000, -1000} ;

    printf("Matriz A: \n");
    for (int l = 0; l < 12; l++){
        for (int c = 0; c < 13; c++){
            scanf("%f", &A[l][c]);
            if (A[l][c] > X[l])
                X[l] = A[l][c];
            
        }
    }

    for (int l = 0; l < 12; l++){
        for (int c = 0; c < 13; c++){
           A[l][c] = A[l][c] / X[l];
        }
    }

    printf("Matriz A modificada: \n");
    for (int l = 0; l < 12; l++){
        for (int c = 0; c < 13; c++){
           printf("%.2f ", A[l][c]);
        }
        printf("\n");
    }
}