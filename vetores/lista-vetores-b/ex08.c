/*15.8 Ler um vetor B de 9 elementos e um valor X. Incluir o valor X na primeira posição do vetor B fazendo com que os elementos existentes dentro do vetor sejam deslocados de uma posição para o final (Considere que existe espaço no vetor para o deslocamento). Logo após o processamento escrever o vetor B.*/

#include <stdio.h>

int main(){
    int B[10], X;

    printf("Vetor B: \n");
    for (int i = 0; i < 9; i++){
        scanf("%d", &B[i]);
    }

    printf("Valor X: \n");
    scanf("%d", &X);

    for (int i = 9; i >= 0; i--){
        B[i] = B[i-1];
    }
    
    B[0] = X;

    printf("Vetor B apos processamento: \n");
    for (int i = 0; i < 10; i++){
        printf("%d ", B[i]);
    }
}