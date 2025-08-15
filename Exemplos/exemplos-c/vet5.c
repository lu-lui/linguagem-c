/*Ler um vetor X de 10 elementos. 
 * A seguir copie todos os valores negativos de vetor X
 *  para o vetor R (sem deixar elementos vazios
 *  entre os valores copiados). Escrever o vetor R
 */ 


#include <stdio.h>
#include <string.h>
	int main() {
	int x[10], r[10], i, c=0;

	for (i =0; i<10 ; i++){
		printf ("digite x[%d]: ", i);
		scanf("%d",&x[i]);
	}

	for (i =0; i<10 ; i++){
		if(x[i] < 0){
		r[c] = x[i];
		c++;
		}
	}

	for (i =0; i<c ; i++){
		printf ("r[%d]: %d \n", i, r[i]);
	}
}
