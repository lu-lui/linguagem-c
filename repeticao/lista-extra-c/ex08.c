/*11.8 Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1,2,3,4,...) para que a sua soma ultrapasse a 100 o mínimo possível.*/

#include <stdio.h>

int main(){
    
    int x=0, soma=0;

    do{
        x++; 
        soma += x;
    } while (soma < 100);
    
    printf("%d", x);
}