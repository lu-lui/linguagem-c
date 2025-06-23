/*11.4 Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média aritmética destas notas.*/

#include <stdio.h>

int main(){
    int x, aluno = 1;
    float nota, somaNota = 0, media;

    printf("Numero de alunos na turma: ");
    scanf("%d", &x);

    while (x <= 0){
        printf("Valor invalido, digite novamente: ");
        scanf("%d", &x);
    }

    for ( int i = 1; i <= x; i++){
        printf("Nota do aluno %d: ", aluno);
        scanf("%f", &nota);

        while (nota < 0)
        {
            printf("Nota invalida, digite novamente: ");
            scanf("%f", &nota);
        }
        
        somaNota = somaNota + nota; 
        aluno++;
    }
    
    media = somaNota / x;
    printf("A media de notas da turma foi: %.2f", media);
}