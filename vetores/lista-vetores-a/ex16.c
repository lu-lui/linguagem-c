/*14.16 Ler um vetor M de 10 elementos. Troque a seguir o 1o. elemento com o 6o., o 2o. com o 7o.,etc. até o 5o. com 10o. e escreva o vetor M assim modificado.*/

#include <stdio.h>

int main(){
    int M[10];

    printf("Digite numeros do vetor M: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &M[i]);
    }
    
    for (int i = 0; i < 5; i++){
        int temp = M[i];
        M[i] = M[i + 5];
        M[i + 5] = temp;

        printf("%d ", M[i]);
    }
    
    for (int i = 5; i < 10; i++){
        printf("%d ", M[i]);
    }   
}