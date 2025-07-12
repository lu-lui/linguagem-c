/*
Ler 10 valores e escrever quantos destes valores são negativos.
*/
#include <stdio.h>


int main ()
{
   
   int c,c2=0, valor;
   
   for (c = 1; c <= 10 ;c++){             
      printf("Digite valor:");
      scanf("%d", &valor);
      if (valor < 0 )
         c2++; 
   }
   printf("Numeros negativos: %d", c2);

}
