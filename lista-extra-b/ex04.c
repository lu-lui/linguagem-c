/*9.4.Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 2009.
OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.*/

#include <stdio.h>

int main(){
    int senha, tentativa=1;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while(senha != 2009){    
    printf("ACESSO NEGADO\nDigite a senha: ");
        scanf("%d", &senha);

        tentativa++;
    } 

    printf("ACESSO PERMITIDO\nNumero de tentativas: %d", tentativa);
}