/*11.10 Ler um valor X e um valor Z (se Z for menor que X deve ser lido um novo valor para Z). Contar quantos números inteiros devemos somar em sequência ( a partir do X inclusive) para que a soma ultrapasse a Z o mínimo possível. Escrever o valor final da contagem.*/

#include <stdio.h>

int main(){
    int X, Z, C=0, soma=0;

    printf("Valor 1: ");
    scanf("%d", &X);

    printf("Valor 2: ");
    scanf("%d", &Z);    

    while (Z < Z){
        printf("Valor invalido, digite um valor maior que o valor 1: ");
        scanf("%d", &Z);  
    }

    do{
        soma += X + C;
        C++;
    } while (soma < Z);
    
    printf("%d", C);
}