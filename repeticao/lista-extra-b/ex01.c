/*Exercícios 09 – Algoritmos com repetição III
9.1.Escreva um algoritmo para ler 2 notas de um aluno, calcular e imprimir a média final. Logo após escrever a mensagem "Calcular a média de outro aluno 1.Sim 2.Não?" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente, caso contrário deve ser encerrado imprimindo a quantidade de alunos aprovados.*/

#include <stdio.h>

int main(){
    float n1, n2, media;
    int resposta, aprovado=0; //Iniciar contador

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

        printf("Media final: %.2f\nCalcular a media de outro aluno?\n1.Sim 2.Nao\n", media);
        scanf("%d", &resposta);
    } while (resposta == 1);
   
    printf("Alunos aprovados: %d", aprovado);
}