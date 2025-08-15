/*Escreva um programa em C que leia uma frase e um caractere. Conte e escreva quantas vezes este caractere aparece na frase*/

#include <stdio.h>

int main(){
    char frase[100], caractere;
    int c = 0;

    printf("Escreva uma frase: \n");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    for (int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == caractere)
        c++;
    }
    
    printf("O caractere %c aparece %d vezes na frase", caractere, c, frase);
}