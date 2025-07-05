/*11.5 Ler 2 valores (considere que o primeiro valor lido sempre será menor que o segundo), calcular e escrever a soma dos números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).*/

#include <stdio.h>

int main(){
    int v1, v2, soma = 0;

    printf("Digite dois valores diferentes, em ordem crescente: \nValor 1: ");
    scanf("%d", &v1);

    printf("Valor 2: ");
    scanf("%d", &v2);

    while (v2 <= v1){
        printf("Valor invalido, digite um valor maior que %d: ", v1);
        scanf("%d", &v2);
    }
    
    for ( int i = v1; i <= v2; i++){
        soma = soma + v1;
        v1++;
    }
    printf("A soma dos numeros entre os numeros digitados (com ambos inclusos) e: %d", soma);
}