#include <stdio.h>

int main ()
{
   
   int numero;
 
   printf("Digite um  numero: ");
   scanf ("%d", &numero);
   
   while (numero != 0){
      if (numero > 0){
         printf("Positivo\n");
      }  
      else{  
         printf("Negativo\n");  
      }
      printf("Digite um  numero: ");
      scanf ("%d", &numero);
      
   }

}




