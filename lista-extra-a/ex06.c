/*8.6.Reescreva o algoritmo para o problema 8.5 para que no final seja impressa a mensagem Novo cálculo (1.sim 2.não) solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente. Se for informado o código 1 deve ser repetida a execução de todo o algoritmo para permitir um novo cálculo, caso contrário ele deve ser encerrado.*/

#include <stdio.h>

int main(){
    
    float nota1, nota2, media;
    int resposta;

    do{
        printf("Nota 1: ");
        scanf("%f", &nota1);

        while (nota1 <= 0 || nota1 > 10)
        {
            printf("Nota invalida\n");
            scanf("%f", &nota1);
        }
        
        printf("Nota 2: ");
        scanf("%f", &nota2);

        while (nota2 <= 0 || nota2 > 10)
        {
            printf("Nota invalida\n");
            scanf("%f", &nota2);
        }

        media = (nota1 + nota2) / 2;

        printf("Media do aluno: %.1f\nDeseja fazer o calculo novamente?\n 1.Sim 2.Nao\n", media);
        scanf("%d", &resposta);

    }while(resposta == 1);
}