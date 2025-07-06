/*15.6 Ler um vetor de até 10 elementos. A leitura deverá ser executada até que o vetor fique totalmente preenchido ou seja informado um valor negativo ou zero. Calcular e imprimir a soma dos valores maiores que 5 existentes no vetor.*/

#include <stdio.h>

int main(){
    int V[10], x=0, y, soma=0;

    printf("Valores do vetor V: \n");
     do {
        scanf("%d", &y);
        if (y > 0) {
        V[x] = y;
        x++;

        if(y > 5)
        soma += y;
       } 
    } while (y > 0 && x < 10);

    printf("Soma dos valores maiores que 5: %d ", soma);
}