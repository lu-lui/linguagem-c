/*4. Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 10 a 1 do valor lido.*/

#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor inteiro de 1 a 10: ");
    scanf("%d", &valor);

    while (valor < 1 || valor > 10){
        printf("Valor invalido.\nDigite novamente:");
        scanf("%d", &valor);
    }

    for(int m = 10; m >= 1; m--){
        printf("%d X %d = %d\n", valor, m, valor * m);
    }
}