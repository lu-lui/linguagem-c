#include <stdio.h>

int main ()
{
  int valor[5], i, ac=0,cont=0;
  float media;
  
  for (i = 0; i < 5; i++){
	  printf("%d - Digite valor:", i);
	  scanf("%d", &valor[i]);
	  ac = ac + valor[i];
  } 
  media = ac / 5.0;
  printf("media: %f", media);
  
  for (i = 0; i < 5; i++){
	 if (valor[i] > media)
	   cont++;
  } 
  printf("Valores acima da media: %d",cont);
  
}
