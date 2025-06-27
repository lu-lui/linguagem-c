/*14.14 Ler um vetor Q de 10 posições (aceitar somente números positivos-se o valor informado for negativo ou zero a leitura deverá ser repetida). Escreva a seguir o valor do maior elemento de Q e a respectiva posição(índice) que ele ocupa no vetor.*/

#include <stdio.h>

int main(){
    int Q[10], maior, posicao;

    printf("Valores do vetor Q: \n");
    scanf("%d", &Q[0]);

    while (Q[0] < 1){
        printf("Valor nao aceito, digite um valor positivo: \n");
        scanf("%d", &Q[0]);
    }
    

    maior = Q[0];
    posicao = 0;

    for (int i = 1; i < 10; i++){
        scanf("%d", &Q[i]);

         while (Q[i] < 1){
            printf("Valor nao aceito, digite um valor positivo: \n");
            scanf("%d", &Q[i]);
        }
    
        if (Q[i] > maior){
            maior = Q[i];
            posicao = i;
        }
    }
   
    printf("O maior valor do vetor e %d e ele esta na posicao %d.", maior, posicao);
}