/*16.4.Ler uma matriz D 5 x 5 (considere que não serão informados valores duplicados). A seguir ler um número X e escreva uma mensagem indicando se o valor de X existe ou NÃO na matriz. */

#include <stdio.h>

int main(){
    int M[5][5], X, Y=0;

    for (int l=0; l < 5 ; l++){
        for(int c = 0; c < 5; c++){
            scanf("%d", &M[l][c]);
        }
    }
    
    printf("Digite um numero: ");
    scanf("%d", &X);

    for (int l=0; l < 5 ; l++){
            for(int c = 0; c < 5; c++){
            if(M[l][c] == X)
                Y++;
        }
    }

    if(Y > 0)
        printf("O valor existe na matriz");
    else
        printf("O valor nao existe na matriz");
}