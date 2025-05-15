/*4.1.Escreva um algoritmo para ler as notas da 1a e 2a avaliações de um aluno, calcular a média e escrever se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a média calculada. OBS: Para ter direito ao exame o aluno deve obter média mínima 3.0.
[Entrada]    | [Entrada]    | [Entrada]
5.0 (nota 1) | 8.0 (nota 1) | 2.0 (nota 1)
4.0 (nota 2) | 9.0 (nota 2) | 1.0 (nota 2)
             |              |
[Saída]      | [Saída]      | [Saída]
4.5 (média)  | 8.5 (média)  | 1.5 (média)
em Exame     | Aprovado     | Reprovado*/

#include <stdio.h>

int main(){
    float nota1, nota2, media;
    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media do aluno: %.1f\n", media);

    if (media >= 7)
        printf("APROVADO");
    else 
        if (media <7 && media >= 3)
            printf("EM EXAME");
        else
            printf("REPROVADO");
}
