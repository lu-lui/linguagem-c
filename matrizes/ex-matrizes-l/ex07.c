/*16.7.Ler um vetor G de 13 elementos que contenha o gabarito da loteria esportiva codificado da seguinte forma: 1-coluna um, 2-coluna do meio, 3-coluna dois. 
Logo após, ler uma matriz 13 x 3 que contenha a aposta de um jogador. Considere que cada posição da matriz armazenará o valor 1 se for apostado, 0 caso contrário. Calcular e escrever o número de pontos obtidos pelo jogador. Escrever também o número de apostas simples, dupla ou tripla utilizadas pelo apostador*/

#include <stdio.h>

int main() {
    int G[13], M[13][3];
    int i, j;
    int pontos = 0;
    int simples = 0, duplas = 0, triplas = 0;

    // Ler gabarito
    printf("Gabarito da Loteria (13 numeros de 1 a 3):\n");
    for (i = 0; i < 13; i++) {
        scanf("%d", &G[i]);
    }

    // Ler apostas
    printf("Matriz de apostas (13 linhas x 3 colunas - 1 para marcado, 0 para nao):\n");
    for (i = 0; i < 13; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Verificar resultados
    for (i = 0; i < 13; i++) {
        int marcados = 0; // conta quantos "1" na linha

        for (j = 0; j < 3; j++) {
            if (M[i][j] == 1) {
                marcados++;
            }
        }

        // Classificar aposta
        if (marcados == 1) simples++;
        else if (marcados == 2) duplas++;
        else if (marcados == 3) triplas++;

        // Verificar acerto: G[i] é 1, 2 ou 3 (coluna certa)
        if (M[i][G[i] - 1] == 1) {
            pontos++;
        }
    }

    // Exibir resultados
    printf("Pontos: %d\n", pontos);
    printf("Simples: %d\n", simples);
    printf("Duplas: %d\n", duplas);
    printf("Triplas: %d\n", triplas);
}
