/*4.9.Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence. Considere que o usuário não informará nenhuma coordenada igual a zero.*/

#include <stdio.h>

int main(){
    int X, Y;

    printf("Digite as cordenadas cartesianas:\nCordenada X: ");
    scanf("%d", &X);
    printf("Cordenada Y: ");
    scanf("%d", &Y);

    if (X > 0 && Y > 0)
        printf("O ponto pertence ao quadrante I");
    else
        if (X < 0 && Y > 0)
            printf("O ponto pertence ao quadrante II");
        else
            if (X < 0 && Y < 0)
                printf("O ponto pertence ao quadrante III");
            else
                printf("O ponto pertence ao quadrante IV");
}