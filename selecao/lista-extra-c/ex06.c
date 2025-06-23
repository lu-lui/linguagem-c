/*11.6 Reescreva o exercício anterior considerando que o primeiro pode ser maior que o segundo e viceversa.*/

#include <stdio.h>

int main(){
    int v1, v2, soma = 0;

    printf("Digite dois valores diferentes, em ordem crescente: \nValor 1: ");
    scanf("%d", &v1);

    printf("Valor 2: ");
    scanf("%d", &v2);

    while (v2 == v1){
        printf("Valor invalido, digite um valor diferente de %d: ", v1);
        scanf("%d", &v2);
    }
    
    if(v1 < v2){
        for ( int i = v1; i <= v2; i++){
        soma = soma + v1;
        v1++;
        }
    } else{
        for ( int i = v2; i <= v1; i++){
        soma = soma + v2;
        v2++;
        }
    }

    printf("A soma dos numeros entre os numeros digitados (com ambos inclusos) e: %d", soma);
}