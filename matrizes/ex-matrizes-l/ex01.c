/*16.1 Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas:
a) da linha 3 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz*/

#include <stdio.h>

int main(){
    int M[5][5], linha3=0, coluna2=0, dPrincipal=0, dSecundaria=0, soma=0;

    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
        scanf("%d", &M[l][c]);
        soma += M[l][c];
        }
    }

    for (int c = 0; c < 5; c++){
        linha3 += M[3][c];
    }

    for (int l = 0; l < 5; l++){
        coluna2 += M[l][2];
    }

    for (int i = 0; i < 5; i++){
        dPrincipal += M[i][i];
    }

    for(int i=0; i<5; i++){
        dSecundaria += M[i][4-i]; 
    }

    printf("a) Soma linha 3: %d \nb) Soma coluna 2: %d \nc) Soma da diagonal principal: %d \nd) Soma da diagonal secundaria: %d \ne) Soma de todos os elementos da matriz: %d", linha3, coluna2, dPrincipal, dSecundaria, soma);
}