/*17.5 Ler a quantidade de linhas L e colunas C de uma matriz A (no máximo 10). A seguir ler uma matriz de L linhas por C colunas. Gerar uma matriz T transposta de A. Imprimir a matriz T. Exemplo:
Matriz A        Matriz T
5  3  20         5   2
2  1  12         3   1
                20  12*/


#include <stdio.h>

int main(){
    int L, C, A[10][10], T[10][10];

    printf("Quantidade de linhas da matriz (max. 10):");
    scanf("%d", &L);

    while (L > 10 || L < 1){
        printf("Valor invalido, tente novamente: ");
        scanf("%d", &L);
    }

    printf("Quantidade de colunas da matriz (max. 10):");
    scanf("%d", &C);

    while (C > 10 || C < 1){
        printf("Valor invalido, tente novamente: ");
        scanf("%d", &C);
    }

    printf("Elementos da Matriz A de %dX%d: \n", L, C);
    for (int l = 0; l < L; l++){
        for (int c = 0; c < C; c++){
            scanf("%d", &A[l][c]);
        }
    }

    for (int l = 0; l < C; l++){
        for (int c = 0; c < L; c++){
            T[l][c] = A[c][l];
        }
    }
    
    for (int l = 0; l < C; l++){
        for (int c = 0; c < L; c++){
            printf("%d ", T[l][c]);
        }
        printf("\n");
    }
}
