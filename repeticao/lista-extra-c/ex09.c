/*11.9 Ler um valor A e um valor N. Imprimir a soma dos N números a partir de A(inclusive). Caso N seja negativo ou ZERO, deverá ser lido um novo N(apenas N).*/

#include <stdio.h>

int main(){

    int A, N, soma=0;

    printf("Valor 1: ");
    scanf("%d", &A);

    printf("Valor 2: ");
    scanf("%d", &N);    

    while (N <= 0){
        printf("Valor invalido, digite um valor maior que 0: ");
        scanf("%d", &N);  
    }
    
    for (int i = 0; i < N; i++) {
        soma += A + i ;
    }
    
    printf("A soma dos %d numeros a partir de %d e: %d", N, A, soma);
}