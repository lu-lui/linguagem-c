

#include<stdio.h>

int main(){
  float n1,n2, media;
  int op;
  do{
  printf("Digite nota1:");
  scanf("%f", &n1);
  while(n1 < 0 || n1 >10){
	  printf("Nota invalida");
	  printf("\nDigite nota1:");
      scanf("%f", &n1);
  }
  printf("Digite nota2:");
  scanf("%f", &n2);
  while(n2 < 0 || n2 >10){
	  printf("Nota invalida");
	  printf("\nDigite nota2:");
      scanf("%f", &n2);
  }
  media = (n1 + n2) / 2;
  printf("media : %.1f", media);


  printf("\nDeseja novo calculo 1. sim 2. não:");
  scanf("%d", &op); 
  }while(op == 1);

}
