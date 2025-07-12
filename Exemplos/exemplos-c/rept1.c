#include <stdio.h>

int main ()
{
   float nota, soma = 0, media;
   int c, na;
    
   printf("digite o numero de alunos da turma:");
   scanf("%d", &na);
   
   for ( c= 1 ; c <=na ; c++){ 
      printf("Digite nota: ");
      scanf("%f", &nota);
      soma = soma + nota;
   }
   media = soma / na;
   printf("\nMedia geral da turma: %.1f", media);
   
}

