/*15.3 Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor após a retirada dos nulos e negativos.*/

#include <stdio.h>

int main(){
    int D[10];

    printf("Vetor D: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &D[i]);
    }

    printf("Vetor D apenas com numeros positivos: ");
    for (int i = 0; i < 10; i++){
        if (D[i] > 0)
            printf("%d ", D[i]);
    }
    
}
