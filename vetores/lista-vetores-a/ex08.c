/*14.8 Ler um vetor A de 10 elementos e um valor V. Conte e escreva quantas vezes o valor V ocorre no vetor A.*/

#include <stdio.h>

int main(){
    int V, X=0, A[10];

    printf("Digite um numero: ");
    scanf("%d", &V);

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &A[i]);

        if(A[i] == V)
            X++;
    }

    printf("O numero %d aparece %d vezes no vetor", V, X);
}