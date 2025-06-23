/*3. Faça um algoritmo para calcular o fatorial de um número.*/

#include <stdio.h>

int main(){

    int numero, n, fatorial=1;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    while(numero < 1){
        printf("Valor invalido, digite um valor maior que 0.\n");
        scanf("%d", &numero);
    }

    for (n = numero; n >= 2; n--){
        fatorial = fatorial * n;
    }

    printf("O fatorial de %d e %d", numero, fatorial);
}