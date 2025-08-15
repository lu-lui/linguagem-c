/*Escreva um programa em C que leia uma frase e uma palavra, armazenando-as em duas strings respectivamente. Verifique se esta palavra está contida na frase pelo menos uma vez e escreva uma mensagem afirmando ou negando esse fato*/

#include <stdio.h>

int main(){
    char frase[100], palavra[50];

    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);
    fflush(stdin);

    printf("Digite uma palavra: \n");
    fgets(palavra, sizeof(palavra), stdin);
    fflush(stdin);
    
}