/*14.11 Ler um vetor que contenha as notas de uma turma de 10 alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima da média. Escrever a média e o resultado da contagem.*/

#include <stdio.h>

int main(){
    int aluno=1, a=0;
    float T[10], soma=0, media;

    for (int i = 0; i < 10; i++){
        printf("Nota do aluno %d: ", aluno);
        scanf("%f", &T[i]);

        soma += T[i];

        if (T[i] > 7)
            a++;
        
        aluno++;
    }
    
    media = soma / 10;

    printf("Media da turma: %.1f \nAlunos acima da media: %d", media, a);
}