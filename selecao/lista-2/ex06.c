/*Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e a mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" caso contrário*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    int codigo;

    printf("Codigo do aluno: ");
    scanf("%d", &codigo);

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    if (nota1 > nota2 && nota1 > nota3) 
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10;
    else
        if (nota2 > nota1 && nota2 > nota3)
            media = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10;
        else
            media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10;
    
    printf("Codigo do aluno: %d\nNota 1: %.1f\nNota 2: %.1f\nNota 3: %.1f\nMedia: %.1f\n", codigo, nota1, nota2, nota3, media);
    
    if (media >= 5)
        printf("APROVADO");
    else
        printf("REPROVADO");
}