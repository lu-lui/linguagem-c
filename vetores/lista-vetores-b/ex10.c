/*15.10 Ler um vetor B de 10 elementos(considere que podem existir elementos repetidos). A seguir copie para um vetor C apenas os elementos de B que não se repetem. Após o término da cópia escrever o vetor C.*/

#include <stdio.h>

int main(){
    int B[10], C[10], x=0;

    printf("Vetor B: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        int repetido = 0;

        for (int j = 0; j < 10; j++) {
            if (i != j && B[i] == B[j]) {
                repetido = 1; 
            }
        }

        if (repetido == 0) {
            C[x] = B[i];
            x++;
        }
    }

    for (int i = 0; i < x; i++){
        printf("%d ", C[i]);
    }
}