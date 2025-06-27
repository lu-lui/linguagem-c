/*14.7 Ler um vetor Z de 10 elementos. Crie um vetor W, com todos os elementos de Z (na ordem inversa) Escrever o vetor W.*/

#include <stdio.h>

int main(){
    int Z[10], W[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &Z[i]); 
    }

    for(int i=9; i>=0; i--){
        W[i] = Z[i];
        printf("%d ", W[i]);
    }
}