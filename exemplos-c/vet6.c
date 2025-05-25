/*Ler 2 vetores X e Y de 10 elementos cada 
 * um (ocupando as posições de 0 a 9 em cada vetor). 
 * Intercalar os elementos desses 2 vetores formando assim, 
 * um novo vetor R de 20 elementos, onde nas posições 
 * pares de R (0,2,4,...,8) estejam os elementos de X e 
 * nas posições ímpares (1,3,...,9) os elementos de Y. 
 * Após a geração completa do vetor R, escreva-o.
 */ 


#include <stdio.h>
#include <string.h>
int main() {
int x[10],y[10], r[20], i;

for (i =0; i<10 ; i++){
	printf ("digite x[%d]: ", i);
	scanf("%d",&x[i]);
}
for (i =0; i<10 ; i++){
	printf ("digite y[%d]: ", i);
	scanf("%d",&y[i]);
}

for (i =0; i<10 ; i++){
   r[i*2] = x[i];
   r[i*2+1] = y[i];
   }
	
for (i =0; i<20 ; i++){
   printf ("digite r[%d]: %d \n ", i, r[i]);
}
 
}
