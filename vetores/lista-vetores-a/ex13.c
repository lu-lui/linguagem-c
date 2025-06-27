/*14.13 Ler 2 vetores: R de 5 elementos e S de 10 elementos. Gere um vetor X de 15 elementos cuja as 5 primeiras posições contenha os elementos de R e as 10 últimas posições os elementos de S. Escrever o vetor X.*/

#include <stdio.h>

int main(){
    int R[5], S[10], X[15];

    printf("Valores do vetor R: \n");
        for (int i = 0; i < 5; i++){
            scanf("%d", &R[i]);
            X[i] = R[i];
        }
    
    printf("Valores do vetor S: \n");
        for (int i = 0; i < 10; i++){
            scanf("%d", &S[i]);
            X[5+i] = S[i];
    }

    printf("Vetor X: ");
    for (int i = 0; i < 15; i++){
       printf("%d ", X[i]);
    }
    
}