/*11.7 Ler o número de alunos de uma turma. Ler as notas das 2 avaliações de cada aluno. Calcular e escrever:
- O número de alunos aprovados.
- O número de alunos reprovados.
- O número de alunos em exame.
- A média aritmética das notas finais dos alunos aprovados.
- O percentual de alunos reprovados em relação ao total de alunos da turma.*/

#include <stdio.h>

int main(){
    int alunos, aprovado=0, reprovado=0, exame=0;
    float n1, n2, media, somaAp=0, mediaAp, percentualRep;

    printf("Digite o numero de alunos da turma: ");
    scanf("%d", &alunos);

    while (alunos <= 0){
        printf("Numero de alunos invalido, digite novamente: ");
        scanf("%d", &alunos);
    }

    for (int i = 1; i <= alunos; i++){
        printf("Nota do aluno %d \nNota 1: ", i);
        scanf("%f", &n1);

        while (n1 < 0 || n1 > 10){
            printf("Nota invalida, digite novamente: ");
            scanf("%f", &n1);
        }
        
        printf("Nota 2: ");
        scanf("%f", &n2);

        while (n2 < 0 || n2 > 10){
            printf("Nota invalida, digite novamente: ");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2;
        
        if (media < 3)
            reprovado++;
        else 
            if (media >= 3 && media < 7)
            exame++;
            else{
                aprovado++;
                somaAp = somaAp + media;
            } 
    }
    
    printf("Alunos aprovados: %d \nAlunos reprovados: %d \nAlunos em exame: %d \n", aprovado, reprovado, exame);

    mediaAp = somaAp / aprovado;
    printf("Media de nota dos alunos aprovados: %.1f \n", mediaAp);

    percentualRep = (float )reprovado / alunos * 100;
    printf("Percentual de reprovados: %.1f", percentualRep);
    
}