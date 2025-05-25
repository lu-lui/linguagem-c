#include <stdio.h>

int main ()
{
 int a,b,c;
 
 printf("Digite a "); 
 scanf("%d", &a);
 printf("Digite b ");  
 scanf("%d", &b);
  printf("Digite c ");  
 scanf("%d", &c);
               
 if (a > b && a > c)
     printf("A é o maior");
 
 if (b > a && b > c)
   printf("B é o maior");
 
 if(c > b && c > a)
   printf("c é o maior");      
 

} 
