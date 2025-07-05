/*4. Escreva um algoritmo que leia uma quantidade indeterminada de idades de pessoas (condição de término será a digitação de um valor negativo). Conte e mostre quantas destas pessoas podem votar (idade >= 16 anos).*/

#include <stdio.h>

int main(){
    int idade, total = 0, voto = 0;
    
    do{
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        
        if(idade > 0)    
            total++;

        if(idade >= 16)
            voto++;
    }while(idade >= 0);

    printf("Do total de %d pessoas, %d estao aptas a votar.", total, voto);
}