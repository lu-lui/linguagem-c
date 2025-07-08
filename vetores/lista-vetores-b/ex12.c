/*15.12 Ler um vetor R de 10 elementos e um vetor S de 20 elementos . A seguir gere um vetor X que contenha uma única ocorrência dos elementos comuns a R e S (intersecção). Após completar o preenchimento escrever o vetor X. Considere que nos vetores R e S podem existir elementos repetidos.
[Entrada]
7 4 4 5 7 2 1 3 4 6 (vetor R)
12 4 4 8 27 12 11 31 42 61 5 2 9 9 1 2 17 9 2 19(vetor S)
[Saída]
4 5 2 1 (vetor X)*/

/*#include <stdio.h>

int main(){
    int R[10], S[20], X[10], x=0;

    printf("Vetor R: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &R[i]);
    }
    
    printf("Vetor S: \n");
    for (int i = 0; i < 20; i++){
        scanf("%d", &S[i]);
    }

    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            if (R[j] == S[i]){
                X[x] = R[i];
                x++;
            }
            
        }
        
    }
    
    for (int i = 0; i < x; i++){
        printf("%d ", X[i]);
    }
}*/