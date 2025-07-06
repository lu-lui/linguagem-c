/*14.15 Ler um vetor U de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o. com o penúltimo, etc. até o 5o. com o 6o. e escreva o vetor U assim modificado.*/

#include <stdio.h>

int main(){
    int U[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &U[i]);
    }    

    for (int i = 0; i < 5; i++){
        int temp = U[i];
        U[i] = U[9 - i];
        U[9 - i] = temp;

        printf("%d ", U[i]);
    }
    
    for (int i = 5; i < 10; i++){
        printf("%d ", U[i]);
    }   
}