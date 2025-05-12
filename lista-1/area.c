//Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.

#include <stdio.h>

int main(){
int b, h;
float a;
    printf("Digite o valor da base: ");
    scanf("%d", &b);
    printf("Digite o valor da altura: ");
    scanf("%d", &h);
    a = b * h;
    printf("A area do retangulo e: %.1f", a);
}