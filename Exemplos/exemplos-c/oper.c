/*
Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular
e escrever a área do retângulo.
* area = base * altura
*/
#include <stdio.h>

int main ()
{
  //escrevendo um comentario
  int area ,base,altura;
  
  printf("Digite base: ");
  scanf("%d", &base);
  
  printf("Digite altura: ");
  scanf("%d", &altura);
  
  
  area = base * altura;
  
  printf ("area: %d", area);
}   
