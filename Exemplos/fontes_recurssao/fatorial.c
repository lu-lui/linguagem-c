#include<stdio.h>
#include<stdlib.h>

int fatorial(int x){
    if(x == 1)
      return 1;
    else
      return x * fatorial(x-1);    
}

int main(){
   int valor;
   
   printf("digite numero:");
   scanf("%d", &valor);
   printf("Fatorial: %d",fatorial(valor));
}