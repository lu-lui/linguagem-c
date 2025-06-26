/*14.3 Preencher um vetor B de 10 elementos com 10 se o índice do elemento for ímpar, e 20 se for par. Escrever o vetor B após o seu total preenchimento.*/

#include <stdio.h>

int main(){
    int B[10], x;

   for(int i=0; i<10; i++){
        scanf("%d", &x);
       
        if(x % 2 == 0)
            B[i] = 20;
        else 
             B[i] = 10;
   } 

    for(int i=0; i<10; i++){
        printf("%d ", B[i]);
    }
}