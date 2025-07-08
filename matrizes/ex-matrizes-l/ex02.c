/*16.2 Ler 2 matrizes, A 4 x 6 e B 4 x 6 e criar :
a) uma matriz S que seja a soma de A e B.
b) uma matriz D que seja a diferença de A e B. (A – B).
Escrever as matrizes S e D após todo cálculo estar concluído.*/

#include <stdio.h>

int main(){
    int A[4][6], B[4][6], S[4][6], D[4][6];

    printf("Elementos da matriz A: \n");
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 6; c++){
            scanf("%d", &A[l][c]);
        }   
    }
    
    printf("Elementos da matriz A: \n");
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 6; c++){
            scanf("%d", &B[l][c]);
        }   
    }

    printf("Matriz S (A + B): \n");
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 6; c++){
            S[l][c] = A[l][c] + B[l][c];
            printf("%d ", S[l][c]);
        } 
        printf("\n");  
    }

    printf("Matriz D (A - B): \n");
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 6; c++){
          D[l][c] = A[l][c] - B[l][c];
            printf("%d ", D[l][c]);
        } 
        printf("\n");  
    }
}