/*14.10 Ler um vetor C para armazenar 10 códigos e uma variável A que contenha um código. Escrever a mensagem ACHEI se o código armazenado em A estiver no vetor C, e NÃO ACHEI caso contrário.*/

#include <stdio.h>

int main(){
    int A, C[10], x=0;

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &C[i]);
    }

    printf("Digite um valor: ");
    scanf("%d", &A);

    for (int i = 0; i < 10; i++){
        if(C[i] == A)
        x++;
    }

    if (x > 0)
        printf("ACHEI");
    else
        printf("NAO ACHEI");
    }
