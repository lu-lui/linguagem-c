/*14.4 Ler um vetor C de 10 elementos inteiros. Após o término da leitura, trocar todos os valores negativos do vetor C por 0. Após todas as trocas terem sido efetuadas, escrever o vetor C.*/

#include <stdio.h>

int main(){
    int C[10], x;

    for (int i = 0; i < 10; i++){
        scanf("%d", &x);

        if(x < 0)
            C[i] = 0;
        else 
            C[i] = x;  
    }

    for(int i=0; i<10; i++){
        printf("%d ", C[i]);
    }
    
}