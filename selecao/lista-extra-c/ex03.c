/*11.3 Ler 10 valores, calcular e escrever a média aritmética destes valores.*/

#include <stdio.h>

int main(){
    float valor, somavalor = 0, media;

    for (int i = 1; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);

        somavalor = somavalor + valor;
    }
    
    media = somavalor / 10;

    printf("A media dos valores digitados e: %.2f", media);
}