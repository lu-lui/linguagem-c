#include <stdio.h>

int main ()
{
   
   int numero, c, cp = 0, ci = 0;
   
   for (c = 1; c <= 10 ;c++){              
      printf("Digite um  numero: ");
      scanf ("%d", &numero);
      if (numero%2 == 0 ){
         printf("Par\n");
         cp++;
      } else{
         printf("impar\n");
         ci++;
         }
       
     
   }
   
   printf("valores par %d\n valores impares %d", cp, ci);

}

