/*15.2 Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos contendo uma aposta. A seguir imprima quantos pontos fez o apostador.*/

#include <stdio.h>

int main(){
    int R[5], A[10], c=0;

    printf("LOTO \n Gabarito: \n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &R[i]);
    }

    printf("Aposta do jogador: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &A[i]);

    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 5; j++){
            if (R[j] == A[i])
                c++;
        }
    }

    printf("O apostador fez %d pontos", c);
}