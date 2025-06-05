/*8.7.Reescreva o algoritmo do exercício 8.6 validando a resposta do usuário para a pergunta Novo Cálculo
(1.sim 2.não)? (aceitar apenas os código 1 ou 2).*/

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

        while (resposta != 1 && resposta != 2){
            printf("Resposta invalida, digite novamente:\n");
            scanf("%d", &resposta);
        }
        
    }while(resposta == 1);
}