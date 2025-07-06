/*15.4 Ler as notas finais de uma turma de 10 alunos armazenando-as em um vetor N. A seguir calcule a média aritmética das notas dos alunos aprovados (nota maior ou igual a 6). Armazene em um vetor P a posição (índice) que cada aluno ocupa no vetor N, dos alunos que obtiveram nota maior que a média calculada. Imprimir a média calculada e logo após o vetor P. OBS: Não deixar valores em branco entre os elementos de P*/

#include <stdio.h>

int main(){
    float N[10], soma=0, media; 
    int a=0, b=0, P[10];

    printf("Notas dos alunos: \n");
    for (int i = 0; i < 10; i++){
        scanf("%f", &N[i]);
        if (N[i] >= 6){
            soma += N[i];
            a++; 
        }
   }
   
   media = soma / a;

   printf("Media da turma: %.2f \nIndices dos alunos acima da media: ", media);

   for (int i = 0; i < 10; i++){
        if (N[i] > media){
            P[b] = i;
            printf("%d ", P[b]);
            b++;
        }
   }
}