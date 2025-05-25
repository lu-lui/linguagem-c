#include <stdio.h>
#include <time.h>
int main(){
    int t, notas[] = {100,50,20,10,5,2,1}; //declarando um vetor com as notas
    double time_spent = 0.0;
    
    printf("Digite Valor do troco: ");
    scanf("%d", &t);
    while (t <= 0){
	  printf("Valor negativo! \nDigite Valor do troco: ");
      scanf("%d", &t);
		}
    
 
    clock_t begin = clock();
    for (int i=0 ; i<=6;i++){
	  printf("%d notas de %d\n", t/notas[i], notas[i]);
	  t = t%notas[i];		
    }
    clock_t end = clock();
    
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("Tempo gasto %f segundos", time_spent);
}
