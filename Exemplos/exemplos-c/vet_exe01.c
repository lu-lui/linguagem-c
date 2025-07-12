#include<stdio.h>

int main(){
  int i, maior=0;
  float  nota[5];
  
  for (i=0; i<=4; i++){
    printf("digite valor:");
    scanf("%f", &nota[i]);
  }
 
  for (i=1; i<=4; i++){
	  if (nota[maior] < nota[i])
	    maior = i;
	  }
  for (i=0; i<=4; i++){
    printf("v1 [%d]:%f\n", i, nota[i]);
  }
  
  printf("indice maior: %d \n nota maior: %f", maior, nota[maior]);
}
