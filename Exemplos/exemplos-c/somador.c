/*
Ler 10 valores, calcular e escrever a média aritmética destes valores.
*/
#include <stdio.h>


int main ()
{
   float media;
   int c, valor, soma = 0;
   
   for (c = 0; c < 10 ;c++){             
      printf("Digite valor:");
      scanf("%d", &valor);
      soma = soma + valor; // acumulando
      printf("valor %d\n c %d\n soma %d\n", valor, c, soma);
                    
   }
   media = (float)soma / 10;//casting
   printf ("Media:  %.1f", media);

}
