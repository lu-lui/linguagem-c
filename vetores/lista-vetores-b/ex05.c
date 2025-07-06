/*15.5 Ler 2 vetores X e Y de 10 elementos cada um (ocupando as posições de 0 a 9 em cada vetor). Intercalar os elementos desses 2 vetores formando assim, um novo vetor R de 20 elementos, onde nas posições pares de R (0,2,4,...,8) estejam os elementos de X e nas posições ímpares (1,3,...,9) os elementos de Y. Após a geração completa do vetor R, escreva-o.*/

#include <stdio.h>

int main(){
    int X[10], Y[10], R[20], x=0, y=1;

    printf("Vetor X: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &X[i]);
        R[x] = X[i];
        x += 2;
    }
    
    printf("Vetor Y: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &Y[i]);
        R[y] = Y[i];
        y += 2;
    }


    printf("Vetor R: \n");
    for (int i = 0; i < 20; i++){
        printf("%d ", R[i]);
    }
}