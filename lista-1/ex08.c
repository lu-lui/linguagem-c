/*Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).*/

#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0)
        printf("O numero e positivo");
    else 
        printf("O numero e negativo");
        
}