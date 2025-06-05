/*9.2.Reescreva o algoritmo do exercício 9.1, para que seja impressa no final, a quantidade de alunos aprovados, reprovados ou que ficaram em exame.*/

#include <stdio.h>

int main(){
    float n1, n2, media;
    int resposta, aprovado=0, reprovado=0, exame=0; //Iniciar contador

    do{
        printf("Nota 1: ");
        scanf("%f", &n1);

        while (n1 < 0 || n1 > 10){
            printf("Nota invalida, digite novamente\nNota 1: ");
            scanf("%f", &n1);
        }
        
        printf("Nota 2: ");
        scanf("%f", &n2);

        while (n2 < 0 || n2 > 10){
            printf("Nota invalida, digite novamente\nNota 2: ");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2;

        if(media >= 7)
            aprovado = aprovado + 1; //ou aprovado++
        else
            if(media >= 3)
                exame = exame + 1;
            else
                reprovado = reprovado + 1;
        printf("Media final: %.2f\nCalcular a media de outro aluno?\n1.Sim 2.Nao\n", media);
        scanf("%d", &resposta);
    } while (resposta == 1);
   
    printf("Alunos aprovados: %d\nAlunos em exame: %d\nAlunos reprovados: %d", aprovado, exame, reprovado);
}