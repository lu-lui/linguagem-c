#include<stdio.h>
#include<stdlib.h>

int fatorial(int x){
    int f=1,i;
    for (i = 1; i <=x; i++){
       f = f * i;
    }
     return f;  
}

int main(){
   int valor;
   
   printf("digite numero:");
   scanf("%d", &valor);
   printf("Fatorial: %d",fatorial(valor));
}