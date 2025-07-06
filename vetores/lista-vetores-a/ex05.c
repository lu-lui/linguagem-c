/*14.5 Ler um vetor D de 10 elementos. Crie um vetor E, com todos os elementos de D (na mesma ordem). Escrever todo o vetor D e logo após todo o vetor E.*/

#include <stdio.h>

int main(){
    int D[10], E[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &D[i]);
        E[i] = D[i];  
    }

    for(int i=0; i<10; i++){
        printf("%d ", D[i]);
    }

    printf("\n");

    for(int i=0; i<10; i++){
        printf("%d ", E[i]);
    }
}