/*4. Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 10 a 1 do valor lido.*/

#include <stdio.h>

int main(){
    int valor, multiplicador;

    printf("Digite um valor inteiro de 1 a 10: ");
    scanf("%d", &valor);

    while (valor < 1 || valor > 10){
        printf("Valor invalido.\nDigite novamente:");
        scanf("%d", &valor);
    }

    for(multiplicador = 10; multiplicador >= 1; multiplicador--){
        printf("%d X %d = %d\n", valor, multiplicador, valor * multiplicador);

    }
}