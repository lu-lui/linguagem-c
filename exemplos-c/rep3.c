#include <stdio.h>

int main ()
{
   
   int numero;
    
   
   do{
      printf("Digite um  numero: ");
      scanf ("%d", &numero);
      if (numero > 0){
         printf("Positivo\n");
      }  
      else{  
         if (numero < 0 )
         printf("Negativo\n");  
      }
   }while (numero != 0);

}


