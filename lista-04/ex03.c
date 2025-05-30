/*3. Faça um algoritmo para calcular o fatorial de um número.*/

#include <stdio.h>

int main(){

    int numero, n, fatorial;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    fatorial = 1; 

    for (n = numero; n >= 2; n--){
        fatorial = fatorial * n;
    }

    printf("O fatorial de %d e %d", numero, fatorial);
}