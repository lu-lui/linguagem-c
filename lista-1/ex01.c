//Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.

#include <stdio.h>

int main(){
float base, altura, area;
    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = base * altura;

    if (base <= 0 || altura <= 0)
        printf("Nao e um retangulo");
    else
        printf("A area do retangulo e: %.1f", area);
}