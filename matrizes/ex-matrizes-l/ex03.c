/*16.3.Ler uma matriz A de 4 x 4, calcular e escrever as somas dos elementos marcados com o X. Utilizar estruturas de repetição.
XX..     ....      X...     .XXX
XX..     ....      XX..     ..XX
....     ..XX      XXX.     ...X 
....     ..XX      XXXX     ....
*/
                                       
#include <stdio.h>

int main(){
    int A[4][4], soma=0;

    printf("Elementos da matriz A: \n");
    for (int l = 0; l < 4; l++){
         for (int c = 0; c < 4; c++){
            scanf("%d", &A[l][c]);
         }
    }

    for (int l = 0; l < 2; l++){
         for (int c = 0; c < 2; c++){
            soma += A[l][c];
        }
    }
    printf("Soma 1: %d \n", soma);
    
    soma=0;
 
    for (int l = 2; l < 4; l++){
         for (int c = 2; c < 4; c++){
            soma += A[l][c];
        }
    }
    printf("Soma 2: %d \n", soma);

    soma=0;

    for (int l = 0; l < 3; l++){
         for (int c = 0; c <= l; c++){
            soma += A[l][c];
        }
    }
    printf("Soma 3: %d \n", soma);

    soma=0;
    
    for (int l = 0; l < 3; l++){
         for (int c = l + 1; c < 4; c++){
            soma += A[l][c];
        }
    }
    printf("Soma 4: %d \n", soma);  
}