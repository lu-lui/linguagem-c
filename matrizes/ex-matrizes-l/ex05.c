/*16.5.Ler uma matriz G 5 x 5 e criar 2 vetores SL e SC de 5 elementos que contenham respectivamente as somas das linhas e das colunas de G. Escrever os vetores criados.*/

#include <stdio.h>

int main(){
    int G[5][5], SL[5] = {0}, SC[5] = {0};

    printf("Elementos da matriz G: \n");
    for (int l = 0; l < 5; l++){
        for (int c = 0; c < 5; c++){
            scanf("%d", &G[l][c]);
        }
    }
    
    for (int l = 0; l < 5; l++){
        for (int c = 0; c < 5; c++){
            SL[l] += G[l][c];
            SC[c] += G[l][c];
        }
    }

    printf("Somas das linhas de G: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", SL[i]);
    }
    
    printf("\nSomas das colunas de G: ");
    for (int i = 0; i < 5; i++){
         printf("%d ", SC[i]);
    }
}