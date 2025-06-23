/*Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever NÃO É MAIOR QUE 10!*/

#include <stdio.h>

int main(){
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if (valor == 10)
        printf("O VALOR E 10");
    else 
        if (valor > 10)
            printf("E MAIOR QUE 10!");
        else
            printf("NAO E MAIOR QUE 10!");
}