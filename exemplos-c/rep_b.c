#include <stdio.h>

int main ()
{
   
   int valor;
    

   do{
	  printf("digite valor:");
	  scanf("%d", &valor ); 
	  if(valor <=0)
		  printf(" Valor inválido\n");
	  
   }while ( valor <=0);
	   
	printf("\n\nvalor: %d",valor);   
}	  
