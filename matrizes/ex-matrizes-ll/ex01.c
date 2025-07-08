/*17.1 Ler uma matriz M 6 x 6. Copiar para um vetor M o maior elemento de cada linha da matriz. Após o término da cópia imprimir o vetor M.*/

#include <stdio.h>
#define tam 6

int main(){
    int m[tam] = {-1000}, M[tam][tam];

    for (int i = 0; i < tam; i++){
        m[tam] = -1000;
    }
    
    printf("Matriz M: \n");
    for (int l = 0; l < tam; l++){
        for (int c = 0; c < tam; c++){
           scanf("%d", &M[l][c]);
            if (M[l][c] > m[l])
                m[l] = M[l][c];
        }
    }
    
    printf("Vetor M com os maiores valores de cada linha da matriz M: ");
    for (int i = 0; i < tam; i++){
        printf("%d ", m[i]);
    }
}
