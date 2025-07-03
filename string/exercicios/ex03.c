/* 3. Escreva um programa que conte a quantidade de palavras de um texto digitado pelo teclado. (Uma palavra é qualquer sequência de caracteres separada por um ou mais espaços).*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int palavras = 1;

    fgets(s, 100, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i - 1] == ' ') {
            palavras++;
        }
    }

    printf("O texto possui %d palavras\n", palavras);
}