/*3. Faça um algoritmo para calcular o fatorial de um número.*/

#include <stdio.h>

int main(){

    int numero, n;

    printf("Digite um numero: ");
    scanf("%d", numero);

    n = numero; 
    for(n = numero; n = 1; n--){
        n * n;
    printf("O fatorial de %d e %d", numero, n);
    }
}
//fazer dps