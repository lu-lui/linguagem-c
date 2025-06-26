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

/*Exemplos somando:

1- Apenas a coluna (2):
for(int l=0; l<5; l++){
soma += m[l][2];
}

2- Apenas a linha (3): 
for(int c=0; c<5; c++){
soma += m[3][c];
}

3- Apenas a diagonal principal:
for(int i=0; i<5; i++){
soma += m[i][i];
-> Diagonal principal: linha == coluna
}

4- Diagonal secundária:
int c = 4;
for(int i=0; i<5; i++){
soma += m[i][c];     ou     soma += m[i][4-i]
c--;
}
*/