#include <stdio.h>

int main ()
{
int a,b,c;
 a = 0;
 printf("Digite a "); 
 scanf("%d", &a);
 printf("Digite b ");  
 scanf("%d", &b);
 printf("Digite c ");   
 scanf("%d", &c);
                    
 if ( (a > b) && (a > c))
    printf("Escreva %d e maior", a);
 else
    if ( (b > a) && (b > c))
      printf("Escreva %d e maior", b);
    else
      printf("Escreva %d e maior", c);
         
           
//    || operador lógico OU
//    && operador lógico E

/* operadores relacionais
   
   > maior
   < menor
   >= maior e igual
   <=  menor e igual
   ==  igual
   !=  diferente
    
   * 
   * 
   */ 


}
