/*14.9 Ler um vetor B de 10 elementos e um valor X. Escreva as posições (índices) do vetor B em que aparece um valor igual a X.*/

#include <stdio.h>

int main(){
    int X, B[10];

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }

    printf("Digite um valor: ");
    scanf("%d", &X);

    printf("O numero %d aparece na(s) posicao(oes): ", X);

    for (int i = 0; i < 10; i++){
        if(B[i] == X)
            printf("%d ", i);
    }
}