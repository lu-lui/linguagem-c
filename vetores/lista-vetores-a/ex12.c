/*14.12 Ler um vetor X de 10 elementos. A seguir copie todos os valores negativos de vetor X para o vetor R (sem deixar elementos vazios entre os valores copiados). Escrever o vetor R.*/

#include <stdio.h>

int main(){
    int X[10], R[10], a=0;

    printf("Vetor X: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < 10; i++){
        if (X[i] < 0){
            R[a] = X[i];
            a++;
        }
    }
    
    for (int i = 0; i < a; i++){
      printf("%d ", R[i]);
    }
    
}