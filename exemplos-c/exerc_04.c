#include <stdio.h>

int main ()
{
    int a,b,c;
    
    printf("Digite lado A:");
    scanf("%d", &a);
    printf("Digite lado B:");
    scanf("%d", &b);
    printf("Digite lado C:");
    scanf("%d", &c);
    
    if( (a < (b+c)) && (b < (a+c)) && (c < (a+b)))
      prinf("é um triangulo");
    else
      printf("não é um triangulo");
        
    
    

}
