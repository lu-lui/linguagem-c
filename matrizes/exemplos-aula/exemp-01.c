/*Algoritmo para escrever uma matriz 3x3 e preencher tdo com 0.*/

#include <stdio.h>

int main(){

    int m[3][3];

    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            m[l][c] = 0;
            
             printf("%d ", m[l][c]);
        }
       printf("\n");
    }

}