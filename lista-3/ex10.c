/*4.10.Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence. Se o ponto estiver sobre os eixos, ou na origem, escrever NÃO ESTÁ EM NENHUM QUADRANTE. Considere que o usuário poderá informar qualquer valor para as coordenadas.
[Entrada]| [Entrada]| [Entrada]| [Entrada]
2 (x)    | -8 (x)   | -4 (x)   | 6 (x)
3 (y)    | 5 (y)    | -3 (y)   | -2 (y)
         |          |          |
[Saída]  | [Saída]  | [Saída]  | [Saída]
I        | II       | III      | IV
---------+-------+--+----------+---+--------------------
[Entrada]        | [Entrada]       | [Entrada]
0 (x)            | 8 (x)           | 0 (x)
0 (y)            | 0 (y)           | -2 (y)
                 |                 |
[Saída]          | [Saída]         | [Saída]
Nenhum quadrante |Nenhum quadrante | Nenhum quadrante*/

#include <stdio.h>

int main(){
    float X, Y;

    printf("Digite as cordenadas cartesianas:\nCordenada X: ");
    scanf("%f", &X);
    printf("Cordenada Y: ");
    scanf("%f", &Y);

    if (X > 0 && Y > 0)
        printf("O ponto pertence ao quadrante I");
    else
        if (X < 0 && Y > 0)
            printf("O ponto pertence ao quadrante II");
        else
            if (X < 0 && Y < 0)
                printf("O ponto pertence ao quadrante III");
            else
                if (X > 0 && Y < 0)    
                    printf("O ponto pertence ao quadrante IV");
                else
                    printf("O ponto nao pertence a nenhum quadrante");
}