/*Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o
quadrante ao qual o ponto pertence. Considere que o usuário não informará nenhuma coordenada igual a zero.
*/


#include<stdio.h>

int main(){
  int x,y;
  
  printf("Digite x:");
  scanf("%d", &x);
  printf("Digite y:");
  scanf("%d", &y);
  
  if (x > 0 && y >0)
    printf("Pertence ao primeiro quadrante");
  
  if (x < 0 && y >0) 
     printf("Pertence ao segunto quadrante");
     
  if (x < 0 && y <0) 
     printf("Pertence ao terceiro quadrante"); 
     
  if (x > 0 && y <0) 
     printf("Pertence ao quarto quadrante");     
}
