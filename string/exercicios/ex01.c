#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int tamanho;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    tamanho = strlen(texto);

    for (int  i = tamanho - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }


}