/*17.6 Ler uma matriz 4 x 5 cujo conteúdo representa a população de 5 cidades de 4 estados Brasileiros ( as linhas representam o código de estados Brasileiros (0 a 3)). Escrever o código do estado mais populoso (considerando as cidades armazenadas na matriz), o código do estado onde está localizada a cidade mais populosa.*/

/*#include <stdio.h>

int main(){
    int M[4][5], Pop[5]={0}, maior=0;

        for (int l = 0; l < 4; l++){ 
            for (int c = 0; c < 5; c++){   
                scanf("%d", &M[l][c]);
        }
    }

    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 5; c++){
            Pop[l] += M[l][c];
        }
    }

    for (int i = 0; i < 4; i++){
        if (Pop[i] > maior){
            maior = i;
        }
    }
    
    for (int l = 0; l < 4; l++){    
        for (int c = 0; c < 5; c++){
        
           printf("%d ", M[l][c]);
        }
        printf("\n");
    }
    printf("Estado com a maior populacao %d", maior);
}
