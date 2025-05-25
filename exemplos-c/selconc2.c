#include <stdio.h>

int main ()
{
 int a,b;
 
 printf("Digite a "); 
 scanf("%d", &a);
 printf("Digite b ");  
 scanf("%d", &b);
  
 if (a > b)
   printf("A é o maior:  %d", a);
 else 
      if (b > a)
        printf("B é maior %d", b);
      else
        printf("%d e %d são iguais", a, b);      
 

} 
