
#include <stdio.h>

int main ()
{
   
   float nota1, nota2, media;
    
   printf("Digite nota1: ");
   
   
   scanf ("%f", &nota1);
   
   
   printf("Digite nota2: ");
   scanf ("%f", &nota2);
     
   media = (nota1 + nota2) / 2;
   
   if (media >= 7)
   {
      printf("Aprovado com media %.2f", media);
      printf("\n boas ferias");
   }
   else
   {  
      printf("Reprovado com media %.2f", media);  
   }
   


}
