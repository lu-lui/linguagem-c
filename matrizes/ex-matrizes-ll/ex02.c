/*17.2 Ler uma matriz M 4 x 4. A seguir ler o valor de 2 colunas. Copiar os elementos pares armazenados entre (inclusive) as duas colunas informadas para um vetor (sem deixar espaços entre os elementos do vetor). Após o término da cópia escrever o vetor.*/


#include <stdio.h>

int main(){
    int c1, c2, M[4][4], V[16], x=0;

    printf("Matriz M: \n");
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 4; c++){
            scanf("%d", &M[l][c]);
        }
    }
    
    printf("Escolha duas colunas: 1: ");
    scanf("%d", &c1);

    while (c1 < 0 || c1 > 3){
        printf("Valor invalido, tente novamente: ");
        scanf("%d", &c1);
    }

    printf("2: ");
    scanf("%d", &c2);

    while (c2 < 0 || c2 > 3){
        printf("Valor invalido, tente novamente: ");
        scanf("%d", &c2);
    }
    
    printf("Matriz M: \n");
    for (int l = 0; l < 4; l++){
        for (int c = c1; c <= c2; c++){
            if (M[l][c] % 2 == 0){
                V[x] = M[l][c];
                x++;
            }
        }
    }

    printf("Elementos pares entre %d e %d: \n", c1, c2);
    for (int i = 0; i <= c2; i++){
        printf("%d ", V[i]);
    }    
}
