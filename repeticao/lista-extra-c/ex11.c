/*11.11 A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que mostre os 20 primeiros números dessa série.*/

#include <stdio.h>

int main(){

    int x=0, y=1, z;

    printf("%d %d ", x, y);

    for (int i = 0; i < 18; i++){
        z = x + y;
        x = y; 
        y = z;
        
        printf("%d ", z);
    }
    
}