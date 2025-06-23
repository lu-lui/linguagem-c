/*9.3.Reescreva o algoritmo do exercício 9.2, para que seja impresso no final, o percentual de alunos aprovados, reprovados ou em exame em relação a quantidade total de alunos cujas notas foram informadas.
[Entrada] [Saída]
8 (nota 1) 9 (nota 2) 8.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
5 (nota 1) 4 (nota 2) 4.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
5 (nota 1) 7 (nota 2) 6 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
3 (nota 1) 2 (nota 2) 2.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
8 (nota 1) 10 (nota 2) 9 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
2
 3 (quantidade de aprovados)
1 (quantidade de reprovados)
1 (quantidade de alunos em exame)
60 (percentual de aprovados)
20 (percentual de reprovados)
20 (percentual em exame)
*/

#include <stdio.h>

int main(){
    float n1, n2, media, pA, pR, pE;
    int resposta, aprovado=0, reprovado=0, exame=0, aluno=0; //Iniciar contador

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

        aluno = aluno + 1;
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

        while(resposta != 1 && resposta != 2){
            printf("Resposta invalida, tente novamente:\n");
            scanf("%d", &resposta);
        }
    } while (resposta == 1);
   
    pA = (float) aprovado / aluno * 100;
    pE = (float) exame / aluno * 100;
    pR = (float) reprovado / aluno * 100;

    printf("Total de alunos na turma: %d\nAlunos aprovados: %d\nAlunos em exame: %d\nAlunos reprovados: %d\n\nPercentual de aprovados: %.2f\nPercentual de alunos em exame: %.2f\nPercentual de reprovados: %.2f\n", aluno, aprovado, exame, reprovado, pA, pE, pR);
}