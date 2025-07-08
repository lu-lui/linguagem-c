/*15.7 Ler um vetor de até 10 elementos. A leitura deverá ser executada até que o vetor fique totalmente preenchido ou seja informado um valor negativo ou zero. Ler 2 valores que representam 2 posições(índices) no vetor (aceitar apenas índices válidos), escrever o número de valores maiores que 4 existentes entre (inclusive) as posições informadas (considere que a primeira pode ser maior que a segunda e vice-versa).*/

#include <stdio.h>

int main(){
    int V[10], x=0, y, p1, p2, maior4=0;

    printf("Valores do vetor V: \n");
     do {
        scanf("%d", &y);
        if (y > 0){
            V[x] = y;
            x++;
       } 
    } while (y > 0 && x < 10);
    
    printf("Posicao 1: ");
    scanf("%d", &p1);

    while (p1 >= x || p1 < 0){
        printf("Valor invalido, digite uma posição entre 0 e %d: ", x-1);
        scanf("%d", &p1);
    }
    
    printf("Posicao 2: ");
    scanf("%d", &p2);

    while (p2 >= x || p2 < 0){
        printf("Valor invalido, digite uma posicao entre 0 e %d: ", x-1);
        scanf("%d", &p2);
    }

    if(p1 < p2){
        for (int i = p1; i <= p2; i++){
            if (V[i] > 4)
                maior4++;   
        }
    } else{
        for (int i = p2; i <= p1; i++){
            if (V[i] > 4)
                maior4++;
        }
    }
    printf("Numero de valores maior que 4: %d", maior4);
}