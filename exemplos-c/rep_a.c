#include <stdio.h>

int main ()
{
   
   int valor;
    
   printf("digite valor:");
   scanf("%d", &valor ); 
   
   while ( valor <=0){
	  printf("valor inválido \ndigite valor novamente:");
	  scanf("%d", &valor ); 
   }
	   
	printf("\n\nvalor: %d",valor);   
}	   
