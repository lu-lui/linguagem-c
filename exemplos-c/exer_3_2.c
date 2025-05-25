/*Faça um algoritmo que leia um número e mostre
se ele é positivo, negativo ou zero
*/

#include <stdio.h>

int main ()
{
  int n;
  
  printf("Digite valor: ");
  scanf("%d",&n);

  if( n > 0)
    printf("Positivo");
  else if (n < 0)
          printf("Negativo");
       else
          printf("Zero");   
       	
}
