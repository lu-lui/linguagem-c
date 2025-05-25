#include <stdio.h>

int main ()
{
   float r, a, b;
   
   printf("Digite a:");
   scanf("%f", &a );  
   
   do{
     printf("Digite b:");
     scanf("%f", &b );
     if(b==0)
       printf("Valor invalido\n");
   }while(b ==0);
   
   r = a / b;
   
   printf("%.2f / %.2f = %.2f", a,b,r); 
  
 
}   
