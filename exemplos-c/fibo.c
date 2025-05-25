#include <stdio.h>

int main ()
{
   int soma,t1,t2,t3,x,i;
   
   printf("Digite o numero de termos: ");
   scanf("%d",&x);
   
   t1 =0;
   t2=1;
   soma=0;
   
   if(x>=0)
      printf("%d ",t1);
   if(x>=1){
      printf("%d ",t2);
      soma+=t2; // soma = soma + t2
   }
   for(i=3;i<=x;i++){
	   t3=t1+t2;
	   printf("%d ", t3);
	   soma+=t3;
	   t1=t2;
	   t2=t3;
	   }
    printf("\nsoma : %d",soma);
}
